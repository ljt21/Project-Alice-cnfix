#pragma once

// 断言式恒等函数：当 VALIDATE 为 true 时对输入进行断言，始终返回输入值
template <bool VALIDATE>
bool inline assertive_identity(bool input) {
	if constexpr(VALIDATE) {
		assert(input);
	}
	return input;
}
