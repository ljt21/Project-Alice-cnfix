## 文件系统包装器

文件系统包装器包含在命名空间 `simple_fs` 中。包含 `simple_fs.hpp` 即可使用。

### 一些背景

虽然 C++ 自带了一些文件系统例程，但我们需要模仿维多利亚 2 的行为，以便正确加载其模组。维多利亚 2 使用了 [PhysicsFs](https://icculus.org/physfs/)，我们知道这一点是因为[一位开发者告诉了我们](https://mropert.github.io/2020/07/26/threading_with_physfs/)。那为什么不直接使用 PhysicsFS 呢。嗯，有两个原因。一是它是一个额外的依赖，而每个依赖都会让生活变得稍微困难一点。更重要的是，游戏实际上似乎只使用了它的很少一部分功能。就我们而言，文件系统的工作方式如下：我们在加载模组时添加一系列"根"目录（在只有一个模组的游戏中，这将是游戏资源的根目录，然后是模组目录）。然后，每当我们尝试打开一个文件时，我们首先在最近添加的根中查找它（在我们的例子中，是模组目录）。如果它不在那里，那么我们就在前一个根中查找，依此类推。这允许加载顺序中靠后的模组替换加载顺序中靠前的文件。

让我们说清楚：这不是一种很好的模组制作方式，因为这意味着模组不能添加文件或调整文件，只能完全覆盖它们。当我们谈论一个模组替换基础游戏中的某些文件时，这很有效。但它也使得模组之间极难合作，因为它们不能同时对同一个文件进行修改。但是，我们只能接受这一点。

你可能还想知道为什么文件系统包装器被实现为一堆自由函数，尽管为它定义了四个 `class`。原因很简单，这些类中存储的数据需要根据程序编译的目标操作系统而变化（例如，`file` 类既包含 Windows 文件句柄，也包含内存映射句柄）。因此，这些类的实际定义最终藏在了系统相关的头文件中。为了确保无论你在什么操作系统上构建，与文件系统交互的接口都保持不变，它不能被放在那些文件中。因此，它是一堆自由函数。（是的，我也可以从实现继承并在共享头文件中定义成员函数，但这似乎不值得费力。）

### 原生字符串类型

为了不让 Windows 或 Linux 的性能比对方差，任何需要发送到操作系统或从操作系统检索的字符串都以它们的原生格式存储。为了避免所有东西都有两个版本，使用以下定义来操作原生字符串：

`native_string` -- 在 Windows 上是 `std::wstring`，在 Linux 上是 `std::string`
`native_string_view` -- 在 Windows 上是 `std::wstring_view`，在 Linux 上是 `std::string_view`
`native_char` -- 在 Windows 上是 `wchar_t`，在 Linux 上是 `char`
`NATIVE(...)` -- 这是一个宏，你可以在字符串或字符字面量上使用，将它们转换为原生等价物，例如 `NATIVE("text")` 或 `NATIVE('x')`。

### 文件系统对象

类 `file_system` 代表整个文件系统。在程序的生命周期中应该只创建一个这样的对象，并且它不应该被移动或重新定位（其他文件系统对象可能保持指向它的指针）。有六个函数用于操作它：

- `void reset(file_system& fs)` -- 此函数将 `file_system` 重置为其刚构造时的状态。此函数可能永远不需要使用。
- `void add_root(file_system& fs, native_string_view root_path)` -- 此函数向文件系统添加一个新的根。目前我们尚未决定这些是否应该全部相对于当前工作目录，还是应该绝对指定。绝对名称往往更稳健，因为在开发过程中，很容易简单地指定任意路径来查找必要的文件，无论编译后的可执行文件是在哪里创建或从何处启动的。然而，随着我们越来越接近发布，从可执行文件的位置派生这些路径可能会对用户更友好。如果我们通过相对路径来做事，那么也许我们可以通过将调试可执行文件的当前目录设置为正确的位置来让事情对我们来说不那么痛苦。如果我们使用绝对路径，那么我们就必须添加 CMake 技巧来让每个人的构建都创建在他们游戏资源所在的位置。
- `void add_relative_root(file_system& fs, native_string_view root_path)` -- 此函数有一个非常误导性的名称，但我没有更好的主意。它将一个由指定路径附加到 exe 文件位置组成的新根添加到文件系统中。**注意：**如果我们决定使用相对路径，我们将无法使用此函数。
- `directory get_root(file_system const& fs)` -- 返回一个代表我们文件系统根目录的目录对象（但请记住，我们的文件系统是多个重叠的根，而不是文件层次结构中的单个位置）。由于你需要一个目录对象来完成任何其他操作，大多数与文件系统的交互都将从调用此函数开始。
- `native_string extract_state(file_system const& fs)` -- 此函数用于将根集合打包成单个字符串（参见下一个函数了解更多信息）。
- `void restore_state(file_system& fs, native_string_view data)` -- 此函数将文件系统的根集合恢复到调用上一个函数时的状态。这两个函数的目的是能够保存从特定模组集合和基础文件创建场景时根的状态。虽然我们将大部分信息打包进了场景文件，但我们不会试图将任何美术或声音资源塞进去。因此要正确播放场景，我们需要重新创建文件系统的期望状态以找到期望的美术和音乐资源。
- `void add_replace_path_rule(file_system& fs, directory const& dir, native_string_view path)` -- 添加一个 "replace_path" 规则来覆盖目录，这将把对该目录的所有访问重定向到给定路径
- `std::vector<native_string> list_roots(file_system const& fs)` -- 获取此文件系统上注册的根路径列表。
- `bool is_ignored_path(file_system const& fs, native_string_view path)` -- 如果此路径的特定实例应该被忽略，例如如果我们有一个模组覆盖 "map/" 文件夹，那么为了正确执行忽略原版文件的行为，我们忽略所有原版文件并假装它们不存在，但我们不忽略模组文件夹。

### 目录对象

类 `directory` 代表文件系统中的"文件夹"（或者更准确地说，是不同根中文件夹的叠加）。读取文件时，你将通过 `file_system` 对象获取目录，无论是直接还是间接。然而，如后面章节所述，还有一些你可以获取的特殊目录，它们代表用户文件系统中的特殊位置，不受提供给 `file_system` 的根的影响。只有这些特殊目录可用于创建或写入文件。有六个函数用于操作目录：

- `std::vector<unopened_file> list_files(directory const& dir, native_char const* extension)` -- 此函数创建目录 `dir` 内你可以打开的文件列表。如果你向 `extension` 传递一个非空字符串，例如 `NATIVE(".txt")`，你将只获得以该扩展名结尾的可用文件。
- `std::vector<directory> list_subdirectories(directory const& dir)` -- 此函数列出当前目录内所有*不*以 `.` 开头的子目录。
- `std::optional<file> open_file(directory const& dir, native_string_view file_name)` -- 此函数打开具有所需名称的文件，并将其内容放入内存（如果可能）。如果 optional 不包含 `file`，则文件无法打开。不要向文件名添加任何系统相关的路径分隔符；即使你能让它工作，它也不具有可移植性。
- `std::optional<unopened_file> peek_file(directory const& dir, native_string_view file_name)` -- 此函数可用于检查具有给定名称的文件是否存在。如果存在，函数返回时 optional 将包含一个 `unopened_file`。然后你可以使用此 `unopened_file` 以较低开销打开文件。
- `directory open_directory(directory const& dir, native_string_view directory_name)` -- 此函数打开位于当前目录内的目录。即使没有这样的目录，此函数也总是会看起来成功。（如果需要检查哪些子目录可用，请使用 `list_subdirectories`）。一次只尝试打开一个"层"的目录。**不要**传递任何系统相关的路径分隔符。
- `void write_file(directory const& dir, native_string_view file_name, char const* file_data, uint32_t file_size)` -- 此函数只能与上述特殊目录之一一起调用。调用时，将创建一个具有指定名称的文件（如果不存在），然后打开。然后 `file_size` 字节从 `file_data` 写入其中，擦除文件中任何先前的数据。然后文件将关闭，函数返回（这不是一个异步函数）。
- `native_string get_full_name(directory const& dir)` -- 返回目录的名称，以及它相对于文件系统根目录存在的任何父目录的名称，用平台的原生分隔符分隔（Windows 上是 `\`，Linux 上是 `/`）。

### 未打开文件对象

类 `unopened_file` 代表文件系统中存在的一个文件，你可以打开它，但尚未打开。你对此类只能调用两个函数：

- `std::optional<file> open_file(unopened_file const& f)` -- 此函数尝试打开文件并将其内容加载到内存中。如果成功，optional 将持有文件对象，否则它将为空。
- `native_string get_full_name(unopened_file const& f)` -- 获取文件名以及用于到达它的任何目录的名称，以及它所属的特定根。你可以在不亲自读取数据的情况下将其发送给其他函数。
- `native_string get_file_name(unopened_file const& f)` -- 仅获取文件名

### 文件对象

这代表一个已打开的文件，其内容已加载到内存中（在 Windows 上，它是内存映射的）。文件对象的析构函数将关闭文件并将其从内存中卸载，因此确保文件对象的生存期超过其内容的任何使用。你可以对此类调用两个函数：

- `file_contents view_contents(file const& f)` -- 此函数返回 `file_contents` 对象，其中包含一个非空的 `char const*`，称为 data，指向文件内容的第一个字节，以及一个 `uint32_t` 成员 `file_size`，包含文件中的字节数。不要试图修改这些字节。
- `native_string get_full_name(file const& f)` -- 获取文件名以及用于到达它的任何目录的名称，以及它所属的特定根。

**Linux**：如果可用，文件可能是内存映射的（即，来自磁盘文件的虚拟内存映射，由操作系统优化），但如果此功能缺失（或 libc 来自某些"发行版"），文件将改为被分配，并且其全部内容被读取到内存中。前者的行为减少了物理内存使用量，而后者增加了它。

### 特殊目录函数

目前有三个特殊目录函数，主要用于定位保存各种信息的正确位置。

- `directory get_or_create_save_game_directory()` -- 在 Windows 上，这会打开（必要时创建）用户文档文件夹中名为 `Project Alice\saved games` 的文件夹。这是我们将保存游戏的地方。
- `directory get_or_create_scenario_directory()` -- 在 Windows 上，这会打开（必要时创建）用户文档文件夹中名为 `Project Alice\scenarios` 的文件夹。这是我们将存储通过将特定模组集合和基础文件的数据捆绑在一起而创建的场景的地方。
- `directory get_or_create_oos_directory()` -- 在 Windows 上，这会打开（必要时创建）用户文档文件夹中名为 `Project Alice\oos` 的文件夹。这是我们将添加 OOS 转储的地方。
- `directory get_or_create_settings_directory()` -- 在 Windows 上，这会打开（必要时创建）用户本地应用程序设置目录中名为 `Project Alice` 的文件夹。我们将在这里存储全局程序设置。**不要**向此目录写入大文件。特别是，**不要**在这里写入日志。如果我们需要日志的位置，我会为它们创建一个新的特殊目录函数。

### 编码转换函数

有时我们需要从另一个文件中读取目录或文件名。我相信游戏的基础文件使用的是 win1250 代码页，但也许有人可以帮我确认一下。一般来说，我们写入的任何用户可访问的文件都将使用 utf8。因此，为了在这些格式和文件系统的原生格式之间进行转换，提供了以下函数：

- `native_string win1250_to_native(std::string_view data_in)`
- `native_string utf8_to_native(std::string_view data_in)`
- `std::string native_to_utf8(native_string_view data_in)`

即使其中一些函数在 Linux 上实际上可能什么都不做，你仍然需要将对原生字符串的任何转换都包装在它们中以保持可移植性。尽可能保持原生字符串的原生格式。
