#pragma once

#include "container_types.hpp"
#include "text.hpp"

namespace notification {

struct message {
	std::function<void(sys::state&, text::layout_base&)> body;
	char const* title = nullptr;
	dcon::nation_id source;	 // which nation caused the notification to be sent. 
	dcon::nation_id target;	 // which nation is primarily affected by the event (if != source).
	dcon::nation_id third;	 // a secondary nation affected by the event
	sys::message_base_type type;
	dcon::province_id province_source{}; // if the message is tied to a province.
	// the goto buttton will go to source nations capital if province source
	// if province_source is defined, it will go to said province instead
};

// 发布通知消息
void post(sys::state& state, message&& m);
// 判断国家是否为玩家感兴趣的国家
bool nation_is_interesting(sys::state& state, dcon::nation_id n);

} // namespace notification
