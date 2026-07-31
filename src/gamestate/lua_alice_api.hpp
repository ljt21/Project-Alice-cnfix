#pragma once

#include "gui_element_base.hpp"

namespace sys {
struct state;
}

namespace lua_alice_api {

// 设置游戏循环的Lua环境
void setup_gameloop_environment(sys::state& state);
// 设置UI的Lua环境
void setup_ui_environment(sys::state& state);
// 设置全局状态指针
void set_state(sys::state* state);

// 检查是否存在指定名称的Lua函数
bool has_named_function(sys::state& state, const char function_name[]);
// 调用指定名称的Lua函数
void call_named_function(sys::state& state, const char function_name[]);
// 调用指定名称的Lua函数（带省份参数）
void call_named_function(sys::state& state, const char function_name[], dcon::province_id prov);
// 安全调用指定名称的Lua函数（带省份参数）
void call_named_function_safe(sys::state& state, const char function_name[], dcon::province_id prov);


}

namespace ui {

struct lua_scripted_element : public ui::element_base {
	// connection to lua
	int on_update_lref;
	std::string on_update_lname;
	std::string_view texture_key;
	dcon::text_key tooltip_key;

	text::layout internal_layout;
	text::text_color text_color = text::text_color::gold;
	float text_scale = 1.500000f;
	bool text_is_header = true;
	text::alignment text_alignment = text::alignment::right;
	std::string cached_text;
	// 设置显示文本
	void set_text(sys::state& state, std::string const& new_text);
	// 重置文本时的回调
	void on_reset_text(sys::state& state) noexcept override;
	// 创建元素时的回调
	void on_create(sys::state& state) noexcept override;
	// 渲染元素
	void render(sys::state& state, int32_t x, int32_t y) noexcept override;
	// 获取提示框行为
	ui::tooltip_behavior has_tooltip(sys::state& state) noexcept override;
	// 测试鼠标交互
	ui::message_result test_mouse(sys::state& state, int32_t x, int32_t y, ui::mouse_probe_type type) noexcept override;
	// 更新提示框内容
	void update_tooltip(sys::state& state, int32_t x, int32_t y, text::columnar_layout& contents) noexcept override;
	// 更新元素状态
	void on_update(sys::state& state) noexcept override;
};
}
