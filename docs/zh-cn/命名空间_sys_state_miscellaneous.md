## 位于 `sys_state_miscellaneous` 命名空间中的杂项内容

### 日期

处理日期所需的几个简单类型可以在 `date_interface.hpp` 头文件中找到。在那里，定义了两种类型的日期。首先我们有 `absolute_time_points`。一般来说，应该只有其中两个，即 `sys::state` 对象的
```
absolute_time_point start_date;
absolute_time_point end_date;
```
成员。这两个存储了将我们在内部使用的紧凑日期转换为 UI 的普通外观日期所需的完整日期。一般来说，除非 UI（或从文本文件中读取日期）以某种方式参与，否则大多数地方也不需要使用这些成员变量。你可以借助 `year_month_day` 结构体构造 `absolute_time_point`，如 `sys::absolute_time_point{sys::year_month_day{Y, M, D}}`，它将产生一个表示给定年（Y）、月（M）和日（D）的绝对时间点。

程序将使用的大多数日期由 `date` 结构体编码，它在内部将日期存储为 `start_date` 之后的天数。日期可以直接用这些术语进行操作。你可以从整数构造日期，表示开始日期之后的天数，你可以向日期添加整数，从而将其调整那么多天（这是通常应计算持续时间的方式，例如将日期提前 30 天表示一个月或 365 天表示一年，即使这不会将用户友好的日期精确地提前一个月或一年）。你还可以借助 `year_month_day` 和绝对开始日期构造日期。例如 `sys::date{sys::year_month_day{Y, M, D}, start_date}` 将产生一个表示给定年（Y）、月（M）和日（D）的 `date`。

最后，便捷函数 `bool is_playable_date(date d, absolute_time_point start, absolute_time_point end)` 是一种快速测试 `date` 是否落在游戏可玩范围内的方法。

### 事件

