## 与游戏循环交互的基础知识

游戏循环始终在后台运行，即使游戏名义上处于暂停状态。然而，当游戏暂停且游戏循环无事可做时，它会将时间交还给调度器（通过 `sleep`）。实际上，这意味着你不是通过调用函数来与主游戏循环通信的。通常你通过在某处写入数据来发送消息，然后依靠它在下一次迭代时获取这些数据。同样，当游戏循环想要通知程序的其余部分发生了事件时，它在某处写入一条消息，并依靠定期调用的渲染函数来拾取它。

### 传达游戏速度

就更新逻辑而言，有 6 种游戏速度，每个存储在 `actual_game_speed` 成员变量中，其中 0 是暂停，5 是无限制速度。来自 UI 方面的逻辑可能更复杂。你可能想要跟踪一个在暂停期间持续存在的期望游戏速度。如果你这样做，就由 UI 代码来跟踪它。将 `actual_game_speed` 视为对游戏循环的信号。你用 `actual_game_speed.store(speed_value, std::memory_order::release)` 写入期望的游戏速度，游戏循环将在下次检查速度时获取它。

在显示游戏是否暂停时，你应该在 actual_game_speed 当前等于 0 或 `state` 的 `internally_paused` 成员为 true 时显示速度为暂停（这设置在游戏逻辑阻止日期推进时；永远不应由 UI 修改）。在决定这一点时，两个值都可以在没有原子保护的情况下读取，因为在那种情况下读错实际上没有任何后果。

### 响应游戏状态的变化

游戏状态可能会因为新的一天被处理而发生变化，这可能是最常见的情况。然而，它也可能在游戏暂停时由于玩家命令而发生变化（例如，玩家调整预算或选择事件选项）。幸运的是，这种差异对 UI 来说基本无关紧要。在开始渲染新帧之前，我们执行以下操作：
```c++
auto game_state_was_updated = game_state_updated.exchange(false, std::memory_order::acq_rel);
if(game_state_was_updated) {
	ui_state.units_root->impl_on_update(*this);
	ui_state.rgos_root->impl_on_update(*this);
	ui_state.root->impl_on_update(*this);
	// TODO 地图需要刷新自身数据
	// TODO 还需要更新任何工具提示（可能存在于根容器之外）
}
```
当前更新的部分通过 UI 层级推送 `update` 消息，任何正确实现的控件都会响应它，更新从游戏状态本地存储的任何数据，必要时重新创建其文本内容，等等。同样必要但目前尚未实现的是，地图必须更新其基于当前地图模式的数据，工具提示（可能存储在不同的 UI 根容器中）也必须更新。

### 发送命令

UI 可以通过 `commands.hpp` 中提供的函数向游戏状态发送命令来传输玩家的操作。每个不同的命令有两个相关函数：一个函数的名称描述命令的作用（例如 `set_national_focus`），然后另一个函数名为 `can_...`。第一个函数将命令发送到游戏状态。第二个函数返回一个布尔值，指示该命令当前是否有效。虽然你可以发送无效命令，但它们将被游戏静默拒绝。这第二个函数对于确定何时应该禁用按钮很有用。然而，由于工具提示通常需要解释 *为什么* 按钮被禁用，该函数同样可以作为参考来查看可能阻止特定命令执行的所有条件代码。

关于哪些命令可能以及它们用通俗英语做什么的文档可以在 [规则文档的末尾](rules.md#Commands) 找到。

### 从游戏状态向 UI 发送和接收更复杂的消息

除了通知 UI 情况发生了变化需要刷新自身外，游戏状态还可能想要向 UI 发送三种更复杂的通知。这些是：发生了新事件，本地玩家可以与之交互；新的外交请求（例如请求结盟或军事通行权），本地玩家可以接受或拒绝；以及新的通知消息，可能最终出现在弹出窗口或消息日志中。

每种都通过作为 `sys::state` 成员的一个队列传递给 UI。UI 应尽快清空这些队列（理想情况下，每当渲染新帧时）并将信息放入其自己的内部存储中。

保存新事件的队列，对于事件：
```c++
rigtorp::SPSCQueue<event::pending_human_n_event> new_n_event;
rigtorp::SPSCQueue<event::pending_human_f_n_event> new_f_n_event;
rigtorp::SPSCQueue<event::pending_human_p_event> new_p_event;
rigtorp::SPSCQueue<event::pending_human_f_p_event> new_f_p_event;
```

对于外交请求：
```c++
rigtorp::SPSCQueue<diplomatic_message::message> new_requests;
```

对于一般通知消息：
```c++
rigtorp::SPSCQueue<notification::message> new_messages;
```

事件队列保存了发生在本地玩家控制的国家 / 该国家内省份的事件的完整描述。整体而言，这些信息是玩家最终选择事件选项所必需的，因为它标识了所有人类玩家的可能事件中，该选择是针对哪个事件的。

外交请求消息包含极少量的信息。要响应此类请求，UI 必须调用 `command::respond_to_diplomatic_message(sys::state& state, dcon::nation_id source, dcon::nation_id from, diplomatic_message::type type, bool accept)` 并传入适当的参数。如果在 `state.defines.alice_message_expiration_days` 天内未做出响应，它将自动被拒绝，UI 应在此之后自动丢弃任何可见的通知或消息框，因为任何对已过期请求的响应尝试都将被忽略。

通知消息包含 5 个重要信息。它们包含一个 `type`，一个 `primary` 国家，即消息主要涉及的国家，以及一个可选的 `secondary` 国家，即导致事情发生的另一个国家（例如，在关于新战争的通知中，宣战的国家是次要国家，而主要国家是战争目标）。这三个项目，以及玩家保存的通知设置，应该用于确定收到消息时会发生什么（即我们是否自动暂停游戏？我们是否显示弹出消息？我们是否将其记录在日志中？）。

如果消息将显示在弹出通知中或写入日志，`title` 和 `body` 成员包含当被调用时将用适当文本填充布局的函数。**注意：** 从游戏状态发布消息时（使用 `notification::post` 函数），你应该确保两件事。首先，传递给这些成员的 lambda 通过值捕获它需要的任何信息。其次，你应该确保任何字符串操作和/或格式化都在 lambda 主体中完成，而不是在创建过程中。经验法则是，你应该确保它根本不捕获任何 `std::string` 或 `std::string_view` 对象。由于消息是在游戏循环中创建的，我们希望确保发送通知的成本最小化，并且显示消息的大部分成本在 `title` 和 `body` 函数执行时支付，因为它们将在 UI 线程而不是主更新线程中执行，因此不会延迟游戏本身。
