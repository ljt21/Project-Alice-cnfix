## 数据在哪里？

本文档作为从数据容器（`sys::state` 对象的 `world` 成员）获取信息的快速指南。这不是关于该对象中存储的信息的完整文档，而是一个更"快速"的参考，用于常见问题和任务。从长远来看，阅读 [数据容器文档](https://github.com/schombert/DataContainer) 可能对你有帮助，因为如此多的游戏状态存储在其中。

### 让 IntelliSense（TM）（或其他代码补全工具）帮助你

`world`，数据容器对象，暴露了数量庞大的函数，直接从中找到你想要的并不容易，除非你熟悉各种函数名称是如何从数据容器生成的。因此，我推荐一个捷径。数据容器管理的任何对象或关系类型都可以变成"胖"句柄。由特定类型的标识符创建的胖句柄只暴露与该对象或关系相关的函数，使得通过代码补全更容易找到你需要的函数。只要你不存储你创建的胖句柄（或将它们传递给其他函数），这种易用性应该不会带来性能损失。创建胖句柄如下所示：`auto fat_handle_result = fatten(state.world, raw_handle_id);` 一旦你调用了胖句柄的函数，其成员函数返回的大多数句柄值本身将自动升级为胖句柄，所以通常你只需要调用 `fatten` 一两次。

### 导航省份及其关系

假设你有一个名为 `id` 的 `province_id`。首先，你要写 `auto fat_id = fatten(state.world, id);` 然后要获取为省份定义的任何属性（如 `dcon_generated.txt` 中所给），你可以写一行如：`fat_id.get_life_rating()`，就像这样，你就得到了你感兴趣的属性。

除了其属性外，省份还可以与其他对象相关，通常更有趣的数据就存在于此。目前，省份可以通过控制和所有权（两种不同的关系）与国家相关，工厂可以位于其中，省份还可以通过核心所在的关系与国家身份（即标签）相关。你可以获得关系本身的句柄（每个关系可以作为某种伪对象处理），就好像它是一个属性。例如，你可以调用 `fat_id.get_province_ownership();`。这会给你关系本身的胖句柄，然后你可以调用 `ownership_handle.get_nation();` 来检索拥有国家。然而，对于某些常见的你想要"跨越"关系来找到其他相关事物的场景，数据容器提供了一个快捷方式。在这种情况下，你可以调用 `fat_id.get_nation_from_province_ownership();` 来直接获得拥有国家的句柄。

#### 这个省份是水域吗？

一个常见问题，奇怪的是可能没有一个明显的答案，因为没有 `get_is_sea()` 成员。这是因为省份按陆地或海洋分组。因此，要测试一个省份是否是水域，你只需测试它是否在水省份组中，方法是将 `province_id.index()` 与 `sys::state` 对象的 `province_definitions.first_sea_province` 成员的索引进行比较。索引等于或更大的省份属于海洋省份组。

#### 这个省份有所有者吗？

作为一般经验法则，当你请求不存在的东西时，你会从数据容器中获得无效索引。因此，如果一个省份没有所有者，而你请求所有者，你会得到一个无效的 `nation_id` 句柄。你可以通过将其转换为布尔值来测试无效句柄（无效句柄为 false，有效句柄为 true）。因此，`if(bool(fat_id.get_nation_from_province_ownership())) { ... }` 这样的 if 语句的内容将只对有所有者的省份进行求值。

### 国家身份

标签的名称、旗帜、政党和地图颜色被认为是国家身份对象的一部分。这些对象通过 `identity_holder` 关系唯一相关（每个国家有一个国家身份，每个国家身份同时最多属于一个国家）。如果你有一个国家的胖句柄，你可以通过 `get_identity_from_identity_holder()` 直接转到其国家身份。从国家身份中，你可以通过 `get_color()` 获取其颜色（打包到 unit32_t 中）。这些颜色的组件可以使用 `container_types.hpp` 中定义的 `int_red_from_int` 和 `red_from_int` 系列函数提取为 `float` 或整数。（**重要提示**：目前你必须从省份到拥有国家再到其身份来获取颜色，这可能就是类似 `prov.get_nation_from_province_ownership().get_identity_from_identity_holder().get_color()` 的东西 -- 将来我们可能会缓存国家当前的颜色和名称等，所以要注意你可能需要回去一些地方并移除 `get_identity_from_identity_holder` 步骤。）

注意身份和核心存在于多对多关系中：每个国家身份可以在许多省份有核心，每个省份可以有许多国家身份核心。因此，当你从省份开始时，无法从 `core` 关系中获得单一的国家身份。相反，函数 `fat_id.get_core()` 返回涉及该省份的 `core` 关系的范围，你可以用 `for(auto relationship : fat_id.get_core())` 进行迭代，然后用 `relationship.get_identity()` 提取国家身份。

### 列强关系

虽然大多数外交关系可以在任何两个国家之间存在，但有一些属性只在列强与其他国家的关系背景下有意义。这些属性存储在 `gp_relationship` 关系中。

有三种方式可以访问这些关系。

首先，你可以使用一个循环，如 `for(auto gp_rel : state.world.nation_get_gp_relationship_as_great_power(some_nation_id)) { .. }`。这将遍历 `some_nation_id` 是列强的所有列强关系。如果国家不是列强，这个循环根本不会运行。

其次，你可以使用一个循环，如 `for(auto gp_rel : state.world.nation_get_gp_relationship_as_influence_target(some_nation_id)) { .. }`。这在本质上与之前的工作方式相同，只是这个循环将遍历列强正在影响这个国家的所有关系。这样的循环不会遍历超过 8 个关系，因为最多有 8 个列强。然而，它可能找到少于 8 个关系，因为如果列强没有与特定国家互动，就不会生成关系。

最后，你可以使用 `state.world.get_gp_relationship_by_gp_influence_pair(target_id, great_power_id)` 来获取任何国家和任何列强之间的 `gp_relationship` 句柄。注意，如果两个国家之间不存在关系，此函数将返回无效句柄值。（你可以通过将其转换为 bool 来测试）。

关系的 `influence` 属性将当前影响力值存储为 `float`，这应是相当不言自明的。然而，`status` 属性更复杂，因为它包含多个打包在一起的值。你可以使用 `nations::influence` 命名空间中的常量之一对 `uint8_t` 进行掩码操作来获取单个属性。用 `(status & nations::influence::level_mask)`（不要忘记括号，否则 `&` 会在 `==` 之后求值）你可以提取影响力关系的级别，范围从 `nations::influence::level_hostile` 到 `nations::influence::level_in_sphere`。用 `(status & nations::influence::level_mask)` 你可以提取就影响力点数分配而言给予该国家的优先级。优先级范围从 `nations::influence::priority_zero` 到 `nations::influence::priority_three`。最后有三个位你可以用 `nations::influence::is_expelled`、`nations::influence::is_discredited` 和 `nations::influence::is_banned` 来测试，看看这些状态效果是否激活。

因为通过遍历列强关系来找出哪个球体中有一个国家效率相当低，每个国家还存储了其所在球体的国家的句柄，在其 `in_sphere_of` 属性中。如果国家不在任何球体中，此属性将包含无效句柄值。

### 对称外交关系

关于一般对称外交关系的信息存储在 `diplomatic_relation` 类型关系中。这些关系存储两个国家之间的当前关系值、它们是否结盟，以及如果存在的话，最新休战的结束日期。

与列强关系一样，可以通过使用两个国家的句柄直接查找外交关系，或者通过迭代特定国家参与的对称外交关系。在第一种情况下，你使用如下函数调用：
`state.world.get_diplomatic_relation_by_diplomatic_pair(id_a, id_b);`
注意 id 的顺序无关紧要，如果你用 `(id_b, id_a)` 调用该函数，你会找到相同的关系。同样注意，与列强关系一样，你不能假设任何两个国家之间存在现有外交关系。如果没有外交关系，你应将它们视为未结盟、没有休战、关系值为 0。

你也可以迭代特定国家参与的所有外交关系。你可以通过编写如下循环来做到这一点：
`for(auto rel : state->world.nation_get_diplomatic_relation(id_a)) { ... }`
这将遍历涉及一个国家的所有外交关系。现在，一个重要的事情是知道此外交关系中涉及了 *哪个* 其他国家。这里有一个小复杂之处，即内部关系不知道你是从哪个 id 找到它的。因此，要找到另一个国家，你必须写如下内容：
`auto other = rel.get_related_nations(0) == id_a ? rel.get_related_nations(1) : rel.get_related_nations(0);`
你可以将 `related_nations` 视为关系内部的一个数组，保存涉及的两个国家的身份。要找出另一个国家是谁，你只需确定你来自的国家是否在数组的第一个位置，这立即告诉你哪个位置保存着另一个国家。

#### 关于休战的说明

如果存储的休战日期是无效句柄（表示从未存储过休战）或休战的结束日期在当前日期之前，则国家被认为没有休战。

### 战争

每个当前正在进行的战争都由一个 `war` 对象表示。每场战争有一个主要攻击者、一个主要防御者和一个开始日期。（最终还有其他属性，例如当前战争分数，但这仍在待办列表中）。每场战争还与两个或更多国家关联作为参与者（每个参与者被标记为攻击者或防御者）。注意主要防御者和攻击者也会出现在此列表中，所以如果你遍历列表，不需要单独检查他们。

当前参与任何战争的国家，无论是作为攻击者还是防御者，其 `is_at_war` 属性都会设置。（这是一个缓存值，因为也可以根据需要重新计算。）

如果你想知道任意两个给定国家是否在战争，`military` 命名空间中提供了一个便利函数（在 `military.hpp` 中声明）：`bool are_at_war(sys::state const& state, dcon::nation_id a, dcon::nation_id b);` 如果有任何活跃的战争涉及两个在相反方面的国家，它将返回 true。

如果你需要编写那种函数，看看 `are_at_war` 是如何实现的可能会很有启发性，因为它是一个非常简单的函数。

```
bool are_at_war(sys::state const& state, dcon::nation_id a, dcon::nation_id b) {
	for(auto wa : state.world.nation_get_war_participant(a)) {
		bool is_attacker = wa.get_is_attacker();
		for(auto o : wa.get_war().get_war_participant()) {
			if(o.get_nation() == b && o.get_is_attacker() != is_attacker)
				return true;
		}
	}
	return false;
}
```

在函数中，我们首先遍历国家参与的所有战争。然后，对于每场战争，我们记录我们的国家是攻击者还是防御者。知道了这一点，然后我们再遍历所有参与者，看看是否有任何参与者是我们感兴趣的另一个国家，并且参与在相反方面。

### 人口

大多数省份有一个以上的人口（尽管有些可能完全没有）。要遍历省份中的人口，你可以编写如下循环：
```
for(auto pops_by_location : state.world.province_get_pop_location(province_id)) {
	auto pop_id = pops_by_location.get_pop();
	...
}
```
此循环遍历涉及指定省份的所有 pop-to-province 位置关系。在循环体中，`pops_by_location` 将是该关系实例之一的胖句柄。然后你可以用 `get_pop()` 从关系中拉出人口，这也会产生人口的胖句柄。

#### 存储 pop id

**永远不要** 在没有采取预防措施的情况下存储 `pop_id`。与大多数对象不同，人口可以来来去去，为了提高性能，数据容器会在人口被删除时移动它们以保持在紧凑的组中。这意味着，如果你持有一个人口的句柄超过一天的游戏 tick，它可能最终指向一个完全不同的人口。然而，为了使 UI 响应迅速，你可能确实想要存储窗口或元素正在显示的人口的 id。为了解决这个问题，当你存储 pop_id 时，你还应该存储人口所在位置的 province_id、人口的 culture_id、人口的 religion_id 和人口的 pop_type_id。这组属性的组合保证是唯一的。所以当你存储 pop_id 时，不仅应该存储这些其他属性，还应该为 UI 元素编写一个 `update` 函数（`update` 在游戏 tick 发生后发送给可见的 UI 元素），在其中搜索你存储的省份，寻找具有相同匹配文化、宗教和人口类型的人口。然后用这种方式找到的 id 更新存储的 pop id。（如果你用这种方式找不到匹配的人口，这意味着人口已经消失了，你应该不再尝试显示关于它的信息。）

### 最后提醒

请记住，你提取句柄的大多数方式有时可能产生一个"无效"句柄，表示没有这样的对象。例如，如果你试图获取一个无主省份的所有者，你会得到这样的句柄。将句柄（胖或否则）转换为 `bool` 时，有效句柄返回 `true`，无效句柄返回 `false`。虽然在某些情况下从无效句柄读取数据是安全的（参见数据容器文档），但养成检查句柄有效性的习惯可能更安全。
