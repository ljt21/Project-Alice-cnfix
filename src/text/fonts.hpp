#pragma once

#include "freetype/freetype.h"
#include "freetype/ftglyph.h"
#include "unordered_dense.h"
#include "hb.h"
#include "bmfont.hpp"
#include <span>

namespace sys {
struct state;
}

namespace text {

inline constexpr uint32_t max_texture_layers = 256; // 字形纹理图集的最大层数
inline constexpr int magnification_factor = 4; // 渲染放大倍数（用于地图字体）
inline constexpr int dr_size = 64 * magnification_factor; // dead reckoning 距离变换的网格尺寸

// 字体选择类型：用于区分正文与标题字体
enum class font_selection {
	body_font, // 正文字体
	header_font // 标题字体
};

uint16_t name_into_font_id(sys::state& state, std::string_view text); // 根据字体名称生成字体句柄
int32_t size_from_font_id(uint16_t id); // 从字体句柄中解析出字体尺寸
bool is_black_from_font_id(uint16_t id); // 从字体句柄中判断是否为粗体（black）
font_selection font_index_from_font_id(sys::state& state, uint16_t id); // 从字体句柄中解析出字体选择类型

// 字形在纹理图集中的位置与度量信息
struct glyph_sub_offset {
	uint16_t x = 0; // 在纹理图集中的 x 坐标
	uint16_t y = 0; // 在纹理图集中的 y 坐标
	uint16_t width = 0; // 字形位图宽度
	uint16_t height = 0; // 字形位图高度
	uint16_t tx_sheet = 0; // 所属纹理图层索引
	int16_t bitmap_left = 0; // 字形左边距（位图相对于原点的水平偏移）
	int16_t bitmap_top = 0; // 字形顶边距（位图相对于原点的垂直偏移）
};

class font_manager;

// 字体特性标志
enum class font_feature {
	none, // 无特殊特性
	small_caps // 小型大写字母
};

class font;

// 判断给定码点是否需要使用 UTF-16 代理对表示
inline bool requires_surrogate_pair(uint32_t codepoint) {
	return codepoint >= 0x10000;
}

// UTF-16 代理对（用于表示 U+10000 及以上的码点）
struct surrogate_pair {
	uint16_t high = 0; // 高位代理项（leading surrogate）
	uint16_t low = 0; // 低位代理项（trailing surrogate）
};

// 将一个码点转换为 UTF-16 代理对
inline surrogate_pair make_surrogate_pair(uint32_t val) noexcept {
	uint32_t v = val - 0x10000;
	uint32_t h = ((v >> 10) & 0x03FF) | 0xD800;
	uint32_t l = (v & 0x03FF) | 0xDC00;
	return surrogate_pair{ uint16_t(h), uint16_t(l) };
}

// 扩展字位簇信息：记录文本布局中每个字位簇（grapheme cluster）的位置与状态
struct ex_grapheme_cluster_info {
	uint16_t source_offset = 0; // 该字位簇在源文本中首个码点的索引
	int16_t x_offset = 0; // 渲染后该字位簇在 UI 中的 x 坐标
	int16_t width = 0;  // 渲染后该字位簇在 UI 中的宽度
	int16_t visual_left = -1; // 视觉上左侧相邻字位簇的索引，无则为 -1
	int16_t visual_right = -1; // 视觉上右侧相邻字位簇的索引，无则为 -1

	uint8_t flags = 0; // 状态标志位
	uint8_t line = 0; // 该字位簇所在的行号（从 0 开始）
	uint8_t unit_length = 0; // 该字位簇包含的 UTF-16 码元数量

	constexpr static uint8_t f_is_word_start = 0x01; // 标志：单词起始位置
	constexpr static uint8_t f_is_word_end = 0x02; // 标志：单词结束位置
	constexpr static uint8_t f_has_rtl_directionality = 0x10; // 标志：具有 RTL（从右向左）方向性

	inline bool has_rtl_directionality() { // 是否具有 RTL 方向性
		return (flags & f_has_rtl_directionality) != 0;
	}
	inline bool is_word_start() { // 是否为单词起始位置
		return (flags & f_is_word_start) != 0;
	}
	inline bool is_word_end() { // 是否为单词结束位置
		return (flags & f_is_word_end) != 0;
	}
};

// 存储经 HarfBuzz 整形后的单个字形信息
struct stored_glyph {
	uint32_t codepoint = 0; // 字形索引（glyph id）
	uint32_t cluster = 0; // 所属字位簇在源文本中的索引
	hb_position_t  x_advance = 0; // x 方向的前进量
	hb_position_t  y_advance = 0; // y 方向的前进量
	hb_position_t  x_offset = 0; // x 方向的偏移量
	hb_position_t  y_offset = 0; // y 方向的偏移量

	stored_glyph() noexcept = default;
	// 从 HarfBuzz 的字形信息与位置结构构造
	stored_glyph(hb_glyph_info_t const& gi, hb_glyph_position_t const& gp) {
		codepoint = gi.codepoint;
		cluster = gi.cluster;
		x_advance = gp.x_advance;
		y_advance = gp.y_advance;
		x_offset = gp.x_offset;
		y_offset = gp.y_offset;
	}
};

// 文本布局的详细信息：包含字位簇排布结果与总行数
struct layout_details {
	std::vector<ex_grapheme_cluster_info> grapheme_placement; // 各字位簇的布局信息
	uint8_t total_lines = 0; // 总行数
};

// 已整形并存储的字形序列
struct stored_glyphs {
	std::vector<stored_glyph> glyph_info; // 字形信息列表

	struct no_bidi { }; // 标签类型：表示构造时跳过双向（Bidi）算法处理

	stored_glyphs() = default;
	stored_glyphs(stored_glyphs const& other) noexcept = default;
	stored_glyphs(stored_glyphs&& other) noexcept = default;
	// 从另一组字形中截取一段构造（偏移 + 数量）
	stored_glyphs(stored_glyphs& other, uint32_t offset, uint32_t count);
	// 根据源文本整形生成字形（可选布局信息）
	stored_glyphs(sys::state& state, int32_t size, font_selection type, std::span<uint16_t> s, uint32_t details_offset = 0, layout_details* d = nullptr, uint16_t font_handle = 0);
	// 根据源文本整形生成字形（跳过 Bidi 处理）
	stored_glyphs(sys::state& state, int32_t size, font_selection type, std::span<uint16_t> s, no_bidi);

	//void set_text(sys::state& state, font_selection type, std::string const& s);
	void clear() { // 清空已存储的字形
		glyph_info.clear();
	}
};

// 地图字体类：用于在地图上渲染基于贝塞尔曲线描述的矢量字形
class map_font {
public:
	// 地图字形的度量信息
	struct map_font_glyph {
		int32_t bufferIndex; // 该字形在 buffer_glyphs 中的起始索引
		int32_t curveCount; // 该字形包含的贝塞尔曲线数量
		int32_t ft_x_bearing; // FreeType 水平左边界
		int32_t ft_y_bearing; // FreeType 水平上边界
		int32_t ft_width; // 字形宽度
		int32_t ft_height; // 字形高度
	};

	// 缓冲区中字形的曲线范围描述
	struct map_font_buffer_glyph {
		int32_t start; // 起始曲线索引
		int32_t count; // 该字形所属的贝塞尔曲线数量
	};

	// 二次贝塞尔曲线：由三个控制点（x0,y0）（x1,y1）（x2,y2）定义
	struct map_font_buffer_curve {
		float x0;
		float y0;
		float x1;
		float y1;
		float x2;
		float y2;
	};

	std::vector<map_font_buffer_glyph> buffer_glyphs; // 字形曲线范围列表
	std::vector<map_font_buffer_curve> buffer_curves; // 所有字形的曲线集合
	ankerl::unordered_dense::map<uint32_t, map_font_glyph> glyphs; // 字形索引到度量信息的映射
	std::unique_ptr<FT_Byte[]> file_data; // 字体文件数据

	FT_Face face = nullptr; // FreeType 字体面
	hb_font_t* hb_font_face = nullptr; // HarfBuzz 字体对象
	hb_buffer_t* hb_buf = nullptr; // HarfBuzz 缓冲区

	GLuint glyph_texture = 0; // 字形纹理（缓冲区纹理）
	GLuint curve_texture = 0; // 曲线纹理（缓冲区纹理）
	GLuint glyph_buffer = 0; // 字形缓冲区对象
	GLuint curve_buffer = 0; // 曲线缓冲区对象

	// 字形四边形会按此量扩展，以实现正确的抗锯齿。
	// 该值相对于 emSize。
	float dilation = 0;

	map_font(map_font const&) = delete;
	map_font& operator=(map_font const&) = delete;
	map_font(map_font&& o) noexcept = delete;
	map_font& operator=(map_font&& o) noexcept = delete;

	map_font() = default;
	~map_font();
	void make_glyph(uint32_t glyph_id); // 生成并缓存指定字形的曲线数据
	void upload_buffers(); // 将字形与曲线上传到 GPU 缓冲区
	void convert_contour(const FT_Outline* outline, int32_t firstIndex, int32_t lastIndex); // 将 FreeType 轮廓转换为贝塞尔曲线
	void load_font(FT_Library& ft_library, char const* file_data, uint32_t file_size); // 加载字体文件
	void ready_textures(); // 创建必要的 GPU 纹理与缓冲区
	void remake_map_cache(sys::state& state, stored_glyphs& txt, std::string const& source); // 整形并缓存地图文本字形
	float text_extent(sys::state const& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count); // 计算文本宽度
	std::mutex cache_mtx{}; // 缓存访问互斥锁
};

// 特定尺寸的字体实例：负责字形的栅格化、纹理图集管理与文本整形
class font_at_size {
private:
	float internal_line_height = 0.0f; // 行高（像素）
	float internal_ascender = 0.0f; // 上行高度（基线以上的距离）
	float internal_descender = 0.0f; // 下行高度（基线以下的距离）
	float internal_top_adj = 0.0f; // 顶部调整量（垂直居中补偿）

	uint32_t internal_tx_line_height = 0; // 当前纹理行已用高度
	uint32_t internal_tx_line_xpos = 1024; // 当前纹理行的 x 写入位置
	uint32_t internal_tx_line_ypos = 1024; // 当前纹理行的 y 写入位置
	int32_t px_size = 0; // 像素尺寸
	ankerl::unordered_dense::map<uint32_t, glyph_sub_offset> glyph_positions; // 字形到纹理位置的映射
public:
	FT_Face font_face = nullptr; // FreeType 字体面
	hb_font_t* hb_font_face = nullptr; // HarfBuzz 字体对象
	hb_buffer_t* hb_buf = nullptr; // HarfBuzz 缓冲区


	std::vector<uint32_t> textures; // 字形纹理图集列表

	void make_glyph(uint16_t glyph_in, int32_t subpixel); // 栅格化并缓存指定字形（含子像素偏移）
	glyph_sub_offset& get_glyph(uint16_t glyph_in, int32_t subpixel); // 获取指定字形的纹理位置信息
	void reset(); // 释放所有资源并清空缓存
	void create(FT_Library lib, FT_Byte* file_data, size_t file_size, int32_t real_size); // 初始化指定尺寸的字体实例
	void remake_cache(sys::state& state, font_selection type, stored_glyphs& txt, std::span<uint16_t> source, uint32_t details_offset = 0, layout_details* d = nullptr, uint16_t font_handle = 0); // 整形文本并生成字形缓存（含 Bidi 处理）
	void remake_bidiless_cache(sys::state& state, font_selection type, stored_glyphs& txt, std::span<uint16_t> source); // 整形文本并生成字形缓存（不含 Bidi 处理）
	float line_height(sys::state& state) const; // 获取行高（已按 UI 缩放调整）
	float ascender(sys::state& state) const; // 获取上行高度（已按 UI 缩放调整）
	float descender(sys::state& state) const; // 获取下行高度（已按 UI 缩放调整）
	float top_adjustment(sys::state& state) const; // 获取顶部调整量（已按 UI 缩放调整）
	float text_extent(sys::state& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count); // 计算指定范围文本的宽度
	float stateless_text_extent(float ui_scale, char const* codepoints, uint32_t count); // 无状态计算文本宽度（不依赖 state）

	font_at_size() = default;
	// 移动构造函数
	font_at_size(font_at_size&& o) noexcept : glyph_positions(std::move(o.glyph_positions)), textures(o.textures) {
		font_face = o.font_face;
		o.font_face = nullptr;
		hb_font_face = o.hb_font_face;
		o.hb_font_face = nullptr;
		hb_buf = o.hb_buf;
		o.hb_buf = nullptr;
		internal_line_height = o.internal_line_height;
		internal_ascender = o.internal_ascender;
		internal_descender = o.internal_descender;
		internal_top_adj = o.internal_top_adj;
		internal_tx_line_height = o.internal_tx_line_height;
		internal_tx_line_xpos = o.internal_tx_line_xpos;
		internal_tx_line_ypos = o.internal_tx_line_ypos;
	}
	// 移动赋值运算符
	font_at_size& operator=(font_at_size&& o) noexcept {
		glyph_positions = std::move(o.glyph_positions);
		textures = std::move(o.textures);
		font_face = o.font_face;
		o.font_face = nullptr;
		hb_font_face = o.hb_font_face;
		o.hb_font_face = nullptr;
		hb_buf = o.hb_buf;
		o.hb_buf = nullptr;
		internal_line_height = o.internal_line_height;
		internal_ascender = o.internal_ascender;
		internal_descender = o.internal_descender;
		internal_top_adj = o.internal_top_adj;
		internal_tx_line_height = o.internal_tx_line_height;
		internal_tx_line_xpos = o.internal_tx_line_xpos;
		internal_tx_line_ypos = o.internal_tx_line_ypos;
		return *this;
	}
};

// 字体类：管理单个字体文件及其按尺寸生成的字体实例
class font {
private:
	font(font const&) = delete;
	font& operator=(font const&) = delete;
public:
	font() = default;

	ankerl::unordered_dense::map<int32_t, font_at_size> sized_fonts; // 按尺寸索引的字体实例表
	std::string file_name; // 字体文件名

	std::unique_ptr<FT_Byte[]> file_data; // 字体文件数据
	size_t file_size = 0; // 字体文件大小

	~font();

	bool can_display(char32_t ch_in) const; // 判断该字体是否能显示指定字符
	font_at_size& retrieve_instance(sys::state& state, int32_t base_size); // 获取（或创建）指定尺寸的字体实例（含 UI 缩放）
	font_at_size& retrieve_stateless_instance(FT_Library lib, int32_t base_size); // 获取（或创建）指定尺寸的无状态字体实例
	void reset_instances(); // 重置所有尺寸实例

	friend class font_manager;

	// 移动构造函数
	font(font&& o) noexcept : file_name(std::move(o.file_name)),  file_data(std::move(o.file_data)) {
		file_size = o.file_size;
	}
	// 移动赋值运算符
	font& operator=(font&& o) noexcept {
		file_name = std::move(o.file_name);
		file_data = std::move(o.file_data);
		file_size = o.file_size;
		o.file_size = 0;
		return *this;
	}
};

// 字体管理器：统一管理游戏中的所有字体、本地化设置与文本度量
class font_manager {
public:
	font_manager();
	~font_manager();

	ankerl::unordered_dense::map<uint16_t, dcon::text_key> font_names; // 字体句柄到字体名称的映射
	ankerl::unordered_dense::map<uint16_t, bm_font> bitmap_fonts; // 经典位图字体表
	FT_Library ft_library; // FreeType 库实例
private:
	std::vector<font> font_array; // 已加载的字体列表
	dcon::locale_id current_locale; // 当前本地化区域
public:
	map_font mfont; // 地图字体实例

	std::vector<uint8_t> compiled_ubrk_rules; // 编译后的 ICU 行边界断字规则
	std::vector<uint8_t> compiled_char_ubrk_rules; // 编译后的 ICU 字符边界断字规则
	std::vector<uint8_t> compiled_word_ubrk_rules; // 编译后的 ICU 单词边界断字规则
	bool map_font_is_black = false; // 地图字体是否为粗体

	dcon::locale_id get_current_locale() const { // 获取当前本地化区域
		return current_locale;
	}
	void change_locale(sys::state& state, dcon::locale_id l); // 切换本地化区域，加载对应字体与断字规则
	void reset_fonts(); // 重置所有字体的尺寸实例
	font& get_font(sys::state& state, font_selection s = font_selection::body_font); // 根据字体选择类型获取字体
	void load_font(font& fnt, char const* file_data, uint32_t file_size); // 将字体文件数据载入 font 对象
	float line_height(sys::state& state, uint16_t font_id); // 根据字体句柄获取行高
	float text_extent(sys::state& state, stored_glyphs const& txt, uint32_t starting_offset, uint32_t count, uint16_t font_id); // 根据字体句柄计算文本宽度
};

uint16_t make_font_id(sys::state& state, bool as_header, float target_line_size); // 根据目标行高生成字体句柄

} // namespace text
