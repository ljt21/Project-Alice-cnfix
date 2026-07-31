#pragma once
#include "system_state_forward.hpp"

namespace ui {
// 创建游戏内所有UI窗口
void create_in_game_windows(sys::state& state);
// 调整游戏内窗口的属性和布局
void adjust_in_game_windows(sys::state& state);
}
