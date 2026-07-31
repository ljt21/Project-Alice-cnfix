/*
bm_font 示例实现（带字距调整），适用于 C++ 和 OpenGL 2.0

本软件为自由软件，已无条件发布至公共领域。

任何人可自由复制、修改、发布、使用、编译、出售或分发本软件，
无论是以源代码形式还是编译后的二进制形式，用于任何目的，
商业或非商业用途，并可采取任何方式。

在承认版权法的司法管辖区内，本软件的作者将软件的所有版权利益
献给公共领域。我们做出此奉献，以造福公众，并损害我们的继承人和
受让人的利益。我们意图将此奉献作为一项明确的行为，永久放弃
本软件在版权法下的所有当前和未来权利。

本软件按"原样"提供，不附带任何形式的明示或暗示担保，
包括但不限于适销性、特定用途适用性和非侵权担保。
在任何情况下，作者均不对任何索赔、损害或其他责任负责，
无论是在合同诉讼、侵权行为或其他方面，因使用本软件或与本软件
有关而引起。

更多信息请参阅 <http://unlicense.org>
*/

#pragma once

#include <vector>
#include "simple_fs.hpp"
#include "texture.hpp"
#include "unordered_dense.h"

namespace sys {
struct state;
}

namespace text {

// 字符描述符：存储位图字体中单个字符的尺寸和偏移信息
struct char_descriptor {
	int32_t x = 0;          // 字符在纹理中的 X 坐标
	int32_t y = 0;          // 字符在纹理中的 Y 坐标
	int32_t width = 0;      // 字符宽度
	int32_t height = 0;     // 字符高度
	int32_t x_offset = 0;   // 字符渲染时的 X 偏移
	int32_t y_offset = 0;   // 字符渲染时的 Y 偏移
	int32_t x_advance = 0;  // 字符前进量（绘制下一个字符时的水平位移）
	int32_t page = 0;       // 字符所在的纹理页
};

// 位图字体类：加载和管理BMFont格式的位图字体
class bm_font {
public:
	bm_font() { }
	// 通过字体度量文件和字体纹理图片构造位图字体
	bm_font(sys::state& state, simple_fs::file& font_metrics, simple_fs::file& font_image) {
		auto font_result = ogl::make_font_texture(font_image);
		ftexid = font_result.handle;
		parse_font(state, font_metrics);
		assert(ftexid != 0);
		width = int16_t(font_result.size);
	};
	// 移动构造函数
	bm_font(bm_font&& src) noexcept {
		ftexid = src.ftexid;
		chars = src.chars;
		kernings = std::move(src.kernings);
		width = src.width;
		height = src.height;
		base = src.base;
		line_height = src.line_height;
		src.ftexid = 0;
	}
	// 移动赋值运算符
	bm_font& operator=(bm_font&& src) noexcept {
		ftexid = src.ftexid;
		chars = src.chars;
		kernings = std::move(src.kernings);
		width = src.width;
		height = src.height;
		base = src.base;
		line_height = src.line_height;
		src.ftexid = 0;
		return *this;
	}
	~bm_font();

	std::array<char_descriptor, 256> chars;                              // 字符描述数组
	ankerl::unordered_dense::map<uint16_t, int32_t> kernings;            // 字距调整表
	int32_t line_height = 0;                                             // 行高
	int32_t base = 0;                                                    // 基线
	int32_t width = 0;                                                   // 纹理宽度
	int32_t height = 0;                                                  // 纹理高度
	int32_t pages = 0;                                                   // 页数
	int32_t scale_w = 0;                                                 // 缩放宽
	int32_t scale_h = 0;                                                 // 缩放高
	GLuint ftexid = 0;                                                   // 字体纹理ID

	// 获取行高
	float get_height() const { return float(line_height); }
	// 获取字符串宽度
	float get_string_width(sys::state& state, char const*, uint32_t) const;
	// 解析字体文件
	bool parse_font(sys::state& state, simple_fs::file& f);
	// 获取字距对
	int get_kerning_pair(char, char) const;
};

// 根据字体句柄获取对应的位图字体
bm_font const& get_bm_font(sys::state& state, uint16_t font_handle);

} // namespace text
