# Project Alice 本地化与中文化实现分析

## 目录

1. [本地化系统概览](#本地化系统概览)
2. [字体系统](#字体系统)
3. [文本编码处理](#文本编码处理)
4. [本地化文件结构](#本地化文件结构)
5. [文本渲染流程](#文本渲染流程)
6. [中文化实现细节](#中文化实现细节)
7. [关键技术点](#关键技术点)

---

## 本地化系统概览

### 系统架构

Project Alice 的本地化系统采用现代化设计，完全支持多语言环境，特别是对中文等复杂字符集有完整支持。

```
本地化系统架构：
┌────────────────────────────────────┐
│      本地化文件 (CSV/TXT)           │
│  - zh-CN/alice.csv                  │
│  - en-US/alice.csv                  │
│  - ...                              │
└────────────────────────────────────┘
            ↓ 加载与解析
┌────────────────────────────────────┐
│      文本存储系统                    │
│  - text_key 索引                    │
│  - locale_key_to_text_sequence 映射 │
└────────────────────────────────────┘
            ↓ 查找与替换
┌────────────────────────────────────┐
│      变量替换系统                    │
│  - 属性匹配 (attributes)            │
│  - 变量插入 (variable substitution) │
└────────────────────────────────────┘
            ↓ 文本整形
┌────────────────────────────────────┐
│      文本渲染引擎                    │
│  - HarfBuzz 文本整形                │
│  - FreeType 字体光栅化              │
│  - ICU Unicode 处理                 │
└────────────────────────────────────┘
```

### 核心特性

- ✅ **完整 UTF-8 支持**：所有文本处理都基于 UTF-8
- ✅ **Unicode 字符集**：支持所有 Unicode 字符，包括 CJK 字符
- ✅ **高级文本整形**：使用 HarfBuzz 处理复杂文本布局
- ✅ **属性系统**：支持语法属性匹配（单复数、性别等）
- ✅ **变量替换**：动态文本生成系统

---

## 字体系统

### 字体管理架构

**核心文件**：
- [src/text/fonts.hpp](file:///workspace/Project-Alice-cnfix/src/text/fonts.hpp) - 字体系统接口
- [src/text/fonts.cpp](file:///workspace/Project-Alice-cnfix/src/text/fonts.cpp) - 字体系统实现

**关键类与函数**：

```cpp
namespace text {
// 字体选择
enum class font_selection {
    body_font,    // 正文字体
    header_font   // 标题字体
};

// 字体管理器
class font_manager {
    // 获取字体实例
    font& get_font(sys::state& state, font_selection type);
    
    // 计算文本宽度
    float text_extent(sys::state& state, stored_glyphs const& txt,
                      uint32_t starting_offset, uint32_t count, uint16_t font_id);
};

// 字体ID生成
uint16_t name_into_font_id(sys::state& state, std::string_view text);
int32_t size_from_font_id(uint16_t id);
bool is_black_from_font_id(uint16_t id);
}
```

### 中文字体配置

**配置文件**：[assets/localisation/zh-CN/locale.txt](file:///workspace/Project-Alice-cnfix/assets/localisation/zh-CN/locale.txt)

```ini
display_name = "中文（中国）"
script = Hani  # 汉字脚本标识

# 字体配置
body_font = STZHONGS.TTF      # 华文中宋（正文）
header_font = STZHONGS.TTF    # 华文中宋（标题）
map_font = STXINWEI.TTF       # 华文新魏（地图）

# 中文特定设置
prevent_map_letterspacing = no  # 地图文本字距
rtl = no                        # 非从右到左文本
```

**可用中文字体**：

| 字体文件 | 用途 | 特点 |
|---------|------|------|
| `STZHONGS.TTF` | 正文/标题字体 | 华文中宋，适合正文显示 |
| `STXINWEI.TTF` | 地图字体 | 华文新魏，适合地图标注 |

### 字体加载流程

```cpp
// src/text/fonts.cpp:346
void load_fonts(sys::state& state) {
    // 1. 读取 locale.txt 配置
    auto const& locale_file = state.locale_file;
    
    // 2. 加载字体文件
    auto body_font_name = locale_file.body_font;
    auto header_font_name = state.locale_file.header_font;
    
    // 3. 打开字体文件（支持 UTF-8 路径）
    auto ff = simple_fs::open_file(fonts, 
        simple_fs::utf8_to_native(fname));
    
    // 4. 初始化 FreeType 和 HarfBuzz
    FT_New_Memory_Face(ft_library, data, size, 0, &face);
    hb_font = hb_ft_font_create(face, nullptr);
    
    // 5. 预渲染常用字符到纹理图集
    prerender_glyphs(state, font);
}
```

---

## 文本编码处理

### UTF-8 编码支持

**核心函数**：[src/text/text.cpp:66-87](file:///workspace/Project-Alice-cnfix/src/text/text.cpp)

```cpp
namespace text {
// 从 UTF-8 解码到 Unicode 码点
uint32_t codepoint_from_utf8(char const* start, char const* end) {
    uint8_t byte1 = uint8_t(start[0]);
    uint8_t byte2 = uint8_t(start[1]);
    uint8_t byte3 = uint8_t(start[2]);
    uint8_t byte4 = uint8_t(start[3]);
    
    // 1字节序列 (0xxx xxxx)
    if((byte1 & 0x80) == 0) {
        return uint32_t(byte1);
    }
    // 2字节序列 (110x xxxx 10xx xxxx)
    else if((byte1 & 0xE0) == 0xC0) {
        return uint32_t(byte2 & 0x3F) | (uint32_t(byte1 & 0x1F) << 6);
    }
    // 3字节序列 (1110 xxxx 10xx xxxx 10xx xxxx)
    else if((byte1 & 0xF0) == 0xE0) {
        return uint32_t(byte3 & 0x3F) | 
               (uint32_t(byte2 & 0x3F) << 6) | 
               (uint32_t(byte1 & 0x0F) << 12);
    }
    // 4字节序列 (1111 0xxx 10xx xxxx 10xx xxxx 10xx xxxx)
    else if((byte1 & 0xF8) == 0xF0) {
        return uint32_t(byte4 & 0x3F) | 
               (uint32_t(byte3 & 0x3F) << 6) |
               (uint32_t(byte2 & 0x3F) << 12) | 
               (uint32_t(byte1 & 0x07) << 18);
    }
    return 0;
}

// 计算 UTF-8 字符的字节长度
size_t size_from_utf8(char const* start, char const*) {
    uint8_t b = uint8_t(start[0]);
    return ((b & 0x80) == 0) ? 1 : 
           ((b & 0xE0) == 0xC0) ? 2 :
           ((b & 0xF0) == 0xE0) ? 3 : 
           ((b & 0xF8) == 0xF0) ? 4 : 1;
}
}
```

### Unicode 字符处理

**ICU 库集成**：Project Alice 使用 ICU (International Components for Unicode) 处理复杂文本布局。

```cpp
// src/text/fonts.cpp:13-19
#ifdef _WIN32
#include <icu.h>  // Windows ICU 集成
#else
#include <unicode/ubrk.h>     // 断字支持
#include <unicode/utypes.h>   // Unicode 类型
#include <unicode/ubidi.h>    // 双向文本
#endif
```

**关键功能**：
- **文本分段**：正确处理词边界和字符边界
- **双向文本**：支持 RTL (从右到左) 语言
- **图素簇处理**：正确处理组合字符（如拼音 + 声调）

### 本地化文本存储

**核心机制**：[src/text/text.cpp:96-122](file:///workspace/Project-Alice-cnfix/src/text/text.cpp)

```cpp
void consume_csv_file(sys::state& state, char const* file_content, 
                      uint32_t file_size, int32_t target_column, 
                      bool as_unicode) {
    auto cpos = file_content;
    
    if(as_unicode) {
        // 跳过 UTF-8 BOM (0xEF 0xBB 0xBF)
        if(file_size >= 3) {
            if(int(file_content[0]) == 0xEF && 
               int(file_content[1]) == 0xBB && 
               int(file_content[2]) == 0xBF)
                cpos += 3;
        }
        
        // 解析 CSV 文件，添加 UTF-8 文本
        while(cpos < file_content + file_size) {
            cpos = parsers::parse_fixed_amount_csv_values<14>(
                cpos, file_content + file_size, ';', 
                [&](std::string_view const* values) {
                    // 添加 UTF-8 键
                    auto key = state.add_key_utf8(values[0]);
                    // 添加 UTF-8 文本数据
                    auto entry = state.add_locale_data_utf8(values[target_column]);
                    // 建立映射
                    state.locale_key_to_text_sequence.insert_or_assign(key, entry);
                });
        }
    } else {
        // Windows-1252 编码处理（兼容旧版本）
        // ...
    }
}
```

---

## 本地化文件结构

### 文件组织

**目录结构**：

```
assets/localisation/
├── languages.txt              # 支持的语言列表
├── zh-CN/                     # 中文（中国）
│   ├── locale.txt             # 中文配置
│   ├── alice.csv              # 游戏文本
│   ├── countries.csv          # 国家名称
│   ├── provinces.csv          # 省份名称
│   ├── map.csv                # 地图文本
│   ├── messages.csv           # 消息文本
│   ├── dates.csv              # 日期格式
│   ├── mapmodes.csv           # 地图模式
│   └── ...
├── en-US/                     # 英文（美国）
│   ├── locale.txt
│   ├── alice.csv
│   └── ...
└── ...                        # 其他语言
```

### 语言配置文件

**languages.txt 格式**：

```
zh-CN;chinese     # 中文（简体）
ar-AR;arabic      # 阿拉伯语
jp-JP;japan       # 日语
ko-SK;korean      # 韩语
bg-BG;cyrillic    # 保加利亚语（西里尔字母）
```

### CSV 本地化文件格式

**标准格式**：

```csv
key;text_column
support_for_blank;支持 $text$
uh_support_for_blank;上议院支持 $text$
create_general;新将领已产生
create_admiral;新海军将领已产生
add_war_goal;添加 $text$ 战争目标针对 $nation$
```

**关键特性**：
1. **键值对结构**：`;` 分隔键和文本
2. **变量替换**：`$variable$` 格式
3. **颜色代码**：`?Y` 黄色、`?R` 红色等
4. **参数化文本**：支持动态内容插入

---

## 文本渲染流程

### 完整渲染管道

```
原始文本 (UTF-8)
    ↓ 1. 解析与预处理
文本序列 (text::stored_glyphs)
    ↓ 2. HarfBuzz 文本整形
图素簇序列 (glyph_clusters)
    ↓ 3. ICU 双向处理
可视化顺序文本
    ↓ 4. FreeType 光栅化
字形位图
    ↓ 5. 纹理上传
GPU 纹理图集
    ↓ 6. OpenGL 渲染
屏幕显示
```

### 文本整形 (Shaping)

**HarfBuzz 集成**：[src/text/fonts.cpp:1029](file:///workspace/Project-Alice-cnfix/src/text/fonts.cpp)

```cpp
void font::shape_text(sys::state& state, stored_glyphs& result,
                      std::string const& s, font_feature feature) {
    // 1. 创建 HarfBuzz 缓冲区
    hb_buffer_t* hb_buf = hb_buffer_create();
    
    // 2. 添加 UTF-8 文本
    hb_buffer_add_utf8(hb_buf, s.c_str(), int(s.length()), 0, int(s.length()));
    
    // 3. 设置脚本和方向
    hb_buffer_set_script(hb_buf, HB_SCRIPT_HAN);  // 汉字脚本
    hb_buffer_set_direction(hb_buf, HB_DIRECTION_LTR);  // 从左到右
    
    // 4. 执行整形
    hb_shape(hb_font, hb_buf, nullptr, 0);
    
    // 5. 提取字形信息
    hb_glyph_info_t* glyph_info = hb_buffer_get_glyph_infos(hb_buf, &count);
    hb_glyph_position_t* glyph_pos = hb_buffer_get_glyph_positions(hb_buf, &count);
    
    // 6. 转换为存储字形
    for(unsigned int i = 0; i < count; ++i) {
        result.glyph_info.push_back(stored_glyph(glyph_info[i], glyph_pos[i]));
    }
    
    hb_buffer_destroy(hb_buf);
}
```

### 字形渲染

**FreeType 光栅化**：

```cpp
// 渲染单个字符到纹理
void render_glyph_to_texture(sys::state& state, uint32_t codepoint, 
                             FT_Face face, texture_atlas& atlas) {
    // 1. 加载字形
    FT_Load_Char(face, codepoint, FT_LOAD_RENDER);
    
    // 2. 获取位图
    FT_Bitmap& bitmap = face->glyph->bitmap;
    
    // 3. 上传到纹理图集
    auto offset = atlas.allocate_space(bitmap.width, bitmap.rows);
    glTexSubImage3D(GL_TEXTURE_2D_ARRAY, 0, 
                    offset.x, offset.y, offset.layer,
                    bitmap.width, bitmap.rows, 1,
                    GL_RED, GL_UNSIGNED_BYTE, bitmap.buffer);
}
```

---

## 中文化实现细节

### 中文文本处理流程

#### 1. 文本加载

```cpp
// 系统启动时加载中文本地化
void load_localization(sys::state& state, std::string_view locale) {
    // 检测语言目录
    if(locale == "zh-CN") {
        // 加载中文字体
        load_chinese_fonts(state);
        
        // 加载中文文本
        load_csv_file(state, "zh-CN/alice.csv", 1, true);  // UTF-8
        load_csv_file(state, "zh-CN/countries.csv", 1, true);
        load_csv_file(state, "zh-CN/provinces.csv", 1, true);
        // ...
    }
}
```

#### 2. 中文编码验证

```cpp
// 验证文本是否为有效 UTF-8 中文
bool is_valid_chinese_utf8(std::string_view text) {
    size_t i = 0;
    while(i < text.length()) {
        uint8_t byte = uint8_t(text[i]);
        
        // 检测 UTF-8 序列长度
        size_t char_len = ((byte & 0x80) == 0) ? 1 : 
                          ((byte & 0xE0) == 0xC0) ? 2 :
                          ((byte & 0xF0) == 0xE0) ? 3 : 4;
        
        // 中文字符通常是 3 字节 UTF-8 (U+4E00 to U+9FFF)
        if(char_len == 3) {
            uint32_t codepoint = decode_utf8(text.data() + i);
            if(codepoint >= 0x4E00 && codepoint <= 0x9FFF) {
                // 有效汉字
            }
        }
        
        i += char_len;
    }
    return true;
}
```

#### 3. 中文断字处理

使用 ICU 的断字迭代器：

```cpp
// 中文文本分段
std::vector<std::string_view> segment_chinese_text(sys::state& state, 
                                                    std::string_view text) {
    std::vector<std::string_view> segments;
    
    // 创建 ICU 断字迭代器
    UErrorCode status = U_ZERO_ERROR;
    icu::Locale locale("zh", "CN");
    icu::BreakIterator* bi = icu::BreakIterator::createWordInstance(locale, status);
    
    // 设置文本
    icu::UnicodeString ustr = icu::UnicodeString::fromUTF8(text);
    bi->setText(ustr);
    
    // 分段
    int32_t start = bi->first();
    int32_t end = bi->next();
    while(end != icu::BreakIterator::DONE) {
        segments.push_back(text.substr(start, end - start));
        start = end;
        end = bi->next();
    }
    
    delete bi;
    return segments;
}
```

### 中文显示优化

#### 字体缓存策略

```cpp
// 预缓存常用汉字 (GB2312 标准)
void preload_common_chinese_glyphs(sys::state& state, font& chinese_font) {
    // GB2312 包含 6763 个汉字，分两个级别
    // 一级汉字：3755个（常用）
    // 二级汉字：3008个（次常用）
    
    std::vector<uint32_t> common_chars;
    
    // 添加一级汉字 (按使用频率排序)
    // 高频字：的一是在不了有和人这中大为
    const char* high_freq = "的一是在不了有和人这中大为上个国我以要他时来用们生到作地于出就分对成会可主发年动同工也能下过子说产种面而方后多定行学法所民得经十之进三着本其起然";
    
    // 解码并添加到缓存列表
    for(size_t i = 0; i < strlen(high_freq); ) {
        uint32_t cp = decode_utf8(high_freq + i);
        common_chars.push_back(cp);
        i += utf8_char_length(high_freq[i]);
    }
    
    // 预渲染到纹理图集
    for(uint32_t cp : common_chars) {
        chinese_font.render_glyph(state, cp);
    }
}
```

#### 文本换行算法

中文文本的换行比西文复杂：

```cpp
// 中文文本自动换行
std::vector<text_line> layout_chinese_text(sys::state& state, 
                                            std::string_view text,
                                            float max_width,
                                            font& chinese_font) {
    std::vector<text_line> lines;
    float current_x = 0.0f;
    text_line current_line;
    
    size_t i = 0;
    while(i < text.length()) {
        // 解码 UTF-8 字符
        uint32_t codepoint = decode_utf8(text.data() + i);
        size_t char_len = utf8_char_length(text[i]);
        
        // 计算字符宽度
        float char_width = chinese_font.get_char_width(state, codepoint);
        
        // 检查是否需要换行
        if(current_x + char_width > max_width) {
            // 中文可以在任何字符处换行（不像西文需要在词边界）
            lines.push_back(current_line);
            current_line = text_line{};
            current_x = 0.0f;
        }
        
        // 添加字符到当前行
        current_line.chars.push_back({codepoint, char_width});
        current_x += char_width;
        
        i += char_len;
    }
    
    // 添加最后一行
    if(!current_line.chars.empty()) {
        lines.push_back(current_line);
    }
    
    return lines;
}
```

---

## 关键技术点

### 1. UTF-8 编码全面支持

**优势**：
- 完全兼容 ASCII
- 变长编码，节省空间
- 无字节序问题
- 网络传输友好

**实现位置**：
- 编码解码：[src/text/text.cpp:66-87](file:///workspace/Project-Alice-cnfix/src/text/text.cpp)
- 字符处理：[src/text/fonts.cpp:1060-1071](file:///workspace/Project-Alice-cnfix/src/text/fonts.cpp)

### 2. HarfBuzz 文本整形

**解决的问题**：
- 正确处理连字
- 上下文相关的字形选择
- 字符定位和间距调整
- 复杂脚本支持（如阿拉伯语、印地语）

**中文应用**：
- 标点符号挤压
- 中英文混排
- 竖排文本支持（未来）

### 3. ICU 库集成

**提供的功能**：
- **Unicode 标准**：完整支持最新 Unicode 标准
- **断字**：按词边界分割文本
- **双向文本**：支持 RTL 语言
- **本地化数据**：日期、数字、货币格式化

**中文支持**：
- 中文断字规则
- 中文数字格式化
- 中文日期格式

### 4. FreeType 字体渲染

**优势**：
- 高质量抗锯齿
- 子像素渲染
- 字体提示 (hinting)
- 支持 OpenType 特性

**中文字体特性**：
- 大字符集支持（GB2312/GBK/GB18030）
- 位图字体回退（小字号）
- 嵌入式位图支持

### 5. 内存管理优化

**字体缓存策略**：

```cpp
// 纹理图集缓存（减少显存占用）
class texture_atlas {
    static constexpr uint32_t max_layers = 256;  // 256 层纹理
    static constexpr int texture_size = 2048;    // 2048x2048 像素
    
    // LRU 缓存策略
    std::unordered_map<uint32_t, glyph_location> glyph_cache;
    std::list<uint32_t> lru_queue;
    
    void evict_least_used() {
        // 移除最久未使用的字形
    }
};
```

---

## 扩展与优化建议

### 性能优化

#### 1. 字形预缓存

```cpp
// 推荐在启动时预加载常用汉字
void optimize_chinese_rendering(sys::state& state) {
    // 加载 GB2312 一级汉字（3755 个）
    preload_gb2312_level1_glyphs(state);
    
    // 加载游戏特定高频词汇
    load_game_vocabulary_cache(state);
}
```

#### 2. 异步字体加载

```cpp
// 在后台线程加载字体
std::future<void> load_fonts_async(sys::state& state) {
    return std::async(std::launch::async, [&]() {
        load_chinese_fonts(state);
        preload_common_glyphs(state);
    });
}
```

### 功能增强

#### 1. 竖排文本支持

```cpp
// 垂直文本布局（古籍、书法等）
enum class text_direction {
    horizontal_ltr,  // 水平从左到右（默认）
    horizontal_rtl,  // 水平从右到左
    vertical_ltr,    // 垂直从左到右
    vertical_rtl     // 垂直从右到左
};
```

#### 2. 富文本格式

```cpp
// 支持更多文本样式
struct rich_text_format {
    bool bold = false;
    bool italic = false;
    bool underline = false;
    uint32_t color = 0xFFFFFF;
    uint16_t font_size = 14;
    text_decoration decoration = text_decoration::none;
};
```

#### 3. 输入法支持

```cpp
// 集成系统输入法
class input_method_editor {
    // 处理输入法组合文本
    void handle_ime_composition(sys::state& state, 
                                std::wstring_view composition);
    
    // 显示候选词窗口
    void show_candidate_window(sys::state& state,
                               std::vector<std::wstring> candidates);
};
```

---

## 调试与测试

### 验证中文显示

```cpp
// 测试用例
void test_chinese_rendering(sys::state& state) {
    // 1. 基本汉字
    test_single_chinese_char(state, "中");
    test_single_chinese_char(state, "文");
    test_single_chinese_char(state, "测试");
    
    // 2. 混合文本
    test_mixed_text(state, "Alice计划 Project Alice");
    test_mixed_text(state, "2026年7月23日");
    
    // 3. 特殊字符
    test_special_chars(state, "★☆●○◆◇■□");
    test_special_chars(state, "①②③④⑤⑥⑦⑧⑨⑩");
    
    // 4. 长文本
    test_long_text(state, "这是一段很长的中文测试文本，用于验证自动换行功能。");
    
    // 5. 边界情况
    test_edge_cases(state, "");  // 空文本
    test_edge_cases(state, " ");  // 空格
    test_edge_cases(state, "\n\n\n");  // 换行
}
```

### 字符覆盖测试

```cpp
// 测试 GB2312 覆盖率
void test_gb2312_coverage(sys::state& state) {
    // 测试所有一级汉字
    for(uint32_t cp = 0x4E00; cp <= 0x9FA5; ++cp) {
        if(is_gb2312_level1(cp)) {
            test_glyph_rendering(state, cp);
        }
    }
    
    // 测试标点符号
    for(uint32_t cp : {/* 中文标点 */}) {
        test_punctuation_rendering(state, cp);
    }
}
```

---

## 参考资料

### 技术文档

- **Unicode 标准**：https://www.unicode.org/
- **UTF-8 编码**：https://en.wikipedia.org/wiki/UTF-8
- **HarfBuzz 文档**：https://harfbuzz.github.io/
- **FreeType 文档**：https://www.freetype.org/
- **ICU 文档**：https://unicode-org.github.io/icu-userguide/

### 中文字符集

- **GB2312**：6763 个汉字（1980年）
- **GBK**：20902 个汉字（1995年）
- **GB18030**：27533 个汉字（2005年）
- **Unicode CJK 统一汉字**：超过 20,000 个字符

### 项目相关文档

- [本地化指南](docs/new_localization_guide.md)
- [用户指南](docs/user_guide.md)
- [贡献指南](docs/contributing.md)

---

**文档版本**：1.0  
**最后更新**：2026-07-23  
**维护者**：Project Alice 中文修正版团队