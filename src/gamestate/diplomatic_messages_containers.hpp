#pragma once

#include "dcon_generated_ids.hpp"
#include "date_interface.hpp"

namespace diplomatic_message {

// 外交消息类型
enum class type_t : uint8_t {
	none = 0, // 无
	access_request = 1, // 军事通行权请求
	alliance_request = 2, // 结盟请求
	call_ally_request = 3, // 召唤盟友参战请求
	be_crisis_primary_defender = 4, // 邀请成为危机主要防御方
	be_crisis_primary_attacker = 5, // 邀请成为危机主要攻击方
	peace_offer = 6, // 和平提议
	take_crisis_side_offer = 7, // 加入危机某方的提议
	crisis_peace_offer = 8, // 危机和平提议
	state_transfer = 9, // 州移交
	free_trade_agreement = 10 // 自由贸易协定
};

// 外交消息：记录两个国家之间在特定日期的外交消息（结盟请求、和平提议、召唤盟友等），还可包含相关的战争、危机、州等可选数据
struct message {
	union dtype {
		dcon::war_id war; //2
		dcon::peace_offer_id peace; //2
		sys::full_wg crisis_offer; //10
		dcon::state_definition_id state; //2
		dtype() {
			memset(this, 0, sizeof(*this));
		}
	} data; //10
	sys::date when; //2
	dcon::nation_id from; //2
	dcon::nation_id to; //2
	type_t type = diplomatic_message::type_t::none; //1
	bool automatic_call = false; // 用于标记战争召唤是否为自动发出（攻击方勾选"召唤所有盟友"或防御方盟友被自动召唤时）

	bool operator==(const message& other) const {
		// 比较联合体中未使用的成员在技术上属于未定义行为，
		// 因此先复制到缓冲区再进行比较
		// 有极小概率两个持有不同类型的联合体会被判定为相等
		char data_buffer[sizeof(data)];
		std::memcpy(data_buffer, &data, sizeof(data));

		char data_buffer_other[sizeof(data)];
		std::memcpy(data_buffer_other, &other.data, sizeof(data));

		return std::memcmp(data_buffer, data_buffer_other, sizeof(data)) == 0 && when == other.when && from == other.from && to == other.to && type == other.type && automatic_call == other.automatic_call;

	}
	bool operator!=(const message& other) const {
		return !(*this == other);
	}


	message() : type(diplomatic_message::type_t::none) {
	}
};
static_assert(sizeof(message) ==
	sizeof(message::from)
	+ sizeof(message::to)
	+ sizeof(message::when)
	+ sizeof(message::data)
	+ sizeof(message::type)
	+ sizeof(message::automatic_call));

using type = type_t;
}
