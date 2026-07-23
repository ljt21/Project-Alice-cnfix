## 用户界面细节

本文档详细介绍了用户界面代码的内部工作原理。虽然它简要解释了幕后发生的事情，但本文档的主要目的是解释如何为控件编写自定义行为。

### `element_base`：基础的 UI 类型

每个元素，以及 UI 树中的每个节点，都派生自 `element_base` 类（该类在 `gui_element_base.hpp` 文件中声明）。该类管理在 UI 层次结构中向上和向下传递消息和信息。它还可能代表特定的图像或控件类型，并可能实现所需的行为。由于其灵活性，该类内部存在大量复杂性。通常，在实现控件的行为时，大部分内容都无关紧要。如下所述，大多数类型的控件只提供少数几个可覆盖的自定义点，这意味着所有这些幕后复杂性都可以被忽略。

#### 三种类型的函数

因此，让我们通过讨论该类包含的三种函数来直接进入围绕该类的复杂性。第一种，也是数量最少的，可以在任何地方使用（只要在 UI 和渲染线程中）。这些函数包括：

- `set_visible(sys::state& state, bool vis)` ：调用此函数可用于显示或隐藏元素（当你在其他框架中通常会倾向于销毁元素时，在这里我们要么隐藏它，要么将其从其容器中移出到某个其他位置）。此函数还将根据情况触发 `on_visible` 或 `on_hide` 消息，并且在元素变为可见时也会更新该元素（及其任何子元素）（隐藏的元素在正常情况下不会更新）。
- `bool is_visible() const` ：告诉你该元素当前是否可见。请注意，元素在创建时默认是可见的。

而且虽然它们不是函数，但大多数成员变量同样简单易用。

- `element_base* parent` ：是指向 UI 层次结构中包含该元素的元素的指针。除非该元素当前已分离、是根容器或是工具提示，否则此指针不应为 `nullptr`。
- `element_data base_data` ：它最初作为创建该元素的定义的*副本*开始其生命周期。但是，它可以自由更新，元素的当前位置和大小通常在这里找到（而不是定义给出的位置和大小）。

#### 你需要实现的函数

第二组函数是那些设计为自定义点的函数，大多数子类将使用它们来扩展 UI 元素的行为。一般来说，你**不应该**直接调用这些函数，除非你知道自己在做什么：它们被设计为由系统的内部工作调用（希望它们被标记为 `protected` 能够防止大多数此类误用）。这些函数大多返回 `message_result` 类型，该类型有三个值。返回 `message_result::unseen` 将导致系统就特定事件或消息而言像你的元素不存在一样运行。返回 `message_result::seen` 告诉系统事件发生在某个 UI 元素之上或针对某个 UI 元素（因此它可能不应该将其传递给地图），但它会继续寻找处理它的元素。最后，返回 `message_result::consumed` 告诉系统消息或事件已被处理，其他任何东西都不需要看到它。请注意，这并不能保证没有其他元素会看到它；这取决于事件或消息的细节，但通常结果就是这样。

- `virtual message_result test_mouse(sys::state& state, int32_t x, int32_t y, mouse_probe_type type) noexcept` ：这用于查看在该位置触发的鼠标事件是否会找到响应它的 UI 元素。这通常用作查找鼠标光标下哪个可交互元素的部分例程。有几种 `mouse_probe_type` 类型，它们表示首先探测鼠标的原因，即 `click`（执行点击时）、`tooltip`（悬停在元素上以显示其工具提示）和 `scroll`（滚动相关元素时）。
- `virtual message_result on_lbutton_down(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mods) noexcept` ：这是左鼠标点击事件
- `virtual message_result on_rbutton_down(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mods) noexcept` ：这是右鼠标点击事件
- `virtual void on_drag(sys::state& state, int32_t oldx, int32_t oldy, int32_t x, int32_t y, sys::key_modifiers mods) noexcept` ：这条消息很不寻常，因为它不是通过 UI 层次结构大规模向下传递的。相反，它是直接发送到由 `ui_state` 的 `element_base* drag_target` 成员指向的元素（`ui_state` 是 `sys::state` 的成员）。元素通常通过在其对左鼠标按钮事件的响应中设置此指针来请求接收拖动事件。作为参数发送的旧 x 和 y 坐标是鼠标的先前位置。将这些与当前值进行比较将告诉你鼠标拖动了多少。
- `virtual message_result on_key_down(sys::state& state, sys::virtual_key key, sys::key_modifiers mods) noexcept` ：这是按键事件
- `virtual void on_text(sys::state& state, char32_t ch) noexcept` ：这条消息的工作方式类似于 `on_drag`，因为它只发送到 `edit_target`（如果有的话）（当设置了 `edit_target` 时，`on_key_down` 消息将不会被发送）。
- `virtual message_result on_scroll(sys::state& state, int32_t x, int32_t y, float amount, sys::key_modifiers mods) noexcept` ：这是由鼠标滚轮触发的事件。
- `virtual void on_update(sys::state& state) noexcept` ：此事件会发送到 UI 层次结构中的每个可见 UI 元素，以允许它们在游戏状态更新时更新其状态。当 UI 元素在隐藏后变为可见时，也会触发此事件，以便在这些情况下填充其内容。
- `virtual message_result get(sys::state& state, Cyto::Any& payload) noexcept` ：见下文
- `virtual message_result set(sys::state& state, Cyto::Any& payload) noexcept` ：`get` 和 `set` 实际上以相同的方式工作，虽然它们的名称代表了典型用例，但它们也可能具有误导性。当你重载这些函数时，你应该检查 `Any` 负载中是否有你能够响应的类型。如果你找到了这样的类型，你可以从其中读取数据 / 向其中写入数据 / 以其他必要方式做出反应，然后应该返回 `message_result::consumed`。如果它不是你想处理的类型，则返回 `message_result::unseen`。`get` 将信息/命令请求向上发送层次结构：如果元素不响应它，那么该元素的父元素将有机会响应，依此类推。`set` 将消息向下发送层次结构，但与 get 不同的是，较低级别的所有子元素都会看到该消息，无论它们中的任何一个如何处理它。set 的返回值只告诉你层次结构中至少有一个子元素在某个地方响应了它。典型的使用模式，因此也是名称的由来，如下：一个窗口中的子元素显示特定国家的数据，想要更新它显示的值。因此，它将一个空的国家 id 设置到 `Any` 中，并对其父元素调用 `impl_get`（见下文）。这将沿着层次结构向上工作，直到找到一个愿意填充该国家 id 的元素。理想情况下，这将是包含窗口，它会用窗口中所有控件都应从中提取数据的国家来填充它。
- `virtual void render(sys::state& state, int32_t x, int32_t y) noexcept` ：这用于绘制 UI 元素
- `virtual focus_result on_get_focus(sys::state& state) noexcept` ：目前是一个设计占位符——不用担心它
- `virtual void on_lose_focus(sys::state& state) noexcept` ：同上
- `virtual void on_drag_finish(sys::state& state) noexcept` ：当整体拖动事件结束时发送到 `drag_target`。这可能会变得不必要，因此将来可能会被移除。
- `virtual void on_visible(sys::state& state) noexcept` ：当元素从不可见切换为可见时调用。*注意：*只有该特定元素会收到消息，而不是隐式不可见的其子元素。
- `virtual void on_hide(sys::state& state) noexcept` ：同上，但在元素变为隐藏时。
- `virtual void on_create(sys::state& state) noexcept` ：这在元素首次创建后在该元素上调用。此函数与构造函数的区别在于，当此函数运行时，`base_data` 将已被填充，而构造函数在此发生之前运行。
- `virtual tooltip_behavior has_tooltip(sys::state& state) noexcept` ：调用此函数以确定元素想要显示哪种工具提示（如果有的话）。默认情况下，此函数返回 `tooltip_behavior::no_tooltip`，这意味着当鼠标位于元素上方时不会显示工具提示。返回 `tooltip_behavior::tooltip` 意味着此元素有一个单一的、固定的工具提示与之关联。换句话说，返回此值意味着工具提示的内容永远不会改变。这不是很常见的情况，不应该成为你的默认选择。返回 `tooltip_behavior::variable_tooltip` 表示显示的工具提示可能需要在游戏状态更新时更改。这可能是一个很好的默认选择，因为例如可能变为禁用的按钮可能需要能够随着游戏状态的推进更改其工具提示以解释它们为何被禁用。最后，你可以返回 `tooltip_behavior::position_sensitive_tooltip`。如果工具提示的内容可能根据元素中鼠标的确切位置而变化（例如，饼图需要此功能），这将很有用。缺点是工具提示将每帧重新创建，因此请确保你尽可能减少生成此类工具提示所需的工作量。
- `virtual void update_tooltip(sys::state& state, int32_t x, int32_t y, text::columnar_layout& contents) noexcept` ：如果元素报告它希望显示工具提示，则当必须填充该工具提示的内容时，将根据需要调用此函数。你必须使用 `columnar_layout` 参数来生成工具提示的内容，如下文 [文本渲染和布局](#text-rendering-and-layout) 中所述。如果你不向此布局添加任何文本，则工具提示将不会显示（如果工具提示不应在所有条件下都显示，这可能是所需的行为）。`x` 和 `y` 是鼠标在元素局部坐标空间中的当前位置。

#### 你调用的函数

这引出了最后一组函数。这些都是你**不应该**通常覆盖的函数，除非你知道自己在做什么。然而，它们是你想要向 UI 元素发送消息时应该*调用*的函数（因为你通常不应该自己调用上述任何函数）。这些函数大多以 `impl_` 开头，因为我命名很差。如果你已经阅读了上一节，它们也相当不言自明（所以请先阅读上一节）。

- `virtual element_base* impl_probe_mouse(sys::state& state, int32_t x, int32_t y, mouse_probe_type type) noexcept` ：你可以调用此函数来查找所提供坐标下的（最顶层）元素。
- `virtual message_result impl_on_lbutton_down(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mods) noexcept` ：将事件向下分派到层次结构中。
- `virtual message_result impl_on_rbutton_down(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mods) noexcept` ：同上
- `virtual message_result impl_on_key_down(sys::state& state, sys::virtual_key key, sys::key_modifiers mods) noexcept` ：同上
- `virtual message_result impl_on_scroll(sys::state& state, int32_t x, int32_t y, float amount, sys::key_modifiers mods) noexcept` ：同上
- `virtual void impl_on_update(sys::state& state) noexcept` ：同上
- `message_result impl_get(sys::state& state, Cyto::Any& payload) noexcept` ：同上，只是这个对你更有可能真正有用
- `virtual message_result impl_set(sys::state& state, Cyto::Any& payload) noexcept` ：同上
- `virtual void impl_render(sys::state& state, int32_t x, int32_t y) noexcept` ：同上

最后，我们到了用于操作 UI 层次结构的函数。你不应该实现这些函数，但你可以调用它们。还要记住，目标不是删除现有的 UI 元素，而只是移动它们。这意味着你必须记住两件事：首先，当你移除一个子元素时，你会将其作为返回值获取，然后你必须将其存储在某个地方。其次，如果你尝试向不接受子元素的东西添加子元素，那是一个错误，你会崩溃。

- `virtual std::unique_ptr<element_base> remove_child(element_base* child) noexcept`
- `virtual void move_child_to_front(element_base* child) noexcept` ：通过将子元素移到最前面来更改子元素的相对“z 顺序”定位。
- `virtual void move_child_to_back(element_base* child) noexcept` ：同上，但将子元素移到后面
- `virtual void add_child_to_front(std::unique_ptr<element_base> child) noexcept` ：将新子元素添加到集合的最前面
- `virtual void add_child_to_back(std::unique_ptr<element_base> child) noexcept` ：将新子元素添加到集合的后面（这稍微更高效）。
- `virtual element_base* get_child_by_name(sys::state const& state, std::string_view name) noexcept` ：查找具有给定名称的子元素，如果没有这样的子元素，则返回 `nullptr`。
- `virtual element_base* get_child_by_index(sys::state const& state, int32_t index) noexcept` ：检索第 n 个子元素，如果索引超出范围，则返回 `nullptr`。

### 辅助函数

#### 全局元素映射

我已经实现了我称之为全局元素映射的支持，但我们可能最终不会使用它的全部功能。这个映射有两个方面。首先，`ui_state` 对象中有一个 `defs_by_name` 哈希映射。它将元素的名称映射到一个结构，该结构包含其定义的 id，以及可能指向一个特殊创建函数的函数指针（如下所述）。这个映射背后的想法是提供一个单一的地方，通过名称将 UI 元素连接到自定义行为。然而，正如我们将在下面看到的，这可能不是真正必要的。但无论如何：

- `void populate_definitions_map(sys::state& state)` ：此函数填充元素名称到定义 id 的映射。它需要在加载或创建场景数据后调用一次，因为它不会在运行之间保存。如果你要为各种元素名称添加自定义映射，你会将它们添加到此函数的主体中。
- `template<typename T> constexpr ui_hook_fn hook()` ：你可以使用此函数，以及描述元素行为的类，将必要的生成函数添加到映射中，调用方式如 `ui_hook_fn<my_element_type_name>()`。

#### 创建 UI 元素

一般来说，你*永远*不应该使用类似 `make_unique` 的东西来创建 UI 元素。相反，请使用本节中描述的函数之一。

- `std::unique_ptr<element_base> make_element(sys::state& state, std::string_view name)` ：这是最通用的元素创建函数。它使用元素的名称查找定义，并使用你提供给映射的生成函数，或依靠 `make_element_immediate`（见下文）来创建它。
- `std::unique_ptr<element_base> make_element_immediate(sys::state& state, dcon::gui_def_id id);` ：此函数使用 UI 定义将默认行为附加到生成的元素。一般来说，这意味着元素不会执行任何操作，所以它更像是一个占位符。但是，对于某些东西，例如静态图标，这可能就是你需要的全部。
- `template<typename T> std::unique_ptr<T> make_element_by_type(sys::state& state, dcon::gui_def_id id)` ：这创建了一个新的 UI 元素，其行为由类 `T` 定义。请注意，这完全绕过了全局元素映射。
- `template<typename T> std::unique_ptr<element_base> make_element_by_type(sys::state& state, std::string_view name)` ：此函数的作用与上面的函数相同，只是它通过在全局元素映射中查找名称来找到定义的 id。请注意，它仍然忽略你可能存储在映射中的任何生成函数。

#### 通用属性访问

- `xy_pair get_absolute_location(element_base const& node)` ：此函数返回元素在全局 UI 坐标空间中的位置（如果 UI 也在缩放，这可能与屏幕空间坐标不同）。
- `xy_pair child_relative_location(element_base const& parent, element_base const& child)` ：此函数返回子元素在其父元素坐标空间中的位置。请注意，这与子元素的未修改位置不同，因为它的位置可能相对于父坐标空间中除 (0,0) 以外的点存储。
- `int32_t ui_width(sys::state const& state)` ：返回全局 UI 坐标空间的水平维度
- `int32_t ui_height(sys::state const& state)` ：返回全局 UI 坐标空间的垂直维度

### 定义自定义控件行为

你可以通过直接从 `element_base` 派生来实现控件的行为。然而，由于各种类型的控件通常共享行为，有许多更简单的类可供你派生，以最大限度地减少所需的工作量。

#### `image_element_base`

这用作显示某种图形的其他控件的基类，但如果你愿意，也可以直接从它派生。`image_element_base` 包含布尔成员 `disabled`，当设置时会导致它以黑白方式渲染，以及 `interactable`，当鼠标位于其上时，如果某个派生类使其对鼠标不透明，它将使其能够高亮显示。就其本身而言，此元素对鼠标是不可见的。

#### `opaque_element_base`

此类派生自 `image_element_base`，功能与其相同，只是它对鼠标不透明（这意味着，例如，如果你点击它，点击事件将被该元素消耗，而不会被另一个元素看到）。

#### `button_element_base`

此类派生自 `opaque_element_base`，并实现了支持响应快捷键、激活时发出点击声音以及在禁用时不对输入做出反应所需的功能。要制作自己的按钮，请从此类派生并重写其 `virtual void button_action(sys::state& state) noexcept` 成员，以指定按钮激活时你希望它执行的操作。
此类还提供以下成员函数：
- `void set_button_text(sys::state& state, std::string const& new_text)` ：使用此函数会更改按钮正面显示的文本。

#### `multiline_text_element_base`

当你需要“复杂”的文本排版时（见下一节），请使用此类代替 `simple_text_element_base`。此元素具有可以操作和用于创建无限/列布局的 `internal_layout`（通常首选类型是无限布局）。与其更简单的变体不同，它可以着色并且可以托管替换映射，因为它能够支持布局。

#### `multiline_button_element_base`

为按钮定制的 `multiline_text_element_base` 变体。

#### `scrollable_text`

这实现了可以滚动的文本，它使用一个委托 `multiline_text_element_base` 来完成此操作，重要的是要记住 `delegate` 是一个单独的元素（滚动条也是）。为了填充所述 `delegate` 元素内部的布局，请为每个对普通 `multiline_text_element_base` 执行的调用添加一个额外的 `this->delegate` 间接层。

#### `draggable_target`

这有点奇怪，因为 `.gui` 文件中定义窗口的方式。窗口本身没有背景，而是有一些图像元素成员填充其可见空间。因此，为了将该背景元素的鼠标命令重定向到窗口本身，我们有了 `draggable_target`。如果一个元素是 `draggable_target`，任何拖动鼠标操作都将从它向上传播到被定义为可移动的最低级别的窗口。

#### `generic_close_button`

一个预制的按钮，关闭（即使其不可见）它所附加到的父元素。

#### `window_element_base`

这应该是你希望创建的大多数窗口元素的基类。此类自动处理使其定义将其定义为可移动时窗口的可移动性。在定义窗口时，你需要重写 `virtual std::unique_ptr<element_base> make_child(sys::state& state, std::string_view name, dcon::gui_def_id id) noexcept;` 成员。此函数在窗口创建期间为定义为窗口一部分的每个子元素调用一次。如果你想将特定行为附加到子元素（而且你可能应该这样做），那么你将针对 `name` 参数进行匹配，然后使用你选择的元素创建函数调用并返回结果，使用 `state` 和 `id`。这也是设置子元素任何初始属性的地方。如果你返回 `nullptr`，则将使用 `make_element_by_type` 和 `id` 来确定子元素的行为。如果你想添加*额外的*子元素，你需要重写 `on_create` 函数。如果你这样做，请确保在期间某个时刻调用 `window_element_base::on_create`，以添加窗口的普通子元素。

#### `scrollbar`

这是你可能需要的任何滚动条的基类。这里有几件事要记住。首先是滚动条内部将其值存储为整数。如果滚动条定义指定的小于 1 的步长，则该整数将在内部放大，以便每一步为 1。要对滚动条中存储的值的变化做出反应（即用户移动滚动位置），你必须重写
`virtual void on_value_change(sys::state& state, int32_t v) noexcept`，该函数以内部存储的值作为参数被调用。如果你需要以未缩放的格式获取该值，你可以调用 `float scaled_value()` 函数。（我知道，也许不是最好的名字）。如果你想更改滚动条中存储的值（例如，响应更新）。你可以调用 `update_raw_value(sys::state& state, int32_t v)` 直接更新存储的整数，或者你可以调用 `void update_scaled_value(sys::state& state, float v)` 来更新未缩放的值。请注意，调用这些函数*不会*导致你的 `on_value_change` 函数被调用——只有用户进行的更新才会这样做。最后，如果你想更改滚动条的基本定义（即设置其范围），你可以使用 `void change_settings(sys::state& state, mutable_scrollbar_settings const& settings_s)`

`mutable_scrollbar_settings` 定义如下：
```
struct mutable_scrollbar_settings {
	int32_t lower_value = 0;
	int32_t upper_value = 100;
	int32_t lower_limit = 0;
	int32_t upper_limit = 0;
	bool using_limits = false;
};
```
`lower_value` 和 `upper_value` 确定滚动条范围的限制。`upper_limit` 和 `lower_limit` 可用于设置将滑块移动限制在该范围的较小部分的视觉停止点（当前未实现），`using_limits` 控制是否应使用和显示这些额外的停止点。请注意，以这种方式更改滚动条设置可能会导致滑块位置发生更改，如果发生更改，你将收到一条 `on_value_change` 消息。

#### `progress_bar`

此元素继承自 `opaque_element_base`。表示一个进度条，它只会渲染与进度条关联的纹理图像的一部分。使用属性 `progress` 来控制显示的进度（限制在 `0.0` 和 `1.0` 之间，更高的值可能会导致不可预测的行为）。

#### `vertical_progress_bar`

原版 UI 系统支持旋转元素，但出于性能原因，这不予支持，因此此元素用于显示垂直进度条。工作方式与进度条相同，只是它逆时针旋转了 90 度。

#### `line_graph`

折线图被实现为使用相同纹理 throughout 渲染连续的线。折线图中的节点数量约为 32。它支持 fudging（如原始实现中所见），其中 fake values 会与 real ones 一起显示。用户可以在主菜单上打开/关闭此行为。

#### `edit_box_element_base`

表示可以键入内容的元素，默认情况下它处理编辑框的所有常用控件，`<TAB>`、`<Backspace>`、`<Delete>` 和其他命令。它继承自 `simple_text_element_base`，因此文本保存在与上述元素相同的位置。并且可以通过重写 `edit_box_update` 方法并读取包含编辑框全部内容的关联 `std::string_view` 来检索它。

- `virtual void edit_box_tab(sys::state &state, std::string_view s) noexcept` ：当按下 `<TAB>` 时调用（主要用于自动完成）。
- `virtual void edit_box_enter(sys::state &state, std::string_view s) noexcept` ：当按下 `<Enter>` 时调用（用于刷新和解析内容）。
- `virtual void edit_box_update(sys::state &state, std::string_view s) noexcept` ：每当键入新字符、删除字符、发出命令或任何此类组合时调用。
- `virtual void edit_box_up(sys::state &state) noexcept` ：当按下 `<Up Arrow>` 键时调用。
- `virtual void edit_box_down(sys::state &state) noexcept` ：当按下 `<Down Arrow>` 键时调用。
- `virtual void edit_box_esc(sys::state &state) noexcept` ：当按下 `<Escape>` 键时调用。
- `virtual void edit_box_backtick(sys::state &state) noexcept` ：当按下 `<Backtick>` 键时调用。
- `virtual void edit_box_slash(sys::state &state) noexcept` ：当按下 `<Back slash>` 键时调用。
- `virtual void edit_index_position(sys::state &state, int32_t index) noexcept` ：当索引位置被修改时调用；例如，按下了 `<Left Arrow>` 或 `<Right Arrow>`，处理程序使它们在当前索引中前进 -1 或 +1，因此它会调用此函数。

#### `tinted_image_element_base`

`image_element_base` 的一个版本，适合被轻微着色。使用 `color` 成员来设置颜色

#### `tinted_button_element_base`

`button_element_base` 的一个版本，适合被轻微着色。使用 `color` 成员来设置颜色。

### 文本渲染和布局

#### 添加工具提示
要添加工具提示，你需要定义两个函数：
```cpp
tooltip_behavior has_tooltip(sys::state& state) noexcept override {
    return tooltip_behavior::variable_tooltip;
}

void update_tooltip(sys::state& state, int32_t x, int32_t y, text::columnar_layout& contents) noexcept override {
    // 在此处插入你的工具提示代码
}
```
注意：作为初学者，你可能会想向已经存在但没有工具提示的元素添加工具提示，这是一个你必须避免的陷阱，因为它会产生问题，
相反，当你在代码库中发现一个需要工具提示的元素时，请继承该元素类并将工具提示代码添加到继承版本的类中，
这样可以保持 UI 代码干净、一致，并避免工具提示交叉污染，即两个元素获得相同的工具提示，而它们本应拥有不同的工具提示，或者其中一个/两个根本不应该有工具提示。
有关如何正确添加工具提示的示例，请查看 gui/gui_topbar.hpp。

#### 简单文本

你可以使用以下函数渲染简单文本：
`ogl::render_text(sys::state const& state, char const* codepoints, uint32_t count, color_modification enabled, float x, float y, float size, const color3f& c, text::font& f)`
`count` 参数包含要从 `codepoints` 渲染的字符数（该字符串*不*必须以空字符结尾）。`color_modification` 枚举参数必须是 `none`、`disabled`、`interactable` 或 `interactable_disabled` 之一（当可点击元素位于鼠标下方时使用 `interactable` 和 `interactable_disabled`），并且应该选择以匹配元素其余部分当前显示的方式。`x` 和 `y` 在屏幕上定位文本（你应该尽可能为 `y` 选择整数值）。

#### 复杂文本

本节描述的函数和类在 `text.hpp` 中声明，并且是 `text` 命名空间的一部分。对于任何超越微不足道的事情，我们必须能够安排文本，以便我们可以稍后通过多次调用 `render_text` 来绘制它，以显示跨越多行和/或多种颜色的文本。为此，我们创建一个 `text::layout` 对象。此对象存储文本以及定位和颜色信息。布局对象不应手动填充。相反，你应该使用无限布局或列布局。

可以将布局的内容想象为盒子，每个盒子包含单个项目（单个逻辑文本单元，即使需要多行才能显示全部）。然后，这些盒子在 `layout_parameters` 描述的假想页面的边界内从上到下定位（`layout_parameters` 是一个结构体，如下所述）。在无限布局中，这些盒子被允许溢出假想页面的底部，假设用户将能够通过某种方式滚动隐藏的内容到视图中。在列布局中，到达假想页面末尾时会在刚完成的列右侧开始一个新列，向右移动 `column_width` 像素（见下文）。列间空间因此是 `column_width` 与假想页面右边距之间的差值。

要创建无限布局，你必须调用函数 `text::create_endless_layout(layout& dest, layout_parameters const& params)`，要创建列布局，你必须调用 `columnar_layout text::create_columnar_layout(layout& dest, layout_parameters const& params, int32_t column_width)`（注意控制列间距的额外 `column_width` 参数）。请注意，在创建时，这两个函数都会清除 `layout` 的内容。预期的用法是创建你希望填充的布局类型，用适当的布局框函数（见下文）填充它，然后丢弃它。只有基本的 `layout` 对象应该被持久存储。请注意，一旦创建了无限布局，布局的 `number_of_lines` 成员将告诉你容纳所有文本需要多少行，你可能会发现这对于决定如何滚动其内容很有用。你还可以通过查阅 `columnar_layout` 对象的 `used_height` 和 `used_width` 成员来了解列布局使用了多少空间。请注意，这些测量将考虑任何左边距或上边距空间，但不考虑任何右边距或下边距空间。

##### `layout_parameters`

 `layout_parameters` 结构具有以下成员：
- `int16_t left` ：布局内部坐标空间中的左边距
- `int16_t top` ：布局内部坐标空间中的上边距
- `int16_t right` ：布局内部坐标空间中的右边距
- `int16_t bottom` ：这在无限布局中未使用
- `uint16_t font_id` ：将用于确定文本占用多少空间的字体
- `int16_t leading` ：每行下方额外添加的空间量，以“像素”为单位（可能为负）
- `alignment align` ：假想页面边距内文本的对齐方式。可以是 `left`、`right` 或 `centered`
- `text_color color` ：布局开始时的文本颜色

##### 布局框函数

如上所述，通过填充一系列布局框来将文本添加到布局中。每个框都必须通过对 `layout_box text::open_layout_box(𝘭𝘢𝘺𝘰𝘶𝘵_𝘵𝘺𝘱𝘦& dest, int32_t indent = 0)` 的调用来创建。`indent` 是衡量框应相对于左边距向右定位多远的量。当你不是在添加列表的内容时，`indent` 为 0 可能是你想要的。当你完成向单个布局框添加文本后，你必须在开始下一个框或完成布局之前用 `text::close_layout_box(𝘭𝘢𝘺𝘰𝘶𝘵_𝘵𝘺𝘱𝘦& dest, layout_box& box)` 关闭它。忘记关闭一个框将导致布局包含位置不当的文本。

当布局框打开时，你可以使用以下任何函数的组合向其添加内容（每个函数调用任意次数）：

- `add_to_layout_box(sys::state const& state, layout_base& dest layout_box& box, std::string_view, text_color color, substitution source = std::monostate{})` ：此函数向框中添加纯文本。`substitution` 参数仅用于使文本表现得*好像*它来自替换变量，这可能是你不需要的东西。
- `add_to_layout_box(sys::state const& state, layout_base& dest layout_box& box, dcon::text_sequence_id source_text, substitution_map const& mp)` ：向布局框中添加复杂文本。此文本将根据源文本中嵌入的任何颜色变化命令更改颜色。此外，源文本中的任何变量都可以通过填充 substitution map 参数在此时替换。填充 substitution map 的最简单方法是使用 `text::add_to_substitution_map(substitution_map& mp, variable_type key, substitution value)`。`substituion` 是一个 `std::variant<std::string_view, dcon::text_key, dcon::province_id, dcon::state_instance_id, dcon::nation_id, int64_t, float, sys::date, std::monostate>;`。国家、省份等的值将在替换时转换为其当前名称，日期将变成文本表示，等等。（请参阅下面的命中测试，了解如何从替换中获取源。）
- `add_line_break_to_layout_box(sys::state& state, layout_base& dest, layout_box& box)` ：此函数在布局框内添加换行符（在列布局中，如果你想创建必须最终位于同一列中的两行或更多行，这很有用）。
- `localised_format_box(sys::state& state, layout_type& dest, layout_box& box, std::string_view key, text::substitution_map sub)` ：此函数等效于执行以下代码片段：
```
if(auto k = state.key_to_text_sequence.find(std::string_view("some value present in CSV files...")); k != state.key_to_text_sequence.end()) {
    text::add_to_layout_box(state, contents, box, k->second, sub);
}
```
- `add_divider_to_layout_box(sys::state& state, layout_base& dest, layout_box& box)` ：此函数等效于执行以下代码片段：
```
text::add_line_break_to_layout_box(state, contents box);
text::add_to_layout_box(state, contents, box, std::string_view("--------------"));
text::add_line_break_to_layout_box(state, contents box);
```

##### 渲染文本布局

渲染布局的内容就像用如下循环对其进行迭代一样简单：
```
for(auto& txt : internal_layout.contents) {
	ogl::render_text(state,
		txt.win1250chars.c_str(), uint32_t(t.win1250chars.length()),
		ogl::color_modification::none,
		float(x) + txt.x, float(y + txt.y),
		float(font_size),
		get_text_color(state, txt.color),
		state.font_collection.fonts[font_id - 1]
	);
}
```
其中 `x` 和 `y` 是你想要相对于其内部坐标空间整体调整布局位置的量。

##### 对文本布局进行命中测试

为了实现诸如超链接之类的东西，可能有必要确定特定坐标位置（如果有的话）位于哪个文本块内部。为此，请使用 `layout` 对象的 `text_chunk const* get_chunk_from_position(int32_t x, int32_t y)` 成员，请记住 `x` 和 `y` 是以布局的内部坐标空间表示的。如果给定位置没有渲染文本，此函数将返回 `nullptr`。就使超链接工作而言，返回的对象最重要的成员是 `source`，它保存了创建文本的 `substitution` 变体（如果有的话）。检查此变体的内容将允许你找到被放入原始替换映射中的省份、国家等的 id。

##### 允许子元素从父元素检索数据

要允许子元素使用以下函数从父元素检索数据：

```
auto target_state = retrieve<dcon::state_definition_id>(state, parent);
```

在父类内部，你需要实现以下逻辑：

```
message_result get(sys::state& state, Cyto::Any& payload) noexcept override {
	if(payload.holds_type<dcon::state_definition_id>()) {
		payload.emplace<dcon::state_definition_id>(target_state);
		return message_result::consumed;
	}
}
```
