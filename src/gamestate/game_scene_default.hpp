#pragma once

#include "game_scene_constants.hpp"
#include "constants_ui.hpp"
#include "constants.hpp"
#include "container_types_ui.hpp"

namespace game_scene {

void do_nothing(sys::state& state); // 空操作函数
ui::mouse_probe recalculate_mouse_probe_identity(sys::state& state, ui::mouse_probe mouse_probe, ui::mouse_probe tooltip_probe); // 返回原始鼠标探测结果（恒等函数）
void render_map_generic(sys::state& state); // 通用地图渲染
void generic_map_scene_update(sys::state& state); // 通用地图场景更新
void highlight_given_province(sys::state& state, std::vector<uint32_t>& data, dcon::province_id selected_province); // 高亮指定省份
void open_chat_during_game(sys::state& state); // 在游戏中打开聊天

// 场景属性：定义一个游戏场景的全部行为回调与配置
struct scene_properties {
	scene_id id;

	std::function<ui::element_base* (sys::state& state)> get_root;

	bool starting_scene = false;
	bool final_scene = false;
	bool enforced_pause = false;
	bool based_on_map = true;
	bool overwrite_map_tooltip = false;
	bool accept_events = false;
	bool is_lobby = false;
	bool game_in_progress = true;

	borders_granularity borders = borders_granularity::province;

	std::function<void(sys::state& state, dcon::nation_id nation, dcon::province_id target, sys::key_modifiers mod)> rbutton_selected_units;
	std::function<void(sys::state& state, dcon::nation_id nation, dcon::province_id target, sys::key_modifiers mod)> rbutton_province;

	//拖拽相关
	bool allow_drag_selection;
	std::function<void(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mod)> on_drag_start;
	std::function<void(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mod)> drag_selection;

	std::function<void(sys::state& state)> lbutton_up;
	std::function<void(sys::state& state)> on_province_selected;

	//按键相关
	std::function <sys::virtual_key(sys::state& state, sys::virtual_key keycode, sys::key_modifiers mod)> keycode_mapping;
	std::function <void(sys::state& state, sys::virtual_key keycode, sys::key_modifiers mod)> handle_hotkeys;

	//日志
	std::function <void(sys::state& state, std::string_view message)> console_log;

	//渲染
	std::function <void(sys::state& state)> render_ui = do_nothing;
	std::function <void(sys::state& state)> render_map = render_map_generic;

	//鼠标探测
	std::function <ui::mouse_probe(sys::state& state, ui::mouse_probe mouse_probe, ui::mouse_probe tooltip_probe)> recalculate_mouse_probe = recalculate_mouse_probe_identity;
	std::function <ui::mouse_probe(sys::state& state, ui::mouse_probe mouse_probe, ui::mouse_probe tooltip_probe)> recalculate_tooltip_probe = recalculate_mouse_probe_identity;

	//清理函数：用于保持UI"视图"与游戏状态的一致性
	std::function <void(sys::state& state)> clean_up = do_nothing;

	std::function <void(sys::state& state)> on_game_state_update = generic_map_scene_update;
	std::function <void(sys::state& state)> on_game_state_update_update_ui = do_nothing;

	//其他函数：

	std::function <void(sys::state& state)> open_chat = open_chat_during_game;
	std::function <void(sys::state& state)> on_map_movement_stopped = do_nothing;

	// graphics
	std::function <void(sys::state& state, std::vector<uint32_t>& data, dcon::province_id selected_province)> update_highlight_texture = highlight_given_province;
};
}
