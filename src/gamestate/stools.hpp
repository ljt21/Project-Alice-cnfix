#pragma once
#include <vector>
#include <functional>
#include <cstring>
#include <stdint.h>
#include <string>
#include <string_view>
#include <array>
#include <span>
#include <bit>
#include <assert.h>

namespace serialization {


// 序列化输出缓冲区：用于将数据写入字节流，支持段落（section）和延迟写入（relocation）
class out_buffer {
private:
	std::vector<char> data_;
	std::vector<std::pair<size_t, std::function<void(out_buffer&)>>> pending_writes;
	std::vector<size_t> open_sections;
public:
	// 获取缓冲区数据指针
	char const* data() const {
		return data_.data();
	}
	// 获取缓冲区数据大小
	size_t size() const {
		return data_.size();
	}
	// 完成所有待处理的延迟写入
	void finish_pending() {
		while(!pending_writes.empty()) {
			auto relocation_address = data_.data() + pending_writes.back().first;
			uint32_t new_address = uint32_t(data_.size());
			std::memcpy(relocation_address, &new_address, sizeof(uint32_t));

			pending_writes.back().second(*this);

			pending_writes.pop_back();
		}
	}
	// 开始一个新段落：写入占位的大小字段
	void start_section() {
		auto sz_address = data_.size();
		uint32_t placeholder = 0;
		write(placeholder);
		open_sections.emplace_back(sz_address);
	}
	// 结束当前段落：回填段落大小
	void finish_section() {
		assert(!open_sections.empty());

		auto size_address = data_.data() + open_sections.back();
		uint32_t bytes_in_section = uint32_t(data_.size() - open_sections.back());
		std::memcpy(size_address, &bytes_in_section, sizeof(uint32_t));

		open_sections.pop_back();
	}
	// 最终化缓冲区：完成所有待处理写入并关闭所有未关闭段落
	void finalize() {
		finish_pending();
		while(open_sections.empty() == false) {
			finish_section();
		}
	}

	// 写入一个基本类型数据
	template<typename T>
	void write(T const& d) {
		auto start_size = data_.size();
		data_.resize(start_size + sizeof(T), 0);
		std::memcpy(data_.data() + start_size, &d, sizeof(T));
	}
	// 写入固定数量的基本类型数据（来自指针）
	template<typename T>
	void write_fixed(T const* d, size_t count) {
		auto start_size = data_.size();
		data_.resize(start_size + sizeof(T) * count, 0);
		std::memcpy(data_.data() + start_size, d, sizeof(T) * count);
	}
	// 写入可变数量的基本类型数据（先写入数量，再写入数据）
	template<typename T>
	void write_variable(T const* d, size_t count) {
		uint32_t c = uint32_t(count);
		write(c);
		write_fixed(d, count);
	}
	// 写入一个延迟写入项：先占位，后续在指定位置写入实际数据
	void write_relocation(std::function<void(out_buffer&)>&& f) {
		auto reloc_address = data_.size();
		uint32_t placeholder = 0;
		write(placeholder);
		pending_writes.emplace_back(reloc_address, std::move(f));
	}
	// 在指定地址注册一个延迟写入项
	void write_relocation(size_t reloc_address, std::function<void(out_buffer&)>&& f) {
		pending_writes.emplace_back(reloc_address, std::move(f));
	}
	// 获取当前数据写入位置
	size_t get_data_position() const {
		return data_.size();
	}
	// 写入字符串视图
	void write(std::string_view sv) {
		write_variable(sv.data(), sv.length());
	}
	// 写入字符串
	void write(std::string const& s) {
		write_variable(s.data(), s.length());
	}
	// 写入宽字符串视图
	void write(std::wstring_view sv) {
		write_variable(sv.data(), sv.length());
	}
	// 写入宽字符串
	void write(std::wstring const& s) {
		write_variable(s.data(), s.length());
	}
};

// 序列化输入缓冲区：用于从字节流中读取数据，支持段落读取和重定位读取
class in_buffer {
private:
	char const* data;
	size_t size;
	size_t read_position = 0;
public:
	// 构造输入缓冲区
	in_buffer(char const* data, size_t size) : data(data), size(size) { }
	// 构造输入缓冲区（指定起始读取位置）
	in_buffer(char const* data, size_t size, size_t read_position) : data(data), size(size), read_position(read_position) {
	}

	// 检查缓冲区是否仍有可读数据
	operator bool() const noexcept {
		return data && read_position < size;
	}

	// 获取数据指针
	char const* view_data() const {
		return data;
	}
	// 获取数据总大小
	size_t view_size() const {
		return size;
	}
	// 获取当前读取位置
	size_t view_read_position() const {
		return read_position;
	}

	// 读取一个基本类型数据
	template<typename T>
	T read() {
		T temp = T{ };
		if(read_position + sizeof(T) <= size) {
			std::memcpy(&temp, data + read_position, sizeof(T));
			read_position += sizeof(T);
		}
		return temp;
	}
	// 读取一个基本类型数据到输出参数
	template<typename T>
	void read(T& out) {
		out = T{ };
		if(read_position + sizeof(T) <= size) {
			std::memcpy(&out, data + read_position, sizeof(T));
			read_position += sizeof(T);
		}
	}
	// 读取固定数量的基本类型数据，返回span视图
	template<typename T>
	std::span<T const> read_fixed(size_t count) {
		auto len = std::min(count, (size - read_position) / sizeof(T));
		auto start = (T const*)(data + read_position);
		read_position += count * sizeof(T);
		return std::span<T const>(start, start + len);
	}
	// 读取可变数量的基本类型数据（先读取数量，再读取数据）
	template<typename T>
	std::span<T const> read_variable() {
		auto count = read<uint32_t>();
		return read_fixed<T>(size_t(count));
	}
	// 读取重定位：读取偏移量并返回从该偏移开始的子缓冲区
	in_buffer read_relocation() {
		uint32_t offset = read<uint32_t>();
		return in_buffer(data, size, offset);
	}
	// 读取一个段落：读取段落大小并返回段落内容的子缓冲区
	in_buffer read_section() {
		uint32_t section_size = read<uint32_t>();
		auto start_postion = read_position;
		read_position += (section_size - 4);
		return in_buffer(data, std::min(size_t(start_postion + section_size - 4), size), start_postion);
	}
	// 读取字符串
	void read(std::string& out) {
		auto s = read_variable<char>();
		out = std::string(s.data(), s.size());
	}
	// 读取宽字符串
	void read(std::wstring& out) {
		auto s = read_variable<wchar_t>();
		out = std::wstring(s.data(), s.size());
	}
	// 读取UTF-16字符串
	void read(std::u16string& out) {
		auto s = read_variable<char16_t>();
		out = std::u16string(s.data(), s.size());
	}
};

// 读取字符串视图的特化版本
template<>
inline std::string_view in_buffer::read<std::string_view>() {
	auto s = read_variable<char>();
	return std::string_view(s.data(), s.size());
}
// 读取宽字符串视图的特化版本
template<>
inline std::wstring_view in_buffer::read<std::wstring_view>() {
	auto s = read_variable<wchar_t>();
	return std::wstring_view(s.data(), s.size());
}

}
