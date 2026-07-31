#include <cmath>
#include <bit>

#include "hb.h"
#include "hb-ft.h"
#include "freetype/ftoutln.h"

#include "fonts.hpp"
#include "parsers.hpp"
#include "simple_fs.hpp"
#include "system_state.hpp"
#include "constants.hpp"
#include "military.hpp"
#include "gui_map_icons.hpp"
#include "ui_state.hpp"
#ifdef _WIN32
#include <icu.h>
#else
#include <unicode/ubrk.h>
#include <unicode/utypes.h>
#include <unicode/ubidi.h>
#endif

namespace text {

// 将字体索引、是否粗体、尺寸打包为 16 位字体句柄
constexpr uint16_t pack_font_handle(uint32_t font_index, bool black, uint32_t size) {
	return uint16_t(uint32_t((font_index - 1) << 7) | uint32_t(black ? (1 << 6) : 0) | uint32_t(size & 0x3F));
}

// 根据字体名称后缀判断是否为粗体（black）
bool is_black_font(std::string_view txt) {
	if(parsers::has_fixed_suffix_ci(txt.data(), txt.data() + txt.length(), "_bl") ||
			parsers::has_fixed_suffix_ci(txt.data(), txt.data() + txt.length(), "black") ||
			parsers::has_fixed_suffix_ci(txt.data(), txt.data() + txt.length(), "black_bold")) {
		return true;
	} else {
		return false;
	}
}

// 从字体名称中解析字体尺寸（无数字时按名称匹配默认尺寸）
uint32_t font_size(std::string_view txt) {
	char const* first_int = txt.data();
	char const* end = txt.data() + txt.size();
	while(first_int != end && !isdigit(*first_int))
		++first_int;
	char const* last_int = first_int;
	while(last_int != end && isdigit(*last_int))
		++last_int;

	if(first_int == last_int) {
		if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "fps_font"))
			return uint32_t(14);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "tooltip_font"))
			return uint32_t(16);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "frangoth_bold"))
			return uint32_t(18);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "impact_small"))
			return uint32_t(24);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "old_english"))
			return uint32_t(50);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "timefont"))
			return uint32_t(24);
		else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "vic_title"))
			return uint32_t(42);
		else
			return uint32_t(14);
	}

	uint32_t rvalue = 0;
	std::from_chars(first_int, last_int, rvalue);
	return rvalue;
}

// 根据字体名称前缀判断字体索引（1=正文类，2=标题类）
uint32_t font_index(std::string_view txt) {
	if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "arial"))
		return 1;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "fps"))
		return 1;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "main"))
		return 2;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "tooltip"))
		return 1;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "frangoth"))
		return 2;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "garamond"))
		return 2;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "impact"))
		return 2;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "old"))
		return 2;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "timefont"))
		return 1;
	else if(parsers::has_fixed_prefix_ci(txt.data(), txt.data() + txt.size(), "vic"))
		return 2;
	else
		return 1;
}

// 将字体名称转换为字体句柄，并注册到字体名称表
uint16_t name_into_font_id(sys::state& state, std::string_view txt) {
	auto base_id = pack_font_handle(font_index(txt), is_black_font(txt), font_size(txt));
	std::string txt_copy = [&]() {
		if(parsers::has_fixed_suffix_ci(txt.data(), txt.data() + txt.length(), "_black")) {
			return std::string(txt.substr(0, txt.length() - 6));
		}
		if(parsers::has_fixed_suffix_ci(txt.data(), txt.data() + txt.length(), "_black_bold")) {
			return std::string(txt.substr(0, txt.length() - 11)) + "_bold";
		}
		return std::string(txt);
	}();
	uint16_t individuator = 0;
	auto it = state.font_collection.font_names.find(uint16_t(base_id | (individuator << 8)));
	while(it != state.font_collection.font_names.end()) {
		if(state.to_string_view(it->second) == txt_copy) {
			return uint16_t(base_id | (individuator << 8));
		}
		++individuator;
		it = state.font_collection.font_names.find(uint16_t(base_id | (individuator << 8)));
	}
	auto new_key = state.add_key_utf8(txt_copy);
	auto new_handle = uint16_t(base_id | (individuator << 8));
	state.font_collection.font_names.insert_or_assign(new_handle, new_key);
	return new_handle;
}

// 从字体句柄中解析字体尺寸（按字体索引做缩放）
int32_t size_from_font_id(uint16_t id) {
	auto index = uint32_t(((id >> 7) & 0x01) + 1);
	if(index == 2)
		return (int32_t(id & 0x3F) * 3) / 4;
	else
		return (int32_t(id & 0x3F) * 5) / 6;
}

// 从字体句柄中判断是否为粗体
bool is_black_from_font_id(uint16_t id) {
	return ((id >> 6) & 0x01) != 0;
}
// 从字体句柄中解析字体选择类型（正文/标题）
font_selection font_index_from_font_id(sys::state& state, uint16_t id) {
	uint32_t offset = 0;
	if(((id >> 7) & 0x01) == 0)
		return font_selection::body_font;
	else
		return font_selection::header_font;
}

// 根据字体句柄计算指定范围文本的宽度
float font_manager::text_extent(sys::state& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count, uint16_t font_id) {
	auto& font = get_font(state, text::font_index_from_font_id(state, font_id));
	auto size = text::size_from_font_id(font_id);
	if(state.user_settings.use_classic_fonts) {
		std::string codepoints = "";
		for(uint32_t i = starting_offset; i < starting_offset + count; i++) {
			codepoints.push_back(char(txt.glyph_info[i].codepoint));
		}
		return text::get_bm_font(state, font_id).get_string_width(state, codepoints.c_str(), uint32_t(codepoints.size()));
	}
	return float(font.retrieve_instance(state, size).text_extent(state, txt, starting_offset, count));
}

// 根据字体句柄获取行高
float font_manager::line_height(sys::state& state, uint16_t font_id) {
	if(state.user_settings.use_classic_fonts) {
		return text::get_bm_font(state, font_id).get_height();
	}
	return float(get_font(state, text::font_index_from_font_id(state, font_id)).retrieve_instance(state, text::size_from_font_id(font_id)).line_height(state));
}

// 字体管理器构造函数：初始化 FreeType 库
font_manager::font_manager() {
	FT_Init_FreeType(&ft_library);
}
// 字体管理器析构函数（FreeType 库由全局生命周期管理，此处不释放）
font_manager::~font_manager() {
	//FT_Done_FreeType(ft_library);
}

// 重置当前字体实例：释放 FreeType/HarfBuzz 资源并清空纹理与字形缓存
void font_at_size::reset() {
	if(hb_font_face)
		hb_font_destroy(hb_font_face);
	if(hb_buf)
		hb_buffer_destroy(hb_buf);
	if(font_face)
		FT_Done_Face(font_face);
	hb_font_face = nullptr;
	hb_buf = nullptr;
	font_face = nullptr;

	internal_tx_line_height = 0;
	internal_tx_line_xpos = 1024;
	internal_tx_line_ypos = 1024;

	for(auto& t : textures) {
		glDeleteTextures(1, &t);
	}
	glyph_positions.clear();
	textures.clear();
}

// 字体析构函数
font::~font() {

}

// 计算字形位图内的坐标偏移：返回位图线性索引，超出范围返回 -1
int32_t transform_offset_b(int32_t x, int32_t y, int32_t btmap_x_off, int32_t btmap_y_off, uint32_t width, uint32_t height,
		uint32_t pitch) {
	int bmp_x = x - btmap_x_off;
	int bmp_y = y - btmap_y_off;

	if((bmp_x < 0) || (bmp_x >= (int32_t)width) || (bmp_y < 0) || (bmp_y >= (int32_t)height))
		return -1;
	else
		return bmp_x + bmp_y * (int32_t)pitch;
}


constexpr float rt_2 = 1.41421356237309504f; // 根号 2

// 初始化输入位图：将字形位图转换为 dr_size×dr_size 的布尔网格（用于距离变换）
void init_in_map(bool in_map[dr_size * dr_size], uint8_t const* bmp_data, int32_t btmap_x_off, int32_t btmap_y_off, uint32_t width, uint32_t height, uint32_t pitch) {
	for(int32_t j = 0; j < dr_size; ++j) {
		for(int32_t i = 0; i < dr_size; ++i) {
			auto const boff = transform_offset_b(i, j, btmap_x_off, btmap_y_off, width, height, pitch);
			in_map[i + dr_size * j] = (boff != -1) ? (bmp_data[boff] > 127) : false;
		}
	}
}

// 重置该字体的所有尺寸实例
void font::reset_instances() {
	for(auto& inst : sized_fonts)
		inst.second.reset();
	sized_fonts.clear();
}

//
// 基于 "dead reckoning" 有符号距离变换算法
// Grevera, George J. (2004) Computer Vision and Image Understanding 95 pages 317–333
//

// 执行 dead reckoning 有符号距离变换：根据布尔网格生成对应的距离场
void dead_reckoning(float distance_map[dr_size * dr_size], bool const in_map[dr_size * dr_size]) {
	int16_t yborder[dr_size * dr_size] = {0};
	int16_t xborder[dr_size * dr_size] = {0};

	for(uint32_t i = 0; i < dr_size * dr_size; ++i) {
		distance_map[i] = std::numeric_limits<float>::infinity();
	}
	for(int32_t j = 1; j < dr_size - 1; ++j) {
		for(int32_t i = 1; i < dr_size - 1; ++i) {
			if(in_map[i - 1 + dr_size * j] != in_map[i + dr_size * j] || in_map[i + 1 + dr_size * j] != in_map[i + dr_size * j] ||
					in_map[i + dr_size * (j + 1)] != in_map[i + dr_size * j] || in_map[i + dr_size * (j - 1)] != in_map[i + dr_size * j]) {
				distance_map[i + dr_size * j] = 0.0f;
				yborder[i + dr_size * j] = static_cast<int16_t>(j);
				xborder[i + dr_size * j] = static_cast<int16_t>(i);
			}
		}
	}
	for(int32_t j = 1; j < dr_size - 1; ++j) {
		for(int32_t i = 1; i < dr_size - 1; ++i) {
			if(distance_map[(i - 1) + dr_size * (j - 1)] + rt_2 < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i - 1) + dr_size * (j - 1)];
				xborder[i + dr_size * j] = xborder[(i - 1) + dr_size * (j - 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i) + dr_size * (j - 1)] + 1.0f < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i) + dr_size * (j - 1)];
				xborder[i + dr_size * j] = xborder[(i) + dr_size * (j - 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i + 1) + dr_size * (j - 1)] + rt_2 < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i + 1) + dr_size * (j - 1)];
				xborder[i + dr_size * j] = xborder[(i + 1) + dr_size * (j - 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i - 1) + dr_size * (j)] + 1.0f < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i - 1) + dr_size * (j)];
				xborder[i + dr_size * j] = xborder[(i - 1) + dr_size * (j)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
		}
	}

	for(int32_t j = dr_size - 2; j > 0; --j) {
		for(int32_t i = dr_size - 2; i > 0; --i) {
			if(distance_map[(i + 1) + dr_size * (j)] + 1.0f < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i + 1) + dr_size * (j)];
				xborder[i + dr_size * j] = xborder[(i + 1) + dr_size * (j)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i - 1) + dr_size * (j + 1)] + rt_2 < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i - 1) + dr_size * (j + 1)];
				xborder[i + dr_size * j] = xborder[(i - 1) + dr_size * (j + 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i) + dr_size * (j + 1)] + 1.0f < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i) + dr_size * (j + 1)];
				xborder[i + dr_size * j] = xborder[(i) + dr_size * (j + 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
			if(distance_map[(i + 1) + dr_size * (j + 1)] + rt_2 < distance_map[(i) + dr_size * (j)]) {
				yborder[i + dr_size * j] = yborder[(i + 1) + dr_size * (j + 1)];
				xborder[i + dr_size * j] = xborder[(i + 1) + dr_size * (j + 1)];
				distance_map[(i) + dr_size * (j)] = (float)std::sqrt((i - xborder[i + dr_size * j]) * (i - xborder[i + dr_size * j]) +
																														 (j - yborder[i + dr_size * j]) * (j - yborder[i + dr_size * j]));
			}
		}
	}

	for(uint32_t i = 0; i < dr_size * dr_size; ++i) {
		if(in_map[i])
			distance_map[i] *= -1.0f;
	}
}

// 重置所有字体的尺寸实例
void font_manager::reset_fonts() {
	for(auto& f : font_array)
		f.reset_instances();
}
// 切换本地化区域：解析语言、加载正文/标题/地图字体，并编译 ICU 断字规则
void font_manager::change_locale(sys::state& state, dcon::locale_id l) {
	current_locale = l;

	uint32_t end_language = 0;
	auto locale_name = state.world.locale_get_locale_name(l);
	std::string_view localename_sv((char const*)locale_name.begin(), locale_name.size());
	while(end_language < locale_name.size()) {
		if(localename_sv[end_language] == '-')
			break;
		++end_language;
	}

	std::string lang_str{ localename_sv .substr(0, end_language) };

	state.world.locale_set_resolved_language(l, hb_language_from_string(localename_sv.data(), int(end_language)));

	// 解析并加载正文字体
	{
		auto f = state.world.locale_get_body_font(l);
		std::string fname((char const*)f.begin(), (char const*)f.end());
		font* resolved = nullptr;
		uint16_t count = 0;

		for(auto& fnt : font_array) {
			if(fnt.file_name == fname) {
				resolved = &fnt;
				break;
			}
			++count;
		}

		if(!resolved) {
			auto r = simple_fs::get_root(state.common_fs);
			auto assets = simple_fs::open_directory(r, NATIVE("assets"));
			auto fonts = simple_fs::open_directory(assets, NATIVE("fonts"));
			auto ff = simple_fs::open_file(fonts, simple_fs::utf8_to_native(fname));
			if(!ff) {
				std::abort();
			}

			font_array.emplace_back();
			auto content = simple_fs::view_contents(*ff);
			load_font(font_array.back(), content.data, content.file_size);
			font_array.back().file_name = fname;
			resolved = &(font_array.back());
		}

		state.world.locale_set_resolved_body_font(l, count);
	}
	// 解析并加载标题字体
	{
		auto f = state.world.locale_get_header_font(l);
		std::string fname((char const*)f.begin(), (char const*)f.end());
		font* resolved = nullptr;
		uint16_t count = 0;

		for(auto& fnt : font_array) {
			if(fnt.file_name == fname) {
				resolved = &fnt;
				break;
			}
			++count;
		}

		if(!resolved) {
			auto r = simple_fs::get_root(state.common_fs);
			auto assets = simple_fs::open_directory(r, NATIVE("assets"));
			auto fonts = simple_fs::open_directory(assets, NATIVE("fonts"));
			auto ff = simple_fs::open_file(fonts, simple_fs::utf8_to_native(fname));
			if(!ff) {
				std::abort();
			}

			font_array.emplace_back();
			auto content = simple_fs::view_contents(*ff);
			load_font(font_array.back(), content.data, content.file_size);
			font_array.back().file_name = fname;
			resolved = &(font_array.back());
		}

		state.world.locale_set_resolved_header_font(l, count);
	}
	// 解析并加载地图字体（同时加载到 mfont）
	{
		auto f = state.world.locale_get_map_font(l);
		std::string fname((char const*)f.begin(), (char const*)f.end());
		font* resolved = nullptr;
		uint16_t count = 0;

		for(auto& fnt : font_array) {
			if(fnt.file_name == fname) {
				resolved = &fnt;
				break;
			}
			++count;
		}

		if(!resolved) {
			auto r = simple_fs::get_root(state.common_fs);
			auto assets = simple_fs::open_directory(r, NATIVE("assets"));
			auto fonts = simple_fs::open_directory(assets, NATIVE("fonts"));
			auto ff = simple_fs::open_file(fonts, simple_fs::utf8_to_native(fname));
			if(!ff) {
				std::abort();
			}

			font_array.emplace_back();
			auto content = simple_fs::view_contents(*ff);
			load_font(font_array.back(), content.data, content.file_size);
			font_array.back().file_name = fname;
			resolved = &(font_array.back());
		}
		{
			auto r = simple_fs::get_root(state.common_fs);
			auto assets = simple_fs::open_directory(r, NATIVE("assets"));
			auto fonts = simple_fs::open_directory(assets, NATIVE("fonts"));
			auto ff = simple_fs::open_file(fonts, simple_fs::utf8_to_native(fname));
			if(!ff) {
				std::abort();
			}
			auto content = simple_fs::view_contents(*ff);
			mfont.load_font(ft_library, content.data, content.file_size);
		}
		state.world.locale_set_resolved_map_font(l, count);
	}

	state.reset_locale_pool();

	// 加载回退语言字符串
	auto fb_name = state.world.locale_get_fallback(l);
	if(fb_name.size() > 0) {
		std::string_view fb_name_sv((char const*)fb_name.begin(), fb_name.size());
		state.load_locale_strings(fb_name_sv);
	}

	// 编译 ICU 行边界断字规则
	{
		UErrorCode errorCode = U_ZERO_ERROR;
		UBreakIterator* lb_it = ubrk_open(UBreakIteratorType::UBRK_LINE, lang_str.c_str(), nullptr, 0, &errorCode);
		if(!lb_it || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法创建迭代器
		}
		auto rule_size = ubrk_getBinaryRules(lb_it, nullptr, 0, &errorCode);
		if(rule_size == 0 || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法获取规则
		}

		state.font_collection.compiled_ubrk_rules.resize(uint32_t(rule_size));
		ubrk_getBinaryRules(lb_it, state.font_collection.compiled_ubrk_rules.data(), rule_size, &errorCode);

		ubrk_close(lb_it);
	}
	// 编译 ICU 字符边界断字规则
	{
		UErrorCode errorCode = U_ZERO_ERROR;
		UBreakIterator* ch_it = ubrk_open(UBreakIteratorType::UBRK_CHARACTER, lang_str.c_str(), nullptr, 0, &errorCode);
		if(!ch_it || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法创建迭代器
		}
		auto rule_size = ubrk_getBinaryRules(ch_it, nullptr, 0, &errorCode);
		if(rule_size == 0 || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法获取规则
		}

		state.font_collection.compiled_char_ubrk_rules.resize(uint32_t(rule_size));
		ubrk_getBinaryRules(ch_it, state.font_collection.compiled_char_ubrk_rules.data(), rule_size, &errorCode);

		ubrk_close(ch_it);
	}
	// 编译 ICU 单词边界断字规则
	{
		UErrorCode errorCode = U_ZERO_ERROR;
		UBreakIterator* ch_it = ubrk_open(UBreakIteratorType::UBRK_WORD, lang_str.c_str(), nullptr, 0, &errorCode);
		if(!ch_it || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法创建迭代器
		}
		auto rule_size = ubrk_getBinaryRules(ch_it, nullptr, 0, &errorCode);
		if(rule_size == 0 || !U_SUCCESS(errorCode)) {
			std::abort(); // 无法获取规则
		}

		state.font_collection.compiled_word_ubrk_rules.resize(uint32_t(rule_size));
		ubrk_getBinaryRules(ch_it, state.font_collection.compiled_word_ubrk_rules.data(), rule_size, &errorCode);

		ubrk_close(ch_it);
	}

	state.load_locale_strings(localename_sv);

	military::rename_all_units(state);

	// 清空地图单位计数器的文本布局缓存，强制语言切换后重新生成所有文本布局
	if(state.ui_state.unit_counter_box) {
		auto counter = static_cast<ui::unit_counter_window*>(state.ui_state.unit_counter_box.get());
		counter->reset_all_caches();
	}

	// 清空地图文本数据，强制使用新字体重新生成所有地图标签（省份名、港口名等）
	// 否则 map_data.text_data / province_text_data 中的字形索引仍对应旧字体，导致地图文本乱码
	{
		state.map_state.map_data.text_data.clear();
		state.map_state.map_data.province_text_data.clear();
		state.map_state.province_labels_require_lines = true;
		state.map_state.province_labels_require_text_changes = true;
		state.map_state.map_labels_current_state = map::map_labels_state::generate_text;
	}
}

// 根据字体选择类型获取对应的字体对象
font& font_manager::get_font(sys::state& state, font_selection s) {
	if(!current_locale)
		std::abort();
	switch(s) {
	case font_selection::body_font:
	default:
		return font_array[state.world.locale_get_resolved_body_font(current_locale)];
	case font_selection::header_font:
		return font_array[state.world.locale_get_resolved_header_font(current_locale)];
	}
}

// 获取（或创建）指定尺寸的字体实例（尺寸经 UI 缩放调整）
font_at_size& font::retrieve_instance(sys::state& state, int32_t base_size) {
	if(auto it = sized_fonts.find(int32_t(base_size * state.user_settings.ui_scale)); it != sized_fonts.end()) {
		return it->second;
	}
	auto t = sized_fonts.insert_or_assign(int32_t(base_size * state.user_settings.ui_scale), font_at_size{});
	t.first->second.create(state.font_collection.ft_library, file_data.get(), file_size, int32_t(base_size * state.user_settings.ui_scale));
	return t.first->second;
}

// 获取（或创建）指定尺寸的无状态字体实例（不应用 UI 缩放）
font_at_size& font::retrieve_stateless_instance(FT_Library lib, int32_t base_size) {
	if(auto it = sized_fonts.find(base_size); it != sized_fonts.end()) {
		return it->second;
	}
	auto t = sized_fonts.insert_or_assign(base_size , font_at_size{});
	t.first->second.create(lib, file_data.get(), file_size, base_size);
	return t.first->second;
}

// 初始化指定尺寸的字体实例：创建 FreeType 字体面、HarfBuzz 字体与缓冲区，并计算行高相关度量
void font_at_size::create(FT_Library lib, FT_Byte* file_data, size_t file_size, int32_t real_size) {
	FT_New_Memory_Face(lib, file_data, FT_Long(file_size), 0, &font_face);
	FT_Select_Charmap(font_face, FT_ENCODING_UNICODE);
	FT_Set_Pixel_Sizes(font_face, real_size, real_size);
	hb_font_face = hb_ft_font_create(font_face, nullptr);
	hb_buf = hb_buffer_create();
	px_size = real_size;

	internal_line_height = float(font_face->size->metrics.height) / text::fixed_to_fp;
	internal_ascender = float(font_face->size->metrics.ascender) / text::fixed_to_fp;
	internal_descender = -float(font_face->size->metrics.descender) / text::fixed_to_fp;
	internal_top_adj = (internal_line_height - (internal_ascender + internal_descender)) / 2.0f;
}

// 将字体文件数据复制载入 font 对象
void font_manager::load_font(font& fnt, char const* file_data, uint32_t fz) {
	fnt.file_data = std::unique_ptr<FT_Byte[]>(new FT_Byte[fz]);
	fnt.file_size = fz;
	memcpy(fnt.file_data.get(), file_data, fz);
}

// 获取行高（按 UI 缩放调整）
float font_at_size::line_height(sys::state& state) const {
	return internal_line_height / state.user_settings.ui_scale;
}
// 获取上行高度（按 UI 缩放调整）
float font_at_size::ascender(sys::state& state) const {
	return internal_ascender / state.user_settings.ui_scale;
}
// 获取下行高度（按 UI 缩放调整）
float font_at_size::descender(sys::state& state) const {
	return internal_descender / state.user_settings.ui_scale;
}
// 获取顶部调整量（按 UI 缩放调整）
float font_at_size::top_adjustment(sys::state& state) const {
	return internal_top_adj  / state.user_settings.ui_scale;
}

// 判断该字体是否能显示指定字符
bool font::can_display(char32_t ch_in) const {
	if(sized_fonts.empty())
		return true;
	return FT_Get_Char_Index(sized_fonts.begin()->second.font_face, ch_in) != 0;
}

// 获取指定字形（含子像素偏移）在纹理图集中的位置信息
glyph_sub_offset& font_at_size:: get_glyph(uint16_t glyph_in, int32_t subpixel) {
	return glyph_positions[(uint32_t(glyph_in) << 2) | uint32_t(subpixel & 3)];
}
// 栅格化并缓存指定字形（含子像素偏移），将位图写入纹理图集
void font_at_size::make_glyph(uint16_t glyph_in, int32_t subpixel) {
	if(glyph_positions.find((uint32_t(glyph_in) << 2) | uint32_t(subpixel & 3)) != glyph_positions.end())
		return;

	// 加载字形的全部度量信息
	if(glyph_in) {
		FT_Load_Glyph(font_face, glyph_in, FT_LOAD_TARGET_LIGHT);
		glyph_sub_offset gso;

		if(subpixel == 1) {
			FT_Outline_Translate(&(font_face->glyph->outline), 16, 0);
		} else if(subpixel == 2) {
			FT_Outline_Translate(&(font_face->glyph->outline), 32, 0);
		} else if(subpixel == 3) {
			FT_Outline_Translate(&(font_face->glyph->outline), 48, 0);
		}

		FT_Render_Glyph(font_face->glyph, FT_RENDER_MODE_NORMAL);

		FT_Glyph g_result;
		auto err = FT_Get_Glyph(font_face->glyph, &g_result);
		if(err != 0) {
			glyph_positions.insert_or_assign((uint32_t(glyph_in) << 2) | uint32_t(subpixel & 3), gso);
			return;
		}

		FT_Bitmap const& bitmap = ((FT_BitmapGlyphRec*)g_result)->bitmap;

		assert(bitmap.rows <= 1024 && bitmap.width <= 1024);
		if(bitmap.rows > 1024 || bitmap.width > 1024) { // 尺寸过大，无法渲染
			FT_Done_Glyph(g_result);
			glyph_positions.insert_or_assign((uint32_t(glyph_in) << 2) | uint32_t(subpixel & 3), gso);
			return;
		}
		if(bitmap.width + internal_tx_line_xpos >= 1024) { // 当前行已满，换行
			internal_tx_line_xpos = 0;
			internal_tx_line_ypos += internal_tx_line_height;
			internal_tx_line_height = 0;
		}
		GLuint texid = 0;
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
		if(bitmap.rows + internal_tx_line_ypos >= 1024) { // 当前纹理图已满，新建纹理图
			internal_tx_line_xpos = 0;
			internal_tx_line_ypos = 0;
			internal_tx_line_height = 0;

			glGenTextures(1, &texid);
			glBindTexture(GL_TEXTURE_2D, texid);
			glTexStorage2D(GL_TEXTURE_2D, 1, GL_R8, 1024, 1024);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
			textures.push_back(texid);
			uint32_t clearvalue = 0;
			glClearTexImage(texid, 0, GL_RED, GL_UNSIGNED_BYTE, &clearvalue);
		} else {
			texid = textures.back();
			glBindTexture(GL_TEXTURE_2D, texid);
		}
		gso.x = uint16_t(internal_tx_line_xpos);
		gso.y = uint16_t(internal_tx_line_ypos );
		gso.width = uint16_t(bitmap.width);
		gso.height = uint16_t(bitmap.rows);
		gso.tx_sheet = uint16_t(textures.size() - 1);
		gso.bitmap_left = int16_t(((FT_BitmapGlyphRec*)g_result)->left);
		gso.bitmap_top = int16_t(((FT_BitmapGlyphRec*)g_result)->top);

		internal_tx_line_xpos += bitmap.width + 1;
		internal_tx_line_height = std::max(internal_tx_line_height, bitmap.rows + 1);

		// 位图行紧密排列时直接上传，否则需重新打包后再上传
		if(bitmap.pitch == int32_t(bitmap.width)) {
			glTexSubImage2D(GL_TEXTURE_2D, 0, int32_t(gso.x), int32_t(gso.y), bitmap.width, bitmap.rows, GL_RED, GL_UNSIGNED_BYTE, bitmap.buffer);
		} else {
			uint8_t* temp = new uint8_t[bitmap.width * bitmap.rows];
			for(uint32_t j = 0; j < bitmap.rows; ++j) {
				for(uint32_t i = 0; i < bitmap.width; ++i) {
					temp[i + j * bitmap.width] = uint8_t(bitmap.buffer[i + j * bitmap.pitch]);
				}
			}
			glTexSubImage2D(GL_TEXTURE_2D, 0, int32_t(gso.x), int32_t(gso.y), bitmap.width, bitmap.rows, GL_RED, GL_UNSIGNED_BYTE, temp);
			delete[] temp;
		}
		FT_Done_Glyph(g_result);
		glyph_positions.insert_or_assign((uint32_t(glyph_in) << 2) | uint32_t(subpixel & 3), gso);
	}
}

// stored_glyphs 构造函数：整形生成字形并填充布局信息
stored_glyphs::stored_glyphs(sys::state& state, int32_t size, font_selection type, std::span<uint16_t> s, uint32_t details_offset, layout_details* d, uint16_t font_handle) {
	state.font_collection.get_font(state, type).retrieve_instance(state, size).remake_cache(state, type, *this, s, details_offset, d, font_handle);
}
// stored_glyphs 构造函数：整形生成字形（跳过 Bidi 处理）
stored_glyphs::stored_glyphs(sys::state& state, int32_t size, font_selection type, std::span<uint16_t> s, no_bidi) {
	state.font_collection.get_font(state, type).retrieve_instance(state, size).remake_bidiless_cache(state, type, *this, s);
}

// stored_glyphs 构造函数：从另一组字形中截取一段构造
stored_glyphs::stored_glyphs(stored_glyphs& other, uint32_t offset, uint32_t count) {
	glyph_info.resize(count);
	std::copy_n(other.glyph_info.data() + offset, count, glyph_info.data());
}

// 整形文本并生成字形缓存（含 Bidi 处理与字位簇布局）
void font_at_size::remake_cache(sys::state& state, font_selection type, stored_glyphs& txt, std::span<uint16_t> source, uint32_t details_offset, layout_details* d, uint16_t font_handle) {
	txt.glyph_info.clear();

	if(source.size() == 0)
		return;


	// 经典位图字体路径：直接按字符构造字形与布局
	if(state.user_settings.use_classic_fonts) {
		auto& bm_font = text::get_bm_font(state, font_handle);
		std::string char_str_copy;
		if(d) {
			for(uint32_t i = 0; i < uint32_t(source.size()); i++) {
				char_str_copy.push_back(char(source[i]));
			}
		}

		for(uint32_t i = 0; i < uint32_t(source.size()); i++) {
			text::stored_glyph glyph;
			glyph.codepoint = source[i];
			glyph.cluster = i;
			txt.glyph_info.push_back(glyph);

			if(d) {
				d->grapheme_placement.emplace_back();
				if(d->grapheme_placement.size() != 1) {
					d->grapheme_placement.back().visual_left = int16_t(d->grapheme_placement.size() - 2);
					d->grapheme_placement[d->grapheme_placement.size() - 2].visual_right = int16_t(d->grapheme_placement.size() - 1);
				}
				if(source[i] == uint16_t(L' ') || source[i] == uint16_t(L'\t') || source[i] == uint16_t(L'\r') || source[i] == uint16_t(L'\n')) {
					d->grapheme_placement.back().flags |= (ex_grapheme_cluster_info::f_is_word_start | ex_grapheme_cluster_info::f_is_word_end);
					if(d->grapheme_placement.size() != 1) {
						d->grapheme_placement[d->grapheme_placement.size() - 2].flags |= int16_t(ex_grapheme_cluster_info::f_is_word_end);
					}
				}
				if(i == 0) {
					d->grapheme_placement.back().flags |= (ex_grapheme_cluster_info::f_is_word_start);
				}
				if(i == uint32_t(source.size() - 1)) {
					d->grapheme_placement.back().flags |= (ex_grapheme_cluster_info::f_is_word_end);
				}
				d->grapheme_placement.back().source_offset = uint16_t(details_offset + i);
				d->grapheme_placement.back().x_offset = int16_t(bm_font.get_string_width(state, char_str_copy.c_str(), i));
				d->grapheme_placement.back().width = int16_t(bm_font.get_string_width(state, char_str_copy.c_str(), i + 1) - d->grapheme_placement.back().x_offset);
				d->grapheme_placement.back().unit_length = 1;
			}
		}
		return;
	}

	auto locale = state.font_collection.get_current_locale();
	UBiDi* para;
	UErrorCode errorCode = U_ZERO_ERROR;

	para = ubidi_open();
	//para = ubidi_openSized(int32_t(temp_text.size()), 64, pErrorCode);
	if(!para)
		std::abort();

	// 准备 HarfBuzz 特性缓冲区
	hb_feature_t feature_buffer[10];
	auto features = type == font_selection::body_font ? state.world.locale_get_body_font_features(locale)
		: type == font_selection::header_font ? state.world.locale_get_header_font_features(locale)
		: state.world.locale_get_map_font_features(locale);
	for(uint32_t i = 0; i < uint32_t(std::extent_v<decltype(feature_buffer)>) && i < features.size(); ++i) {
		feature_buffer[i].tag = features[i];
		feature_buffer[i].start = 0;
		feature_buffer[i].end = (unsigned int)-1;
		feature_buffer[i].value = 1;
	}
	uint32_t hb_feature_count = std::min(features.size(), uint32_t(std::extent_v<decltype(feature_buffer)>));

	ubidi_setPara(para, (UChar const*)(source.data()), int32_t(source.size()), state.world.locale_get_native_rtl(locale) ? 1 : 0, nullptr, &errorCode);

	if(U_SUCCESS(errorCode)) {
		auto runcount = ubidi_countRuns(para, &errorCode);
		float total_x_advance = 0;

		if(U_SUCCESS(errorCode)) {
			// TODO -- 查找之前已添加到同一行的内容
			int32_t previous_rightmost_in_run = -1;
			int32_t last_run_rightmost = -1;

			for(int32_t i = 0; i < runcount; ++i) {
				int32_t logical_start = 0;
				int32_t length = 0;
				auto direction = ubidi_getVisualRun(para, i, &logical_start, &length);

				// 使用 harfbuzz 对当前 run 进行整形
				hb_buffer_clear_contents(hb_buf);
				hb_buffer_add_utf16(hb_buf, source.data(), int32_t(source.size()), logical_start, length);

				hb_buffer_set_direction(hb_buf, direction == UBIDI_RTL ? HB_DIRECTION_RTL : HB_DIRECTION_LTR);
				hb_buffer_set_script(hb_buf, (hb_script_t)state.world.locale_get_hb_script(locale));
				hb_buffer_set_language(hb_buf, state.world.locale_get_resolved_language(locale));

				hb_shape(hb_font_face, hb_buf, feature_buffer, hb_feature_count);

				uint32_t gcount = 0;
				hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &gcount);
				hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &gcount);

				if(d) {
					// 基于编译后的字符边界规则拆分字位簇
					UBreakIterator* cb_it = ubrk_openBinaryRules(state.font_collection.compiled_char_ubrk_rules.data(), int32_t(state.font_collection.compiled_char_ubrk_rules.size()), (UChar const*)(source.data() + logical_start), int32_t(length), &errorCode);

					if(!cb_it || !U_SUCCESS(errorCode)) {
						std::abort(); // 无法创建迭代器
					}

					ubrk_first(cb_it);
					int32_t start_cluster_position = 0;
					int32_t next_cluster_position = 0;
					int32_t previous_placed = -1;
					size_t start_of_new_entries = d->grapheme_placement.size();

					do {
						next_cluster_position = ubrk_next(cb_it);

						auto end_seq = next_cluster_position != UBRK_DONE ? next_cluster_position : int32_t(length);
						if(end_seq == start_cluster_position) // 零长度字位簇——即未找到
							continue;

						d->grapheme_placement.emplace_back();
						auto& new_exgc = d->grapheme_placement.back();
						if(direction == UBIDI_RTL)
							new_exgc.flags |= text::ex_grapheme_cluster_info::f_has_rtl_directionality;
						new_exgc.line = d->total_lines;
						new_exgc.source_offset = uint16_t(start_cluster_position + logical_start + details_offset);
						new_exgc.unit_length = uint8_t(end_seq - start_cluster_position);

						if(start_of_new_entries != 0 && start_cluster_position == 0) {
							d->grapheme_placement[start_of_new_entries - 1].line = d->total_lines;
						}

						// 链接到视觉上左右相邻的字位簇
						if(direction == UBIDI_RTL) {
							if(previous_placed == -1) {
								previous_rightmost_in_run = int32_t(d->grapheme_placement.size() - 1);
								new_exgc.visual_left = int16_t(previous_rightmost_in_run);
								new_exgc.visual_right = -1;
								if(last_run_rightmost != -1)
									d->grapheme_placement[last_run_rightmost].visual_right = int16_t(d->grapheme_placement.size()) - int16_t(1);
							} else {
								new_exgc.visual_right = int16_t(previous_placed);
								d->grapheme_placement[previous_placed].visual_left = int16_t(d->grapheme_placement.size()) - int16_t(1);

								if(last_run_rightmost != -1)
									d->grapheme_placement[last_run_rightmost].visual_right = int16_t(d->grapheme_placement.size()) - int16_t(1);
							}

							previous_placed = int32_t(d->grapheme_placement.size()) - 1;
						} else {
							if(previous_placed != -1) {
								new_exgc.visual_left = int16_t(previous_placed);
								d->grapheme_placement[previous_placed].visual_right = int16_t(d->grapheme_placement.size()) - int16_t(1);
							} else if(last_run_rightmost != -1) {
								new_exgc.visual_left = int16_t(last_run_rightmost);
								d->grapheme_placement[last_run_rightmost].visual_right = int16_t(d->grapheme_placement.size()) - int16_t(1);
							} else {
								new_exgc.visual_left = -1;
							}

							previous_rightmost_in_run = int32_t(d->grapheme_placement.size()) - 1;
							previous_placed = int32_t(d->grapheme_placement.size()) - 1;
						}

						// 查找渲染位置或其所属的渲染组
						new_exgc.width = 0;
						new_exgc.x_offset = 0;

						start_cluster_position = next_cluster_position;
					} while(next_cluster_position != UBRK_DONE);

					last_run_rightmost = previous_rightmost_in_run;
					ubrk_close(cb_it);

					// 查找单词边界
					UBreakIterator* wb_it = ubrk_openBinaryRules(state.font_collection.compiled_word_ubrk_rules.data(), int32_t(state.font_collection.compiled_word_ubrk_rules.size()), (UChar const*)(source.data() + logical_start), int32_t(length), &errorCode);

					if(!wb_it || !U_SUCCESS(errorCode)) {
						std::abort(); // 无法创建迭代器
					}
					ubrk_first(wb_it);

					int32_t start_wb_position = 0;
					int32_t next_wb_position = 0;

					do {
						next_wb_position = ubrk_next(wb_it);
						auto end_seq = next_wb_position != UBRK_DONE ? next_wb_position : int32_t(length);

						// 查找单词起始位置
						for(auto k = start_of_new_entries; k < d->grapheme_placement.size(); ++k) {
							if(d->grapheme_placement[k].source_offset == uint16_t(start_wb_position + logical_start + details_offset)) {
								d->grapheme_placement[k].flags |= text::ex_grapheme_cluster_info::f_is_word_start;
								break;
							}
						}
						// 查找单词结束位置
						auto best_found = -1;
						for(auto k = start_of_new_entries; k < d->grapheme_placement.size(); ++k) {
							if(uint16_t(start_wb_position + logical_start + details_offset) <= d->grapheme_placement[k].source_offset
								&& d->grapheme_placement[k].source_offset < uint16_t(end_seq + logical_start + details_offset)) {

								best_found = int32_t(k);
							}
						}
						if(best_found != -1) {
							d->grapheme_placement[best_found].flags |= text::ex_grapheme_cluster_info::f_is_word_end;
						}

						start_wb_position = next_wb_position;
					} while(next_wb_position != UBRK_DONE);
					ubrk_close(wb_it);

					// 计算各字位簇的视觉位置
					for(auto k = start_of_new_entries; k < d->grapheme_placement.size(); ++k) {
						bool matched_exactly = false;
						int32_t best_match = -1;
						uint32_t best_match_index = 0;
						float accumulated_advance = 0;

						for(unsigned int j = 0; j < gcount; j++) {
							auto rendering_details_for = glyph_info[j].cluster + details_offset;
							if(uint16_t(rendering_details_for) < d->grapheme_placement[k].source_offset) {
								accumulated_advance += glyph_pos[j].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale);
							}
							if(uint16_t(rendering_details_for) == d->grapheme_placement[k].source_offset) {
								matched_exactly = true;
								d->grapheme_placement[k].x_offset = int16_t(accumulated_advance + total_x_advance);
								d->grapheme_placement[k].width = int16_t(glyph_pos[j].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale));
								break;
							} else if(uint16_t(rendering_details_for) < d->grapheme_placement[k].source_offset
								&& int32_t(rendering_details_for) > best_match) {
								best_match = int32_t(rendering_details_for);
								best_match_index = j;
							}
						}

						if(!matched_exactly) {
							if(best_match != -1) {
								// 扫描已添加的 exgc，找到与该字位簇关联的范围
								auto rendering_details_for = glyph_info[best_match_index].cluster + details_offset;
								accumulated_advance -= glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale);

								int32_t start_exgc = -1;

								for(auto m = start_of_new_entries; m < d->grapheme_placement.size(); ++m) {
									if(d->grapheme_placement[m].source_offset == int16_t(rendering_details_for)) {
										start_exgc = int32_t(m);
										break;
									}
								}

								if(start_exgc != -1 && start_exgc <= int32_t(k)) {
									auto count_in_range = 1 + int32_t(k) - start_exgc;

									// 调整整簇范围内各字位簇的位置与宽度
									if(direction == UBIDI_RTL) {
										for(int32_t m = start_exgc; m <= int32_t(k); ++m) {
											d->grapheme_placement[k].x_offset = int16_t(accumulated_advance + total_x_advance +
												(glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (count_in_range - (m - start_exgc + 1))) / count_in_range);
											d->grapheme_placement[k].width = int16_t(
												(glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (count_in_range - (m - start_exgc))) / count_in_range
												- (glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (count_in_range - (m - start_exgc + 1))) / count_in_range
											);
										}
									} else {
										for(int32_t m = start_exgc; m <= int32_t(k); ++m) {
											d->grapheme_placement[k].x_offset = int16_t(accumulated_advance + total_x_advance +
												(glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (m - start_exgc)) / count_in_range);
											d->grapheme_placement[k].width = int16_t(
												(glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (1 + m - start_exgc)) / count_in_range
												- (glyph_pos[best_match_index].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale) * (m - start_exgc)) / count_in_range
											);
										}
									}
								}
							}
						}
					}
				}

				for(unsigned int j = 0; j < gcount; j++) { // 预加载字形
					total_x_advance += glyph_pos[j].x_advance / (text::fixed_to_fp * state.user_settings.ui_scale);
					//make_glyph(uint16_t(glyph_info[j].codepoint));
					txt.glyph_info.emplace_back(glyph_info[j], glyph_pos[j]);
				}
			}
		} else {
			// 获取 run 数量失败
			std::abort();
		}
	} else {
		// 添加文本失败
		std::abort();
	}

	ubidi_close(para);
}

// 整形文本并生成字形缓存（不含 Bidi 处理）
void font_at_size::remake_bidiless_cache(sys::state& state, font_selection type, stored_glyphs& txt, std::span<uint16_t> source) {
	txt.glyph_info.clear();
	if(source.size() == 0)
		return;

	// 经典位图字体路径：直接按字符构造字形
	if(state.user_settings.use_classic_fonts) {
		for(uint32_t i = 0; i < uint32_t(source.size()); i++) {
			text::stored_glyph glyph;
			glyph.codepoint = source[i];
			glyph.cluster = i;
			txt.glyph_info.push_back(glyph);
		}
		return;
	}

	auto locale = state.font_collection.get_current_locale();

	// 准备 HarfBuzz 特性缓冲区
	hb_feature_t feature_buffer[10];
	auto features = type == font_selection::body_font ? state.world.locale_get_body_font_features(locale)
		: type == font_selection::header_font ? state.world.locale_get_header_font_features(locale)
		: state.world.locale_get_map_font_features(locale);
	for(uint32_t i = 0; i < uint32_t(std::extent_v<decltype(feature_buffer)>) && i < features.size(); ++i) {
		feature_buffer[i].tag = features[i];
		feature_buffer[i].start = 0;
		feature_buffer[i].end = (unsigned int)-1;
		feature_buffer[i].value = 1;
	}
	uint32_t hb_feature_count = std::min(features.size(), uint32_t(std::extent_v<decltype(feature_buffer)>));

	// 使用 harfbuzz 整形
	hb_buffer_clear_contents(hb_buf);
	hb_buffer_add_utf16(hb_buf, source.data(), int32_t(source.size()), 0, int32_t(source.size()));

	hb_buffer_set_direction(hb_buf, state.world.locale_get_native_rtl(locale) ? HB_DIRECTION_RTL : HB_DIRECTION_LTR);
	hb_buffer_set_script(hb_buf, (hb_script_t)state.world.locale_get_hb_script(locale));
	hb_buffer_set_language(hb_buf, state.world.locale_get_resolved_language(locale));

	hb_shape(hb_font_face, hb_buf, feature_buffer, hb_feature_count);

	uint32_t gcount = 0;
	hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &gcount);
	hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &gcount);

	for(unsigned int j = 0; j < gcount; j++) { // 预加载字形
		//make_glyph(uint16_t(glyph_info[j].codepoint));
		txt.glyph_info.emplace_back(glyph_info[j], glyph_pos[j]);
	}

	// 若为 RTL 文本，反转字形顺序以匹配视觉顺序
	if(state.world.locale_get_native_rtl(locale)) {
		std::reverse(txt.glyph_info.begin(), txt.glyph_info.end());
	}
}

// 仅用于地图文本：整形并缓存地图文本字形
void map_font::remake_map_cache(sys::state& state, stored_glyphs& txt, std::string const& s) {
	txt.glyph_info.clear();
	if(s.length() == 0)
		return;

	cache_mtx.lock();
	auto locale = state.font_collection.get_current_locale();
	if(state.world.locale_get_native_rtl(locale) == false) {
		// LTR 路径：直接以 UTF-8 输入进行整形
		hb_buffer_clear_contents(hb_buf);
		hb_buffer_add_utf8(hb_buf, s.c_str(), int(s.length()), 0, int(s.length()));

		hb_buffer_set_direction(hb_buf, HB_DIRECTION_LTR);
		hb_buffer_set_script(hb_buf, (hb_script_t)state.world.locale_get_hb_script(locale));
		hb_buffer_set_language(hb_buf, state.world.locale_get_resolved_language(locale));

		hb_feature_t feature_buffer[10];
		auto features = state.world.locale_get_map_font_features(locale);
		for(uint32_t i = 0; i < uint32_t(std::extent_v<decltype(feature_buffer)>) && i < features.size(); ++i) {
			feature_buffer[i].tag = features[i];
			feature_buffer[i].start = 0;
			feature_buffer[i].end = (unsigned int)-1;
			feature_buffer[i].value = 1;
		}
		uint32_t hb_feature_count = std::min(features.size(), uint32_t(std::extent_v<decltype(feature_buffer)>));
		hb_shape(hb_font_face, hb_buf, feature_buffer, hb_feature_count);

		uint32_t gcount = 0;
		hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &gcount);
		hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &gcount);
		for(unsigned int i = 0; i < gcount; i++) { // 预加载字形
			txt.glyph_info.emplace_back(glyph_info[i], glyph_pos[i]);
		}
	} else {
		// RTL 路径：先将 UTF-8 转为 UTF-16，再用 Bidi 算法分段整形
		std::vector<uint16_t> temp_text;
		std::vector<uint16_t> to_base_char;

		auto start = s.c_str();
		auto end = start + s.length();
		int32_t base_index = 0;
		while(start + base_index < end) {
			auto c = text::codepoint_from_utf8(start + base_index, end);
			if(!requires_surrogate_pair(c)) {
				temp_text.push_back(char16_t(c));
				to_base_char.push_back(uint16_t(base_index));
			} else {
				auto p = make_surrogate_pair(c);
				temp_text.push_back(char16_t(p.high));
				temp_text.push_back(char16_t(p.low));
				to_base_char.push_back(uint16_t(base_index));
				to_base_char.push_back(uint16_t(base_index));
			}
			base_index += int32_t(size_from_utf8(start + base_index, end));
		}

		UErrorCode errorCode = U_ZERO_ERROR;
		UBiDi* para = ubidi_open();
		//para = ubidi_openSized(int32_t(temp_text.size()), 64, pErrorCode);
		if(!para)
			std::abort();

		hb_feature_t feature_buffer[10];
		auto features = state.world.locale_get_map_font_features(locale);
		for(uint32_t i = 0; i < uint32_t(std::extent_v<decltype(feature_buffer)>) && i < features.size(); ++i) {
			feature_buffer[i].tag = features[i];
			feature_buffer[i].start = 0;
			feature_buffer[i].end = (unsigned int)-1;
			feature_buffer[i].value = 1;
		}
		uint32_t hb_feature_count = std::min(features.size(), uint32_t(std::extent_v<decltype(feature_buffer)>));

		ubidi_setPara(para, (UChar const*)temp_text.data(), int32_t(temp_text.size()), 1, nullptr, &errorCode);

		if(U_SUCCESS(errorCode)) {
			auto runcount = ubidi_countRuns(para, &errorCode);
			if(U_SUCCESS(errorCode)) {
				for(int32_t i = 0; i < runcount; ++i) {
					int32_t logical_start = 0;
					int32_t length = 0;
					auto direction = ubidi_getVisualRun(para, i, &logical_start, &length);

					// 使用 harfbuzz 对当前 run 进行整形
					hb_buffer_clear_contents(hb_buf);
					hb_buffer_add_utf16(hb_buf, temp_text.data(), int32_t(temp_text.size()), logical_start, length);

					hb_buffer_set_direction(hb_buf, direction == UBIDI_RTL ? HB_DIRECTION_RTL : HB_DIRECTION_LTR);
					hb_buffer_set_script(hb_buf, (hb_script_t)state.world.locale_get_hb_script(locale));
					hb_buffer_set_language(hb_buf, state.world.locale_get_resolved_language(locale));

					hb_shape(hb_font_face, hb_buf, feature_buffer, hb_feature_count);

					uint32_t gcount = 0;
					hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &gcount);
					hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &gcount);

					for(unsigned int j = 0; j < gcount; j++) { // 预加载字形
						txt.glyph_info.emplace_back(glyph_info[j], glyph_pos[j]);
						txt.glyph_info.back().cluster = to_base_char[glyph_info[j].cluster];
					}
				}
			} else {
				// 获取 run 数量失败
				std::abort();
			}
		} else {
			// 添加文本失败
			std::abort();
		}

		ubidi_close(para);
	}
	cache_mtx.unlock();
}

// 计算指定范围文本的宽度（按 UI 缩放调整）
float font_at_size::text_extent(sys::state& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count) {
	float x_total = 0.0f;
	for(uint32_t i = starting_offset; i < starting_offset + count; i++) {
		hb_codepoint_t glyphid = txt.glyph_info[i].codepoint;
		float x_advance = float(txt.glyph_info[i].x_advance) / text::fixed_to_fp;
		x_total += x_advance;
	}
	return x_total / state.user_settings.ui_scale;
}

// 无状态计算文本宽度：不依赖 state，自行整形并预加载字形
float font_at_size::stateless_text_extent(float ui_scale, char const* codepoints, uint32_t count) {
	hb_buffer_clear_contents(hb_buf);
	hb_buffer_add_utf8(hb_buf, codepoints, int(count), 0, int(count));
	hb_buffer_guess_segment_properties(hb_buf);
	hb_shape(hb_font_face, hb_buf, NULL, 0);
	unsigned int glyph_count = 0;
	hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &glyph_count);
	hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &glyph_count);
	float x = 0.0f;
	for(unsigned int i = 0; i < glyph_count; i++) {
		make_glyph((uint16_t)glyph_info[i].codepoint, 0);
		hb_codepoint_t glyphid = glyph_info[i].codepoint;
		auto& gso = glyph_positions[glyphid << 2];
		float x_advance = float(glyph_pos[i].x_advance) / text::fixed_to_fp;
		x += x_advance;
	}

	return x / ui_scale;
}

// 根据目标行高生成字体句柄（区分正文/标题，并对经典字体走默认句柄）
uint16_t make_font_id(sys::state& state, bool as_header, float target_line_size) {
	if(state.user_settings.use_classic_fonts) {
		if(as_header) {
			return state.ui_state.default_header_font;
		} else {
			return state.ui_state.default_body_font;
		}
	}
	int32_t calculated_size = int32_t(target_line_size);
	if(as_header) {
		//auto jvalue = state.font_collection.get_font(state, font_selection::header_font).line_height(1);
		//calculated_size = int32_t((target_line_size / jvalue) * 4.0f / 3.0f);
		return uint16_t((1 << 7) | (0x3F & calculated_size));
	} else {
		//auto jvalue = state.font_collection.get_font(state, font_selection::body_font).line_height(1);
		//calculated_size = int32_t((target_line_size / jvalue) * 6.0f / 5.0f);
		return uint16_t((0 << 7) | (0x3F & calculated_size));
	}
}

// 加载地图字体文件，初始化 FreeType 字体面与 HarfBuzz 对象，并释放旧资源
void map_font::load_font(FT_Library& ft_library, char const* file_data_in, uint32_t file_size) {
	buffer_glyphs.clear();
	buffer_curves.clear();
	glyphs.clear();
	if(face)
		FT_Done_Face(face);

	file_data = std::unique_ptr<FT_Byte[]>(new FT_Byte[file_size]);

	memcpy(file_data.get(), file_data_in, file_size);
	FT_New_Memory_Face(ft_library, file_data.get(), file_size, 0, &face);
	FT_Select_Charmap(face, FT_ENCODING_UNICODE);

	FT_Set_Pixel_Sizes(face, dr_size, dr_size);
	hb_font_face = hb_ft_font_create(face, nullptr);
	hb_buf = hb_buffer_create();


	if(glyph_texture) {
		glDeleteTextures(1, &glyph_texture);
		glyph_texture = 0;
	}
	if(curve_texture)
		glDeleteTextures(1, &curve_texture);
	if(glyph_buffer)
		glDeleteBuffers(1, &glyph_buffer);
	if(curve_buffer)
		glDeleteBuffers(1, &curve_buffer);
}
// 地图字体析构函数：释放 GPU 资源与 HarfBuzz 对象
map_font::~map_font() {
	if(glyph_texture)
		glDeleteTextures(1, &glyph_texture);
	if(curve_texture)
		glDeleteTextures(1, &curve_texture);

	if(glyph_buffer)
		glDeleteBuffers(1, &glyph_buffer);
	if(curve_buffer)
		glDeleteBuffers(1, &curve_buffer);

	if(hb_font_face)
		hb_font_destroy(hb_font_face);
	if(hb_buf)
		hb_buffer_destroy(hb_buf);

	//FT_Done_Face(face);
}
// 创建地图字体所需的 GPU 纹理与缓冲区对象
void map_font::ready_textures() {
	if(!glyph_texture) {
		glGenTextures(1, &glyph_texture);
		glGenTextures(1, &curve_texture);
		glGenBuffers(1, &glyph_buffer);
		glGenBuffers(1, &curve_buffer);

		glBindBuffer(GL_TEXTURE_BUFFER, glyph_buffer);
		glBindBuffer(GL_TEXTURE_BUFFER, curve_buffer);

		glBindTexture(GL_TEXTURE_BUFFER, glyph_texture);
		glTexBuffer(GL_TEXTURE_BUFFER, GL_RG32I, glyph_buffer);
		glBindTexture(GL_TEXTURE_BUFFER, 0);

		glBindTexture(GL_TEXTURE_BUFFER, curve_texture);
		glTexBuffer(GL_TEXTURE_BUFFER, GL_RG32F, curve_buffer);
		glBindTexture(GL_TEXTURE_BUFFER, 0);
	}
}
// 生成并缓存指定字形的贝塞尔曲线数据
void map_font::make_glyph(uint32_t glyph_id) {
	ready_textures();

	if(glyphs.contains(glyph_id))
		return;

	map_font_buffer_glyph temp_buffer_glyph;
	temp_buffer_glyph.start = static_cast<int32_t>(buffer_curves.size());

	FT_Load_Glyph(face, glyph_id, FT_LOAD_NO_BITMAP);

	short start = 0;
	for(int i = 0; i < face->glyph->outline.n_contours; i++) {
		// 注意：face->glyph->outline.contours 中的结束索引是包含在内的
		convert_contour(&face->glyph->outline, start, face->glyph->outline.contours[i]);
		start = face->glyph->outline.contours[i] + 1;
	}

	temp_buffer_glyph.count = static_cast<int32_t>(buffer_curves.size()) - temp_buffer_glyph.start;

	int32_t bufferIndex = static_cast<int32_t>(buffer_glyphs.size());
	buffer_glyphs.push_back(temp_buffer_glyph);

	map_font_glyph glyph;

	glyph.ft_height = face->glyph->metrics.height;
	glyph.ft_width = face->glyph->metrics.width;
	glyph.ft_x_bearing = face->glyph->metrics.horiBearingX;
	glyph.ft_y_bearing = face->glyph->metrics.horiBearingY;

	glyph.bufferIndex = bufferIndex;
	glyph.curveCount = temp_buffer_glyph.count;
	glyphs[glyph_id] = glyph;

	upload_buffers();
}
// 计算指定范围地图文本的宽度
float map_font::text_extent(sys::state const& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count) {
	float x_total = 0.0f;
	for(uint32_t i = starting_offset; i < starting_offset + count; i++) {
		hb_codepoint_t glyphid = txt.glyph_info[i].codepoint;
		float x_advance = float(txt.glyph_info[i].x_advance) / text::fixed_to_fp;
		x_total += x_advance;
	}
	return x_total;
}
// 将字形与曲线上传到 GPU 缓冲区
void map_font::upload_buffers() {
	glBindBuffer(GL_TEXTURE_BUFFER, glyph_buffer);
	glBufferData(GL_TEXTURE_BUFFER, sizeof(map_font_buffer_glyph) * buffer_glyphs.size(), buffer_glyphs.data(), GL_STATIC_DRAW);
	glBindBuffer(GL_TEXTURE_BUFFER, 0);

	glBindBuffer(GL_TEXTURE_BUFFER, curve_buffer);
	glBufferData(GL_TEXTURE_BUFFER, sizeof(map_font_buffer_curve) * buffer_curves.size(), buffer_curves.data(), GL_STATIC_DRAW);
	glBindBuffer(GL_TEXTURE_BUFFER, 0);
}
// 将 FreeType 轮廓转换为贝塞尔曲线并写入 buffer_curves
void map_font::convert_contour(const FT_Outline* outline, int32_t firstIndex, int32_t lastIndex) {
	if(firstIndex == lastIndex) return;

	short dIndex = 1;
	if(outline->flags & FT_OUTLINE_REVERSE_FILL) {
		auto tmpIndex = lastIndex;
		lastIndex = firstIndex;
		firstIndex = tmpIndex;
		dIndex = -1;
	}

	// 将 FreeType 坐标转换为归一化坐标
	auto convert = [](const FT_Vector& v) {
		return glm::vec2(
			(float)v.x / (64.0f * dr_size),
			(float)v.y / (64.0f * dr_size)
		);
	};

	// 计算两点的中点
	auto makeMidpoint = [](const glm::vec2& a, const glm::vec2& b) {
		return 0.5f * (a + b);
		};

	// 构造一条二次贝塞尔曲线记录
	auto makeCurve = [](const glm::vec2& p0, const glm::vec2& p1, const glm::vec2& p2) {
		map_font_buffer_curve result;
		result.x0 = p0.x;
		result.y0 = p0.y;
		result.x1 = p1.x;
		result.y1 = p1.y;
		result.x2 = p2.x;
		result.y2 = p2.y;
		return result;
	};

	// 查找一个位于曲线上的点，并将其从列表中移除
	glm::vec2 first;
	bool firstOnCurve = (outline->tags[firstIndex] & FT_CURVE_TAG_ON);
	if(firstOnCurve) {
		first = convert(outline->points[firstIndex]);
		firstIndex += dIndex;
	} else {
		bool lastOnCurve = (outline->tags[lastIndex] & FT_CURVE_TAG_ON);
		if(lastOnCurve) {
			first = convert(outline->points[lastIndex]);
			lastIndex -= dIndex;
		} else {
			first = makeMidpoint(convert(outline->points[firstIndex]), convert(outline->points[lastIndex]));
			// 这是一个虚拟点，因此无需移除
		}
	}

	glm::vec2 start = first;
	glm::vec2 control = first;
	glm::vec2 previous = first;
	char previousTag = FT_CURVE_TAG_ON;
	for(auto index = firstIndex; index != lastIndex + dIndex; index += dIndex) {
		glm::vec2 current = convert(outline->points[index]);
		char currentTag = FT_CURVE_TAG(outline->tags[index]);
		if(currentTag == FT_CURVE_TAG_CUBIC) {
			// 不做处理，等待更多点
			control = previous;
		} else if(currentTag == FT_CURVE_TAG_ON) {
			if(previousTag == FT_CURVE_TAG_CUBIC) {
				glm::vec2& b0 = start;
				glm::vec2& b1 = control;
				glm::vec2& b2 = previous;
				glm::vec2& b3 = current;

				glm::vec2 c0 = b0 + 0.75f * (b1 - b0);
				glm::vec2 c1 = b3 + 0.75f * (b2 - b3);

				glm::vec2 d = makeMidpoint(c0, c1);

				buffer_curves.push_back(makeCurve(b0, c0, d));
				buffer_curves.push_back(makeCurve(d, c1, b3));
			} else if(previousTag == FT_CURVE_TAG_ON) {
				// 线性段
				buffer_curves.push_back(makeCurve(previous, makeMidpoint(previous, current), current));
			} else {
				// 常规贝塞尔曲线
				buffer_curves.push_back(makeCurve(start, previous, current));
			}
			start = current;
			control = current;
		} else /* currentTag == FT_CURVE_TAG_CONIC */ {
			if(previousTag == FT_CURVE_TAG_ON) {
				// 不做处理，等待第三个点
			} else {
				// 创建虚拟的曲线上的点
				glm::vec2 mid = makeMidpoint(previous, current);
				buffer_curves.push_back(makeCurve(start, previous, mid));
				start = mid;
				control = mid;
			}
		}
		previous = current;
		previousTag = currentTag;
	}

	// 闭合轮廓
	if(previousTag == FT_CURVE_TAG_CUBIC) {
		glm::vec2& b0 = start;
		glm::vec2& b1 = control;
		glm::vec2& b2 = previous;
		glm::vec2& b3 = first;

		glm::vec2 c0 = b0 + 0.75f * (b1 - b0);
		glm::vec2 c1 = b3 + 0.75f * (b2 - b3);

		glm::vec2 d = makeMidpoint(c0, c1);

		buffer_curves.push_back(makeCurve(b0, c0, d));
		buffer_curves.push_back(makeCurve(d, c1, b3));

	} else if(previousTag == FT_CURVE_TAG_ON) {
		// 线性段
		buffer_curves.push_back(makeCurve(previous, makeMidpoint(previous, first), first));
	} else {
		buffer_curves.push_back(makeCurve(start, previous, first));
	}
}

} // namespace text

