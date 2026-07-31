/*
基础 bm_font 示例实现（带字距调整），适用于 C++ 和 OpenGL 2.0

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
--------------------------------------------------------------------------------
以下编辑器可用于生成 BMFont 字体：
 • http://www.angelcode.com/products/bmfont/ （免费，Windows 平台）
 • http://glyphdesigner.71squared.com/ （商业，Mac OS X 平台）
 • http://www.n4te.com/hiero/hiero.jnlp （免费，Java，跨平台）
 • http://slick.cokeandcode.com/demos/hiero.jnlp （免费，Java，跨平台）

以下部分代码基于此 gamedev 论坛帖子中的代码片段：

http://www.gamedev.net/topic/330742-quick-tutorial-variable-width-bitmap-fonts/

虽然我将其无偿提供，但仍欢迎通过邮件提供修复或更好的代码！

aaedev@gmail.com 2012
*/

#include <stdio.h>
#include <stdlib.h>
#include <glew.h>
#include <string>
#include <stdarg.h>
#include "bmfont.hpp"
#include "texture.hpp"
#include "fonts.hpp"
#include "system_state.hpp"

#ifdef _WIN64
#pragma warning(disable : 4996)
#endif

#include "parsers.hpp"
#include "parsers_declarations.hpp"

namespace parsers {
// BMFont文件解析上下文
struct bmfont_file_context {
	scenario_building_context& outer_context;
	text::bm_font& font;
	uint8_t char_id = 0;       // 当前正在解析的字符 ID
	int32_t first = 0;         // 字距对中的第一个字符
	int32_t second = 0;        // 字距对中的第二个字符

	bmfont_file_context(scenario_building_context& outer_context, text::bm_font& font) : outer_context(outer_context), font(font) { }
};
// BMFont文件解析器，处理字体文件的各个字段
struct bmfont_file {
	// 设置字符位置 X 坐标
	void x(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].x = value;
	}
	// 设置字符位置 Y 坐标
	void y(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].y = value;
	}
	// 设置字符前进量
	void xadvance(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].x_advance = value;
	}
	// 设置字符 X 偏移
	void xoffset(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].x_offset = value;
	}
	// 设置字符 Y 偏移
	void yoffset(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].y_offset = value;
	}
	// 设置字符页码
	void page(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].page = value;
	}
	// 设置字符宽度
	void width(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].width = value;
	}
	// 设置字符高度
	void height(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.chars[context.char_id].height = value;
	}
	// 设置字距对的第一个字符
	void first(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.first = value;
	}
	// 设置字距对的第二个字符
	void second(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.second = value;
	}
	// 设置字距对的调整量
	void amount(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		uint16_t index = (uint16_t(context.first) << 8) | uint16_t(context.second);
		context.font.kernings.insert_or_assign(index, value);
	}
	// 设置字符 ID
	void id(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.char_id = uint8_t(value);
	}
	// 设置行高
	void lineheight(association_type, int32_t value, error_handler& err, int32_t line, bmfont_file_context& context) {
		context.font.line_height = value;
	}
	// 完成解析
	void finish(bmfont_file_context& context) {
		assert(context.font.line_height >= 0);
	}
};
}
#include "bmfont_defs_generated.hpp"

namespace text {

// 解析BMFont字体文件，填充字符描述符和字距信息
bool bm_font::parse_font(sys::state& state, simple_fs::file& f) {
	auto content = simple_fs::view_contents(f);
	parsers::error_handler err("");
	parsers::scenario_building_context context(state);
	err.file_name = simple_fs::native_to_utf8(simple_fs::get_full_name(f));
	parsers::token_generator gen(content.data, content.data + content.file_size);
	parsers::bmfont_file_context bmfont_file_context(context, *this);
	parsers::parse_bmfont_file(gen, err, bmfont_file_context);
	return true;
}

// 获取两个字符之间的字距调整值
int bm_font::get_kerning_pair(char first, char second) const {
	uint16_t index = (uint16_t(first) << 8) | uint16_t(second);
	if(auto it = kernings.find(index); it != kernings.end())
		return it->second;
	else
		return 0;
}

// 计算字符串渲染后的总宽度
float bm_font::get_string_width(sys::state& state, char const* string, uint32_t count) const {
	float total = 0.f;
	for(uint32_t i = 0; i < count; ++i) {
		auto ch = uint8_t(string[i]);
		if(i != 0 && ch == 0xC3 && uint8_t(string[i + 1]) == 0xA3) {
			ch = 0xA3;
			i++;
		} else if(ch == 0xA4) {
			ch = 0xA3;
		}
		if(i != count - 1) {
			total += get_kerning_pair(ch, string[i + 1]);
		}
		total += chars[ch].x_advance * (ch == 0xA3 ? 0.25f : 1.f);
	}
	return total;
}

// 析构函数：释放字体纹理资源
bm_font::~bm_font() {
	if(ftexid)
		glDeleteTextures(1, &ftexid);
}

// 根据字体句柄获取对应的位图字体，若未加载则按字体名称映射并加载
bm_font const& get_bm_font(sys::state& state, uint16_t font_handle) {
	if(auto it = state.font_collection.bitmap_fonts.find(font_handle); it != state.font_collection.bitmap_fonts.end()) {
		return it->second;
	} else {
		auto fit = state.font_collection.font_names.find(font_handle);
		assert(fit != state.font_collection.font_names.end());
		// 字体名称映射逻辑：将游戏内部字体名映射到实际字体文件名
		auto fname = [&]() {
			auto sv = state.to_string_view(fit->second);
			if(sv == "Main_14")
				return std::string("garamond_14");
			if(sv == "Main_14_plain")
				return std::string("garamond_14");
			if(sv == "Main_14_grey")
				return std::string("garamond_14_bold");
			if(sv == "Main_14_black")
				return std::string("garamond_14_bold");
			if(sv == "Main_14_red")
				return std::string("garamond_14_bold");
			if(sv == "Main_14_bold")
				return std::string("garamond_14_bold");
			if(sv == "Main_14_orange")
				return std::string("garamond_14_bold");
			if(sv == "Main_14_eu")
				return std::string("garamond_14");
			if(sv == "tahoma_60")
				return std::string("mapfont_56");
			if(sv == "mapfont_56_small")
				return std::string("vic_22_bl");
			if(sv == "ToolTip_Font")
				return std::string("garamond_16");
			if(sv == "FPS_Font")
				return std::string("Arial14");
			return std::string(sv);
		}();

		// 在 gfx/fonts 目录下打开字体定义文件和纹理图片
		auto root = get_root(state.common_fs);
		auto gfx_dir = open_directory(root, NATIVE("gfx"));
		auto font_dir = open_directory(gfx_dir, NATIVE("fonts"));
		auto font_def = open_file(font_dir, simple_fs::win1250_to_native(fname + ".fnt"));
		auto font_image = open_file(font_dir, simple_fs::win1250_to_native(fname + ".tga"));
		// 字体文件缺失时插入空字体作为占位
		if(!bool(font_def) || !bool(font_image)) {
			auto result = state.font_collection.bitmap_fonts.insert_or_assign(font_handle, bm_font());
			return result.first->second;
		}
		auto result = state.font_collection.bitmap_fonts.insert_or_assign(font_handle, bm_font(state, *font_def, *font_image));
		return result.first->second;
	}
}

} // namespace text
