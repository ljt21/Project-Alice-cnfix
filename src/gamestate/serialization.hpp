#pragma once
#include <vector>
#include "container_types.hpp"
#include "unordered_dense.h"
#include "text.hpp"
#include "simple_fs.hpp"

namespace sys {

// 计算vector序列化后的大小
template<typename T>
inline size_t serialize_size(std::vector<T> const& vec) {
	return sizeof(uint32_t) + sizeof(T) * vec.size();
}

//inline size_t serialize_size(std::wstring const& s) {
//	return sizeof(uint32_t) + sizeof(wchar_t) * s.size();
//}

// 计算字符串序列化后的大小
inline size_t serialize_size(std::string const& s) {
	return sizeof(uint32_t) + sizeof(char) * s.size();
}

// 序列化vector数据
template<typename T>
inline uint8_t* serialize(uint8_t* ptr_in, std::vector<T> const& vec) {
	uint32_t length = uint32_t(vec.size());
	memcpy(ptr_in, &length, sizeof(uint32_t));
	memcpy(ptr_in + sizeof(uint32_t), vec.data(), sizeof(T) * vec.size());
	return ptr_in + sizeof(uint32_t) + sizeof(T) * vec.size();
}

// 反序列化vector数据
template<typename T>
inline uint8_t const* deserialize(uint8_t const* ptr_in, std::vector<T>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));
	vec.resize(length);
	memcpy(vec.data(), ptr_in + sizeof(uint32_t), sizeof(T) * length);
	return ptr_in + sizeof(uint32_t) + sizeof(T) * length;
}

//inline uint8_t* serialize(uint8_t* ptr_in, std::wstring const& s) {
//	uint32_t length = uint32_t(s.size());
//	memcpy(ptr_in, &length, sizeof(uint32_t));
//	memcpy(ptr_in + sizeof(uint32_t), s.data(), sizeof(wchar_t) * s.size());
//	return ptr_in + sizeof(uint32_t) + sizeof(wchar_t) * s.size();
//}

//inline uint8_t const* deserialize(uint8_t const* ptr_in, std::wstring& s) {
//	uint32_t length = 0;
//	memcpy(&length, ptr_in, sizeof(uint32_t));
//	s.resize(length);
//	memcpy(s.data(), ptr_in + sizeof(uint32_t), sizeof(wchar_t) * length);
//	return ptr_in + sizeof(uint32_t) + sizeof(wchar_t) * length;
//}

// 序列化字符串数据
inline uint8_t* serialize(uint8_t* ptr_in, std::string const& s) {
	uint32_t length = uint32_t(s.size());
	memcpy(ptr_in, &length, sizeof(uint32_t));
	memcpy(ptr_in + sizeof(uint32_t), s.data(), sizeof(char) * s.size());
	return ptr_in + sizeof(uint32_t) + sizeof(char) * s.size();
}

// 反序列化字符串数据
inline uint8_t const* deserialize(uint8_t const* ptr_in, std::string& s) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));
	s.resize(length);
	memcpy(s.data(), ptr_in + sizeof(uint32_t), sizeof(char) * length);
	return ptr_in + sizeof(uint32_t) + sizeof(char) * length;
}

// 内存拷贝方式序列化对象
template<typename T>
inline uint8_t* memcpy_serialize(uint8_t* ptr_in, T const& obj) {
	memcpy(ptr_in, &obj, sizeof(T));
	return ptr_in + sizeof(T);
}

// 内存拷贝方式反序列化对象
template<typename T>
inline uint8_t const* memcpy_deserialize(uint8_t const* ptr_in, T& obj) {
	memcpy(&obj, ptr_in, sizeof(T));
	return ptr_in + sizeof(T);
}

// 计算tagged_vector序列化后的大小
template<typename T, typename tag_type>
inline size_t serialize_size(tagged_vector<T, tag_type> const& vec) {
	return sizeof(uint32_t) + sizeof(T) * vec.size();
}

// 序列化tagged_vector数据
template<typename T, typename tag_type>
inline uint8_t* serialize(uint8_t* ptr_in, tagged_vector<T, tag_type> const& vec) {
	uint32_t length = uint32_t(vec.size());
	memcpy(ptr_in, &length, sizeof(uint32_t));
	memcpy(ptr_in + sizeof(uint32_t), vec.data(), sizeof(T) * vec.size());
	return ptr_in + sizeof(uint32_t) + sizeof(T) * vec.size();
}

// 反序列化tagged_vector数据
template<typename T, typename tag_type>
inline uint8_t const* deserialize(uint8_t const* ptr_in, tagged_vector<T, tag_type>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));
	vec.resize(length);
	memcpy(vec.data(), ptr_in + sizeof(uint32_t), sizeof(T) * length);
	return ptr_in + sizeof(uint32_t) + sizeof(T) * length;
}

// 计算text_key映射序列化后的大小
inline size_t serialize_size(
		ankerl::unordered_dense::map<dcon::text_key, uint32_t, text::vector_backed_ci_hash, text::vector_backed_ci_eq> const&
				vec) {
	return serialize_size(vec.values());
}

// 计算text_key集合序列化后的大小
inline size_t serialize_size(
		ankerl::unordered_dense::set<dcon::text_key, text::vector_backed_ci_hash, text::vector_backed_ci_eq> const&
				vec) {
	return serialize_size(vec.values());
}

// 序列化text_key映射数据
inline uint8_t* serialize(uint8_t* ptr_in,
		ankerl::unordered_dense::map<dcon::text_key, uint32_t, text::vector_backed_ci_hash, text::vector_backed_ci_eq> const&
				vec) {
	return serialize(ptr_in, vec.values());
}
// 序列化text_key集合数据
inline uint8_t* serialize(uint8_t* ptr_in,
		ankerl::unordered_dense::set<dcon::text_key, text::vector_backed_ci_hash, text::vector_backed_ci_eq> const&
				vec) {
	return serialize(ptr_in, vec.values());
}
// 反序列化text_key映射数据
inline uint8_t const* deserialize(uint8_t const* ptr_in,
		ankerl::unordered_dense::map<dcon::text_key, uint32_t, text::vector_backed_ci_hash, text::vector_backed_ci_eq>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));

	std::remove_cvref_t<decltype(vec.values())> new_vec;
	new_vec.resize(length);
	memcpy(new_vec.data(), ptr_in + sizeof(uint32_t), sizeof(vec.values()[0]) * length);
	vec.replace(std::move(new_vec));

	return ptr_in + sizeof(uint32_t) + sizeof(vec.values()[0]) * length;
}
// 反序列化text_key集合数据
inline uint8_t const* deserialize(uint8_t const* ptr_in,
		ankerl::unordered_dense::set<dcon::text_key, text::vector_backed_ci_hash, text::vector_backed_ci_eq>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));

	std::remove_cvref_t<decltype(vec.values())> new_vec;
	new_vec.resize(length);
	memcpy(new_vec.data(), ptr_in + sizeof(uint32_t), sizeof(vec.values()[0]) * length);
	vec.replace(std::move(new_vec));

	return ptr_in + sizeof(uint32_t) + sizeof(vec.values()[0]) * length;
}

// 计算修饰符映射序列化后的大小
inline size_t serialize_size(
		ankerl::unordered_dense::map<dcon::modifier_id, dcon::gfx_object_id, sys::modifier_hash> const& vec) {
	return serialize_size(vec.values());
}

// 序列化修饰符映射数据
inline uint8_t* serialize(uint8_t* ptr_in,
		ankerl::unordered_dense::map<dcon::modifier_id, dcon::gfx_object_id, sys::modifier_hash> const& vec) {
	return serialize(ptr_in, vec.values());
}
// 反序列化修饰符映射数据
inline uint8_t const* deserialize(uint8_t const* ptr_in,
		ankerl::unordered_dense::map<dcon::modifier_id, dcon::gfx_object_id, sys::modifier_hash>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));

	std::remove_cvref_t<decltype(vec.values())> new_vec;
	new_vec.resize(length);
	memcpy(new_vec.data(), ptr_in + sizeof(uint32_t), sizeof(vec.values()[0]) * length);
	vec.replace(std::move(new_vec));

	return ptr_in + sizeof(uint32_t) + sizeof(vec.values()[0]) * length;
}


// 计算uint16_t-text_key映射序列化后的大小
inline size_t serialize_size(ankerl::unordered_dense::map<uint16_t, dcon::text_key> const& vec) {
	return serialize_size(vec.values());
}

// 序列化uint16_t-text_key映射数据
inline uint8_t* serialize(uint8_t* ptr_in, ankerl::unordered_dense::map<uint16_t, dcon::text_key> const& vec) {
	return serialize(ptr_in, vec.values());
}
// 反序列化uint16_t-text_key映射数据
inline uint8_t const* deserialize(uint8_t const* ptr_in, ankerl::unordered_dense::map<uint16_t, dcon::text_key>& vec) {
	uint32_t length = 0;
	memcpy(&length, ptr_in, sizeof(uint32_t));

	std::remove_cvref_t<decltype(vec.values())> new_vec;
	new_vec.resize(length);
	memcpy(new_vec.data(), ptr_in + sizeof(uint32_t), sizeof(vec.values()[0]) * length);
	vec.replace(std::move(new_vec));

	return ptr_in + sizeof(uint32_t) + sizeof(vec.values()[0]) * length;
}

constexpr inline uint32_t save_file_version = 45;
constexpr inline uint32_t scenario_file_version = 139 + save_file_version;

struct scenario_header {
	uint32_t version = scenario_file_version;
	uint32_t count = 0;
	uint64_t timestamp = 0;
	checksum_key checksum;
	char mod_save_dir[128] = { 0 };
};

struct save_header {
	uint32_t version = save_file_version;
	uint32_t count = 0;
	uint64_t timestamp = 0;
	checksum_key checksum;
	dcon::national_identity_id tag;
	dcon::government_type_id cgov;
	sys::date d;
	char save_name[64];
};

struct mod_identifier {
	native_string mod_path;
	uint64_t timestamp = 0;
	uint32_t count = 0;
};
// 读取模组路径
void read_mod_path(uint8_t const* ptr_in, uint8_t const* lim, native_string& path_out);
// 加载模组路径并恢复文件系统状态
uint8_t const* load_mod_path(uint8_t const* ptr_in, sys::state& state);
// 写入模组路径
uint8_t* write_mod_path(uint8_t* ptr_in, native_string const& path_in);
// 计算模组路径序列化大小
size_t sizeof_mod_path(native_string const& path_in);

// 读取场景文件头
uint8_t const* read_scenario_header(uint8_t const* ptr_in, scenario_header& header_out);
// 读取存档文件头
uint8_t const* read_save_header(uint8_t const* ptr_in, save_header& header_out);
// 写入场景文件头
uint8_t* write_scenario_header(uint8_t* ptr_in, scenario_header const& header_in);
// 写入存档文件头
uint8_t* write_save_header(uint8_t* ptr_in, save_header const& header_in);
// 计算场景文件头序列化大小
size_t sizeof_scenario_header(scenario_header const& header_in);
// 计算存档文件头序列化大小
size_t sizeof_save_header(save_header const& header_in);

// 从文件中提取模组信息
mod_identifier extract_mod_information(uint8_t const* ptr_in, uint64_t file_size);

// 写入压缩数据段
uint8_t* write_compressed_section(uint8_t* ptr_out, uint8_t const* ptr_in, uint32_t uncompressed_size);

// 注意：以下函数用于读取/写入*未压缩*数据
// 读取场景数据段
uint8_t const* read_scenario_section(uint8_t const* ptr_in, uint8_t const* section_end, sys::state& state, bool exclude_local_handwritten_fields = false);
// 读取存档数据段
uint8_t const* read_save_section(uint8_t const* ptr_in, uint8_t const* section_end, sys::state& state, bool exclude_local_handwritten_fields = false);
// 写入场景数据段
uint8_t* write_scenario_section(uint8_t* ptr_in, sys::state& state, bool exclude_local_handwritten_fields = false);
// 写入存档数据段
uint8_t* write_save_section(uint8_t* ptr_in, sys::state& state, bool exclude_local_handwritten_fields = false);
struct scenario_size {
	size_t total_size;
	size_t checksum_offset;
};
// 计算场景数据段大小
scenario_size sizeof_scenario_section(sys::state& state, bool exclude_local_handwritten_fields = false);
// 计算存档数据段大小
size_t sizeof_save_section(sys::state& state, bool exclude_local_handwritten_fields = false);

// 计算多人游戏数据大小
size_t sizeof_mp_data(sys::state& state);
// 写入多人游戏数据
uint8_t* write_mp_data(uint8_t* ptr_in, sys::state& state);
// 读取多人游戏数据
uint8_t const* read_mp_data(uint8_t const* ptr_in, uint8_t const* section_end, sys::state& state);

// 用于序列化完整多人游戏状态，用于出现不同步时的OOS报告
// 读取完整多人游戏状态
uint8_t const* read_entire_mp_state(uint8_t const* ptr_in, uint8_t const* section_end, sys::state& state, bool exclude_local_handwritten_fields = false);
// 写入完整多人游戏状态
uint8_t* write_entire_mp_state(uint8_t* ptr_in, sys::state& state, bool exclude_local_handwritten_fields = false);
// 计算完整多人游戏状态大小
size_t sizeof_entire_mp_state(sys::state& state, bool exclude_local_handwritten_fields = false);

// 通过按位或操作合并加载记录设置
void combine_load_records(dcon::load_record& affected_record, const dcon::load_record& other_record);

// 写入场景文件
void write_scenario_file(sys::state& state, native_string_view name, uint32_t count);
// 尝试读取场景文件
bool try_read_scenario_file(sys::state& state, native_string_view name);
// 尝试读取场景和存档文件
bool try_read_scenario_and_save_file(sys::state& state, native_string_view name);
// 尝试将场景文件作为存档读取
bool try_read_scenario_as_save_file(sys::state& state, native_string_view name);

// 获取默认存档名称
std::string get_default_save_name(sys::state& state, save_type type);

// 写入存档文件
void write_save_file(sys::state& state, sys::save_type type = sys::save_type::normal, std::string const& name = std::string(""), const std::string& file_name = std::string(""));
// 尝试读取存档文件
bool try_read_save_file(sys::state& state, native_string_view name, bool ignore_checksum = false);

} // namespace sys
