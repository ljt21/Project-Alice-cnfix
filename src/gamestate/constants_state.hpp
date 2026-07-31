#pragma once

namespace sys {
// UI 渲染模式
enum class gui_modes : uint8_t {
	faithful = 0, nouveau = 1, dummycabooseval = 2
};
// 地图投影模式
enum class projection_mode : uint8_t {
	globe_orthographic = 0, // 球面正射投影
	rectangle = 1, // 矩形投影
	globe_perspective = 2, // 球面透视投影
	globe_stereographic = 3, // 球面立体投影
	num_of_modes = 4
};
}
