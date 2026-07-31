#pragma once

#include "events_constants.hpp"
#include <span>

namespace command {
enum class command_type : uint8_t;

// 命令头：对齐填充
struct cmd_header {
	command_type type;
	uint8_t padding = 0;
	dcon::mp_player_id player_id;
	uint32_t payload_size = 0;
	bool operator==(const cmd_header& other) const = default;
	bool operator!=(const cmd_header& other) const = default;

	cmd_header() { };

	cmd_header(cmd_header&& other) = default;
	cmd_header(const cmd_header& other) = default;

	cmd_header& operator=(cmd_header&& other) = default;
	cmd_header& operator=(const cmd_header& other) = default;

};
static_assert(sizeof(command::cmd_header) == sizeof(command::cmd_header::type) + sizeof(command::cmd_header::padding) + sizeof(command::cmd_header::player_id) + sizeof(command::cmd_header::payload_size));

// 命令数据：包含命令头和可变长度的负载，支持序列化/反序列化操作
struct command_data {
	cmd_header header{};
	std::vector<uint8_t> payload;
	command_data() {
	};
	command_data(command_type _type) {
		header.type = _type;
	};
	command_data(command_type _type, dcon::mp_player_id _player_id) {
		header.type = _type;
		header.player_id = _player_id;
	};
	command_data(command_type _type, dcon::mp_player_id _player_id, size_t initial_payload_capacity) {
		header.type = _type;
		header.player_id = _player_id;
		payload.reserve(initial_payload_capacity);
	};

	command_data(command_data&& other) = default;
	command_data(const command_data& other) = default;

	command_data& operator=(command_data&& other) = default;
	command_data& operator=(const command_data& other) = default;

	~command_data() = default;

	// 向负载中添加数据
	template<typename data_type>
	friend command_data& operator << (command_data& msg, data_type& data) {

		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		size_t curr_size = msg.payload.size();
		msg.payload.resize(msg.payload.size() + sizeof(data_type));

		std::memcpy(msg.payload.data() + curr_size, &data, sizeof(data_type));

		msg.header.payload_size = (uint32_t)msg.payload.size();

		return msg;
	}
	// 从指针向负载中添加指定数量的数据
	template<typename data_type>
	void push_ptr(data_type* ptr, size_t size) {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		size_t curr_size = payload.size();
		payload.resize(payload.size() + sizeof(data_type) * size);

		std::memcpy(payload.data() + curr_size, ptr, sizeof(data_type) * size);

		header.payload_size = (uint32_t)payload.size();
	}
	// 从内存span向负载添加数据，限制大小不超过vec.size()
	template<typename data_type>
	void push_span(const std::span<data_type> vec, size_t size) {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		size = std::min(size, vec.size());
		size_t curr_size = payload.size();
		payload.resize(payload.size() + sizeof(data_type) * size);

		std::memcpy(payload.data() + curr_size, vec.data(), sizeof(data_type) * size);

		header.payload_size = (uint32_t)payload.size();
	}
	// 从内存span向负载添加全部数据
	template<typename data_type>
	void push_span(const std::span<data_type> vec) {
		push_span(vec, vec.size());
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
	}
	// 从字符串向负载添加数据，限制大小不超过string.size()
	void push_string(const std::string& string, size_t size) {
		push_ptr(string.data(), std::min(size, string.size()));
	}
	// 从string_view向负载添加数据，限制大小不超过string_view.size()
	void push_string_view(std::string_view string_view, size_t size) {
		push_ptr(string_view.data(), std::min(size, string_view.size()));
	}

	// 从负载中提取数据
	template<typename data_type>
	friend command_data& operator >> (command_data& msg, data_type& data) {

		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");

		size_t i = msg.payload.size() - sizeof(data_type);
		std::memcpy(&data, msg.payload.data() + i, sizeof(data_type));
		msg.payload.resize(i);

		msg.header.payload_size = (uint32_t)msg.payload.size();

		return msg;
	}
	// 返回负载起始处的可变引用，按指定类型解释
	template<typename data_type>
	data_type& get_payload() {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		uint8_t* ptr = payload.data();
		return reinterpret_cast<data_type&>(*ptr);
	}
	// 返回负载起始处的只读引用，按指定类型解释
	template<typename data_type>
	const data_type& get_payload() const {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		const uint8_t* ptr = payload.data();
		return reinterpret_cast<const data_type&>(*ptr);
	}

	// 检查指定类型的负载后是否还附有恰好"expected_size"字节的可变负载
	template<typename data_type>
	bool check_variable_size_payload(size_t expected_size) const {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		return expected_size == (payload.size() - sizeof(data_type));
	}
	// 检查指定类型的负载在给定偏移后是否还附有恰好"expected_size"字节的可变负载
	template<typename data_type>
	bool check_variable_size_payload(size_t expected_size, size_t offset) const {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		return expected_size == ((payload.size() - offset) - sizeof(data_type));
	}
	// 检查指定类型的负载后是否还附有至少"expected_size"字节的可变负载
	template<typename data_type>
	bool check_atleast_variable_size_payload(size_t expected_size) const {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		return expected_size <= (payload.size() - sizeof(data_type));
	}

	// 从向量起始处移除"count"个"data_type"项（即移除最先添加的数据）
	template<typename data_type>
	void remove_payload_from_begin(size_t count, size_t offset = 0) {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		size_t bytes_to_remove = count * sizeof(data_type);
		size_t offset_bytes = offset * sizeof(data_type);
		payload.erase(payload.begin() + offset_bytes, payload.begin() + offset_bytes + bytes_to_remove);
	}
	// 从向量末尾处移除"count"个"data_type"项（即移除最后添加的数据）
	template<typename data_type>
	void remove_payload_from_end(size_t count, size_t offset = 0) {
		static_assert(std::is_standard_layout<data_type>::value, "Data type is too complex");
		size_t bytes_to_remove = count * sizeof(data_type);
		size_t offset_bytes = offset * sizeof(data_type);
		payload.erase(payload.end() - (1 + offset_bytes), payload.end() - (1 + offset_bytes + bytes_to_remove));
	}



	bool operator==(const command_data&) const = default;
	bool operator!=(const command_data&) const = default;

};
static_assert(sizeof(command_data) == sizeof(command_data::header) + sizeof(command_data::payload));

// 待处理的人类国家事件数据
struct pending_human_n_event_data {
	uint32_t r_lo = 0;
	uint32_t r_hi = 0;
	int32_t primary_slot;
	int32_t from_slot;
	sys::date date;
	dcon::national_event_id e;
	uint8_t opt_choice;
	event::slot_type pt;
	event::slot_type ft;
};
// 待处理的自由国家事件数据
struct pending_human_f_n_event_data {
	uint32_t r_lo = 0;
	uint32_t r_hi = 0;
	sys::date date;
	dcon::free_national_event_id e;
	uint8_t opt_choice;
};
// 待处理的人类省份事件数据
struct pending_human_p_event_data {
	uint32_t r_lo = 0;
	uint32_t r_hi = 0;
	int32_t from_slot;
	sys::date date;
	dcon::provincial_event_id e;
	dcon::province_id p;
	uint8_t opt_choice;
	event::slot_type ft;
};
// 待处理的自由省份事件数据
struct pending_human_f_p_event_data {
	uint32_t r_lo = 0;
	uint32_t r_hi = 0;
	sys::date date;
	dcon::free_provincial_event_id e;
	dcon::province_id p;
	uint8_t opt_choice;
};

}

namespace event {


}
