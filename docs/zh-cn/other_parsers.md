## 其他杂项解析工具

所有这些函数都在 `parsers.hpp` 中声明

### 将文本转换为值

提供以下函数以将文本转换为适当类型的值。它们相当不言自明，只是我注意到它们都希望只接收包含值的文本，而不包括任何周围的空白字符（见下一节）。

```c++
float parse_float(std::string_view content, int32_t line, error_handler& err);
double parse_double(std::string_view content, int32_t line, error_handler& err);
bool parse_bool(std::string_view content, int32_t line, error_handler& err);
int32_t parse_int(std::string_view content, int32_t line, error_handler& err);
uint32_t parse_uint(std::string_view content, int32_t line, error_handler& err);
association_type parse_association_type(std::string_view content, int32_t line, error_handler& err);
```

### 其他工具函数

```c++
std::string_view remove_surrounding_whitespace(std::string_view txt);
```
此函数去除字符串上常见的 ASCII 空白字符形式（` `、`\t`、`\r`、`\n`）（嗯，从技术上讲它只是移动视图，但结果是一样的。

### 从“CSV”中读取文本

Paradox 随 Victoria 2 一起发布了一些伪 CSV 格式的数据。与普通 CSV 文件不同，它可能包含注释（我认为普通 CSV 文件没有注释，对吧？），并且忽略 CSV 对引号的规则。当你打开一个 CSV 文件开始从中解析数据时，你首先要写以下几行：
```c++
if(sz != 0 && cpos[0] == '#')
	cpos = parsers::csv_advance_to_next_line(cpos, file_data + sz);
```
其中 `cpos` 是你当前在文件数据中的位置，`file_data` 是文件的开头（所以当你执行此操作时可能等于 `cpos`），`sz` 是文件的字节数。这将把位置前进到第一个注释之后。你再也不会手动执行此操作，所有后续注释都会为你跳过。

要从 CSV 文件中读取数据，你将使用以下两个函数之一：
```c++
template<size_t count_values, typename T>
char const* parse_fixed_amount_csv_values(char const* start, char const* end, char separator, T&& function)
```
或
```c++
template<typename T>
char const* parse_first_and_nth_csv_values(uint32_t nth, char const* start, char const* end, char separator, T&& function)
```

第一个函数 `parse_fixed_amount_csv_values` 必须显式提供 `count_values` 的整数模板参数，然后它会对文件的每条非注释行调用一次 `function`（可能是你编写的 lambda），并传入一个大小为 `count_values` 的 `std::string_view` 数组，其中包含该 CSV 行中的前 `count_values` 个项目。

第二个函数 `parse_first_and_nth_csv_values` 的工作方式基本相同。它会对文件的每一行调用一次 `function`，并传入两个参数：一个包含该行第一个项目的 `string_view` 和一个包含该行第 `nth` 个项目的 `string_view`。这在读取包含翻译的文件中的文本时很有用，因为对于每个你需要的键，你需要第一个项目，然后某个对应你想要的语言的第 `n` 个项目。

两个函数的 `separator` 参数决定了用于标记 CSV 文件中一个项目结束和下一个项目开始的字符。对我们来说，我相信它总是 `;`。

**注意** 你从 CSV 文件中获取的项目可能包含前导和/或尾随空白字符。如果你想从中获取值，请先使用 `remove_surrounding_whitespace`。

### 解析 definitions lua-like 文件

我本想正确定义一些函数来处理这个，但由于它是一个我们只会解析一次的文件，而且没有任何其他地方可以让此类函数发挥作用，我计划简单地做一些特别处理。如果你真的想知道我将如何解析该文件，请告诉我。
