## 窗口包装器

窗口包装器定义在命名空间 `window` 中，其少数公共接口声明在文件 `window.hpp` 中。

只有五个函数允许你以你的方式与窗口交互（与窗口的所有其他交互都将由它调用函数来发出某些事件已发生的信号）。这些函数如下：

- `void create_window(sys::state& game_state, creation_parameters const& params);` -- `window::creation_parameters` 除了此函数外 nowhere 使用。它只是一个便利的结构体，以更好地组织参数。这些参数如下：
```
struct creation_parameters {
	int32_t size_x;
	int32_t size_y;
	sys::window_state intitial_state;
	bool borderless_fullscreen;
};
```
`size_x` 和 `size_y` 参数定义窗口未最大化时的默认大小。`intitial_state` 必须是 `sys::window_state::normal`、`sys::window_state::normal` 或 `sys::window_state::minimized` 之一，这将导致窗口以指定状态启动，*除非* `borderless_fullscreen` 为 true。如果 `borderless_fullscreen` 为 true，窗口将以该模式启动，无论其他设置如何。然而，你仍然应该跟踪它们，以防用户退出无边框全屏，这样你就有一个合理的回退方案。
- `void close_window(sys::state& game_state)` -- 调用此函数将关闭主窗口。它只应从 UI 和渲染线程的上下文中调用，因此应该没有同步问题。虽然我们还没有完全实现，但调用此函数也应向游戏状态发送适当的信号以停止运行。
- `void set_borderless_full_screen(sys::state& game_state, bool fullscreen)` -- 也只从 UI 和渲染线程调用，此函数更改窗口是否处于无边框全屏模式。
- `bool is_in_fullscreen(sys::state const& game_state)` -- 返回窗口是否处于全屏模式。我不知道我们是否 ever 需要这个，但有它总是好的。
- `bool is_key_depressed(sys::state const& game_state, sys::virtual_key key)` -- 返回由 `sys::virtual_key` 枚举命名的键当前是否被按住。再说一次，这只会从 UI 和渲染线程调用。
- `void emit_error_message(std::string const& content, bool fatal)` -- 发出错误消息，如果 `fatal` 为 true 则终止。

### 线程策略

当前计划如下：应该有一个单一的线程，既分发来自窗口子系统的消息，又渲染地图和 UI。因此，在 UI 发生更改时，渲染不应正在进行，反之亦然。也不应可能同时发生来自窗口子系统的两个事件。游戏状态本身将在一组完全不相交的线程上更新。虽然 UI 和渲染线程将能够无需阻塞地从游戏状态读取数据，但来自 UI 的任何更改游戏状态的命令都必须以某种形式放入无锁队列中或通过其他安全机制发出信号。这种设置的关键优势是它使编写 UI 变得更加容易，因为它允许将 UI 编写得好像是在单线程程序中一样。

### 系统状态头文件

`system_state.hpp` 定义了游戏的主要对象，它最终将本质上是游戏中发生的一切的仓库。对它的引用将在 UI 中几乎无处不在，允许 UI 命令轻松完成从读取游戏状态到更改音乐的各种事情。它持有一些代表窗口子系统可见状态的数据，任何实现都需要根据需要更新这些数据。具体来说，它持有：
- `int32_t x_size` -- 窗口当前的水平像素大小
- `int32_t y_size` -- 窗口当前的垂直像素大小
- `int32_t mouse_x_position` -- 鼠标上次在窗口客户区内出现的先前 x 位置，以像素为单位。
- `int32_t mouse_y_position` -- 鼠标上次在窗口客户区内出现的先前 y 位置，以像素为单位。
它还包含布尔值
`bool in_edit_control`，表示一个期望字符输入的控件是否拥有焦点。你应该只在它为 true 时引发 `on_text` 事件（见下文）。

### UI 事件

`state` 对象也是许多事件函数的所在地，窗口子系统预计会引发这些事件。（这些事件的实现位于 `system_state.cpp` 中，代表对所有平台通用的 UI 处理逻辑；没有它们的平台相关版本。）

这些事件中的许多都以 `sys::key_modifiers` 枚举作为参数。此枚举报告事件发生时 `alt`、`ctrl` 和 `shift` 键的状态。

首先我们有鼠标消息：
- `void on_rbutton_down(int32_t x, int32_t y, key_modifiers mod)`
- `void on_lbutton_down(int32_t x, int32_t y, key_modifiers mod)`
- `void on_rbutton_up(int32_t x, int32_t y, key_modifiers mod)`
- `void on_lbutton_up(int32_t x, int32_t y, key_modifiers mod)`
- `void on_mouse_move(int32_t x, int32_t y, key_modifiers mod)`
- `void on_mouse_drag(int32_t x, int32_t y, key_modifiers mod)`
- `void on_mouse_wheel(int32_t x, int32_t y, key_modifiers mod, float amount)`
这些函数中的每一个还接收事件发生时鼠标的当前 x 和 y 位置。**注意** `state` 对象中存储的鼠标位置不应在这些函数返回之前更新，这允许在必要时检查鼠标的先前位置。当鼠标移动且左键按住时，应产生 `mouse_drag`。此消息应*另外*产生 `on_mouse_move` 消息，并应在它之后引发。最后，`amount` 参数中的每个 `1.0f` 应大约对应鼠标滚轮的"一次点击"。我不知道正方向应该是什么。如果你在你的实现中注意到它朝"错误"的方向走，只需翻转符号。我也会这样做，希望这能使我们达成一致。

调整大小消息：
- `void on_resize(int32_t x, int32_t y, window_state win_state)` -- 在窗口大小更改时调用。与鼠标事件一样，在消息返回后更新存储的窗口大小，以防接收方需要与旧大小进行比较。此事件还发出窗口从最大化、正常或最小化之一更改为另一个状态的信号。`win_state` 包含窗口将要转换到的状态（或如果它只是被调整大小则保持的状态）。你应在引发此消息之前自动调整 OpenGL 视口，因为平台无关的代码部分中没有进行视口大小管理。

键盘消息：
- `void on_key_down(virtual_key keycode, key_modifiers mod)` -- 在键首次被按下时引发（如果你的操作系统发送自动重复消息，不应传递这些消息）。此消息为所有键发送，即使是系统键如 `alt`，但仍然传递一个 `key_modifiers` 枚举来跟踪系统键状态的整体情况。现在，关于那个 `keycode`。虽然这是 `system_state.hpp` 文件中定义的枚举，但它的值与标准虚拟键映射一致，这让我的生活变得非常轻松。显然，在需要编写一个函数将这些映射回 Linux 使用的任何虚拟键系统时会有些麻烦（我们需要一个 enum -> Linux-native 函数，以便我们也能以平台无关的方式询问哪个键被按住）。既然我做出了这个选择，那么我写这两个烦人的函数也是公平的。所以我只要求你编写必要的存根函数，然后给我指出所有值的必要 Linux 文档，其余由我来完成。
` void on_key_up(virtual_key keycode, key_modifiers mod)` -- 在键停止被按住时引发（这里没有重复的危险）。
- `void on_text(char32_t c)` -- 此事件只应在 `in_edit_control` 设置时引发。即使你正在发送这些消息，`on_key_down` 和 `on_key_up` 事件仍应继续引发。参数 `c` 应是一个 win1250 代码页值，这需要从你的系统通常传达文本输入的方式进行一些转换（你可以退回到仅发送 ASCII 输入作为简单的初稿）。做出这个选择有两个原因。第一：通过将此文本保持与游戏中其余文本相同的代码页，它允许使用单一的渲染路径，并使字符串比较变得容易。第二：由于它对 Windows 和 Linux 都不是原生的，它充当两个实现都可以瞄准的共同标准。如果没有适当的 win1250 代码页值，则不应发送任何消息。

`render` 消息：
- `void render()` -- 是窗口子系统需要调用的消息函数中的最后一个。它不完全是一个"消息"，但它需要与消息一起安排在同一个线程上，因此窗口子系统应在消息之间适当的时候调用 `render`。它还期望执行 Linux 等效于 `SwapBuffers` 的操作（即等待垂直同步并发送要渲染的帧 -- 等待部分很重要，因为我们不想发送比显示器能渲染的更多的帧，因为那只是浪费本可以更好地用在别处的 CPU 资源）。

### 与 OpenGL 的交互

OpenGL 子系统还有很多工作要做，但窗口子系统除了更新视口（如上所述）外，还负责两件简单的事情。`opengl_wrapper` 平台实现文件需要定义 `void create_opengl_context(sys::state& state)` 和 `void shutdown_opengl(sys::state& state)`。`create_opengl_context` 应创建 OpenGL 上下文，将其附加到窗口，并做任何其他平台特定的设置工作。同样，`shutdown_opengl` 应做任何平台特定的拆解 OpenGL 所需的工作。

窗口系统负责在适当的时候调用 `intialize_opengl`（**注意** 与 `create_opengl_context` 不是一回事）。此函数调用平台特定的 `create_opengl_context` 函数，然后执行我们想要的任何平台无关的 OpenGL 初始化。窗口子系统还负责在窗口关闭时调用 `shutdown_opengl`。

### 实现细节：`window::window_data_impl` 

`sys::state` 对象包含一个持有 `window::window_data_impl` 的 `unique_ptr`。此 `class` 的内容可以根据你的意愿定义，以保存平台相关代码用于管理窗口的任何信息。你有责任在你的 `create_window` 实现中创建并存储此 `unique_ptr` 的实例。
