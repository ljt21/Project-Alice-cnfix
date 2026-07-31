#pragma once

namespace game_scene {

// 游戏场景标识
enum class scene_id : uint8_t {
	pick_nation, // 选择国家场景
	in_game_basic, // 游戏内基础场景
	in_game_military, // 游戏内军事场景
	in_game_state_selector, // 游戏内州选择器场景
	in_game_national_identity_selector, // 游戏内民族身份选择器场景
	in_game_military_selector, // 游戏内军事选择器场景
	in_game_economy_viewer, // 游戏内经济查看器场景
	in_game_production_view, // 游戏内生产视图场景
	end_screen, // 结束画面场景
	count
};

// 边界显示粒度
enum class borders_granularity : uint8_t {
	none, province, state, nation // 无 / 省份 / 州 / 国家
};
}
