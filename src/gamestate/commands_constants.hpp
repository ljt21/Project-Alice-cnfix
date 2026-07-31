#pragma once

namespace command {

// 命令发起者类型
enum class actor : uint8_t {
	ai = 0, // AI 发起
	player = 1 // 玩家发起
};

}
