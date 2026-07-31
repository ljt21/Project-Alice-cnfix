#pragma once

#include "constants_state.hpp"
#include "game_scene_default.hpp"
#include "economy_common_api_containers.hpp"
#include "nations_state_containers.hpp"
#include "military_state_containers.hpp"
#include "diplomatic_messages_containers.hpp"
#include "events_containers.hpp"
#include "opengl_wrapper_containers.hpp"
#include "ui_state.hpp"
#include "commands_containers.hpp"

namespace province {
// 全局省份状态数据
struct global_provincial_state {
	std::vector<dcon::province_adjacency_id> canals; // 运河连接的省份邻接关系
	std::vector<dcon::province_id> canal_provinces; // 运河所在省份
	ankerl::unordered_dense::map<dcon::modifier_id, dcon::gfx_object_id, sys::modifier_hash> terrain_to_gfx_map; // 地形修饰器到图形对象的映射
	std::vector<bool> connected_region_is_coastal; // 各连通区域是否为沿海
	dcon::province_id first_sea_province; // 第一个海洋省份
	dcon::modifier_id europe; // 欧洲大陆修饰器
	dcon::modifier_id asia; // 亚洲大陆修饰器
	dcon::modifier_id africa; // 非洲大陆修饰器
	dcon::modifier_id north_america; // 北美洲大陆修饰器
	dcon::modifier_id south_america; // 南美洲大陆修饰器
	dcon::modifier_id oceania; // 大洋洲大陆修饰器
};
}
