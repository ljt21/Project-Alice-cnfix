# 模组扩展

本文档涵盖了 Project Alice 在维多利亚 2 提供的内容之外添加的模组扩展。我们通常愿意根据请求添加更多模组扩展，条件是你确实计划使用它们。一般来说，我们对仅仅因为"可能有用"就推测性地添加扩展不感兴趣。

## 脚本编写

### 触发条件解析

在维多利亚 2 中，诸如 `prestige = 5` 的触发条件会在国家威望大于或等于 5 时触发。如果你想测试该值是否小于 5，你必须将其埋在一个 `NOT` 作用域内。而测试精确相等性将更加复杂。为了简化，我们支持将 `=` 替换为以下标记之一：`==`、`!=`、`<`、`>`、`<=`、`>=`。`==` 测试精确相等性，`!=` 测试不相等性，其余的有其通常含义。我们在大多数情况下也支持将 `=` 替换为 `!=`。例如，`tag != USA` 与 `NOT = { tag = USA }` 相同。

此外，任何效果作用域都可以有一个限制，在原始游戏中，`THIS`、`TAG`、`FROM`、`overlord`、`capital_scope` 和 `any_greater_power` 不能可靠地在其中定义 `limit = { ... }`。然而 Alice 支持为其中任何一个定义限制。

另外，省份作用域不会导致游戏崩溃，例如：

```
252 = {
	owner = { prestige = 5 }
	owner = { badboy = 0.2 }
	secede_province = THIS
}
```

这在原始游戏中肯定是不可想象的，因为在第一个 owner 之后的任何内容都会被忽略。但现在不再是这样了。

```
ENG_52 = {
	secede_province = QQQ
	change_region_name = "Test"
	secede_province = THIS
}
```

如果不小心处理，这经常会导致崩溃（特别是将省份割让给空标签的部分）。但现在不再是这样了。

另一个新功能是允许在触发器内部统一使用 `yes/no`，在原版引擎中，`unit_has_leader = yes` 与 `unit_has_leader = no` 是相同的，因此需要包装在 `NOT = { unit_has_leader = yes }` 中。现在不再是这样了。

此外，诸如科技触发器之类的条件不再必须以 `nationalism_n_imperialism = 1` 的形式指定，它们也可以指定为 `nationalism_n_imperialism = yes`。为了便于阅读和统一性。

### 新效果

- `increment_variable = ...`: 简写，增加 1
- `decrement_variable = ...`: 简写，减少 1
- `set_variable_to_zero = ...`: 简写，将变量设为 0
- `ruling_party_ideology = THIS/FROM`: 任命执政党，其意识形态为 `THIS` 或 `FROM`
- `add_accepted_culture = THIS/FROM`: 现在使用 `THIS/FROM` 会将 `THIS/FROM` 的主流文化添加到作用域内的国家
- `add_accepted_culture = this_union/from_union`: 将 `THIS/FROM` 主流文化的文化联盟添加为作用域内国家的可接受文化
- `kill_leader = "name of leader"`: 杀死作用域内国家具有给定名称的领袖（海军上将或将军）。请注意，只有当你通过效果或历史文件中的定义明确创建了具有该名称的领袖时，此功能才会可靠地工作。
- `annex_to = null`: 这将作用域内国家拥有的所有省份变为无主省份（这会使该国家被击败，解放其附庸国等）。
- `secede_province = null`: 将作用域内的省份变为无主省份。这是为了取代模组用来使省份无主的一些技巧，例如将它们割让给不存在的标签等
- `random_greater_power = { ... }`: 类似 `any_greater_power`，但只作用于一个随机列强。
- `random_empty_neighbor_province` - 在国家/省份作用域中选择随机空邻省。
- `any_empty_neighbor_province = { ... }`: 类似 `random_empty_neighbor_province`，但作用于所有空的相邻省份。可用于省份或国家作用域。
- `random_neighbor_province` 可用于国家和省份作用域。
- `any_neighbor_province` 可用于国家和省份作用域。
- `change_terrain = terrain`: 更改作用域内省份的地形，也可用于人口作用域（将默认为该人口所在位置）
- `religion = religion_name`: 效果可用于省份和人口作用域，以更改省份/人口的宗教。
- `assimilate = yes`: 效果可用于人口/省份/州作用域，将作用域内人口的文化更改为主流文化。
- `reduce_pop_abs = amount`: 按绝对数量减少人口作用域中的人口（例如 500 名士兵）。使用负值来增加人口规模。使用非常大的数字来完全移除人口。
- `set_culture = culture`: 将作用域内人口的文化设置为指定文化。
- `any_existing_country_except_scoped`: 与决议中的 `any_country` 行为相同，任何现存国家除外作用域内的国家
- `any_defined_country`: 与事件中的 `any_country` 行为相同，作用于所有国家，包括不存在的国家，并包含当前国家
- `random_neighbor_country`: 一个随机邻国。
- `all_core = { ... } (for provinces)`: 能够在省份内使用它，以作用于该省份的所有核心，例如如果英国和俄罗斯在休斯顿都有核心，那么这将同时作用于英国和俄罗斯
- `any_core = { ... }`: 效果没有 `any_core`，但触发器有，因此为了一致性也支持它。
- `from_bounce = { ... }`: 将当前作用域内的任何内容转发给 `FROM`，直到此作用域结束
- `this_bounce = { ... }`: 同上，但使用 `THIS`。
- `random_by_modifier = { ... }`: 参见下面的语法用法
- `build_bank_in_capital = { ... }`: 在原版中无效，添加供模组使用。
- `build_university_in_capital = { ... }`: 在原版中无效，添加供模组使用。
- `any_owned_province = { ... }`: 为与触发器保持一致而提供。
- `any_prov = { ... }`: `any_owned` 的简写。
- `any_owned_province = { ... }` : `any_owned` 的简写。
- `any_substate = { ... }`: 为了与触发器对等，作用于国家的任何次国家。
- `remove_country_flag = flag`: `clr_country_flag` 的别名。
- `clear_global_flag = flag`: `clr_global_flag` 的别名。
- `province_immigrator = n`: `n` 只能是 `1` 或 `-1`。这是各种模组中使用的"省份选择器"。
- `immigrator = n`: `province_immigrator` 的别名。
- `immigrator_selector = n`: `province_immigrator` 的别名。
- `if = { ... }`: 参见下面的 if-else 用法。
- `else_if = { ... }`: 参见下面。
- `else = { ... }`: 参见下面。
- `add_country_modifier = modifier`: `add_country_modifier = { name = modifier duration = -1 }` 的简写
- `add_province_modifier = modifier`: `add_province_modifier = { name = modifier duration = -1 }` 的简写
- `masquerade_as_nation = THIS/FROM`: 使用 `THIS/FROM` 的视觉效果旗帜作为国家旗帜，最适用于动态叛乱等。
- `change_party_name = { ... }`: 此效果使用包含两个成员的块来定义。第一个成员是 `ideology = ...`，其中 `...` 是意识形态的名称或 `ruling_party`。此成员决定效果将应用于哪个政党。如果提供了意识形态，它将应用于具有该意识形态的第一个活跃政党（一般来说，"第一个"政党是指在文件中较早定义的政治政党）。如果提供了 `ruling_party`，作用域内国家的当前执政党将受到影响。第二个成员是 `name = ...`。此值是政党将被赋予的新名称。此效果只能在国家作用域内使用。示例：
```
	change_party_name = {
		ideology = conservative
		name = NEW_PARTY_NAME
	}
```
- `change_party_position = { ... }` : 此效果使用包含两个成员的块来定义。第一个成员是 `ideology = ...`，其中 `...` 是意识形态的名称或 `ruling_party`，它决定效果应用于哪个政党，如上所述。第二个成员是 `position = ...`，其中 `...` 是政党议题或政治或社会改革的选项之一。效果将导致由 `ideology` 成员确定的政党将其政党立场更改为给定的 `position`（如果是政党议题），或者它将赋予他们支持该特定改革的投票偏好，并移除对同一组中另一改革的任何投票偏好（有关政党偏好的扩展，请参见下文）。此效果只能在国家作用域内使用。示例：
```
	change_party_position = {
		ideology = ruling_party
		position = free_trade
	}
```
- `diplo_points = ...` : 将数字添加到作用域内国家当前存储的外交点数中。（注意：所以你可以使用负数来减去点数。外交点数不能减少到零以下。）
- `suppression_points = ...` : 将数字添加到作用域内国家当前存储的镇压点数中。（注意：所以你可以使用负数来减去点数。镇压点数不能减少到零以下。）


至于 `build_xxx_in_capital`，游戏不允许以这种模式使用效果来使用自定义定义的建筑。

`build_bank_in_capital` 及其大学对应物的语法相同：

```
build_bank_in_capital = {
	in_whole_capital_state = yes/no
	limit_to_world_greatest_level = yes/no
}
```

### 新触发条件

- `test = name_of_scripted_trigger`: 评估一个脚本化触发器（见下文）
- `any_country = { ... }`: 测试任何现存国家是否满足 `...` 中给出的条件。这本质上只是镜像了现有 `any_country` 效果作用域的工作方式，但用于触发条件。
- `any_known_country = { ... }`: 同上，别名
- `every_country = { ... }`: 类似 `any_country`，但适用于*每个*国家。
- `has_global_flag = project_alice`: 如果在 Project Alice 上玩则为 true，否则为 false
- `all_war_countries = { ... }`: 我们交战的所有国家*必须*满足条件，与 `war_countries` 相反，后者只需要一个国家满足条件
- `any_war_countries = { ... }`: 等同于 `war_countries`
- `all_state = { ... }`: 所有州必须满足条件，类似 `any_state`
- `all_substate = { ... }`: 所有次国家必须满足条件，类似 `any_substate`
- `all_sphere_member = { ... }`: 所有势力范围成员必须满足条件，类似 `any_sphere_member`
- `all_pop = { ... }`: 所有人口必须满足条件，类似 `any_pop`
- `all_greater_power = { ... }`: 所有列强必须满足条件。
- `any_owned = { ... }`: `any_owned_province` 的简写。
- `is_ai = yes/no`: `ai = yes/no` 的别名。
- `recently_lost_war`: `has_recently_lost_war = yes` 的别名
- `has_recent_immigration`: `has_recent_imigration` 的别名（原始拼写错误）。
- `industry_score`: `industrial_score` 的别名。
- `has_accepted_culture`: `accepted_culture` 的别名。
- `number_of_cities`: `num_of_cities` 的别名。
- `disarmed`: `is_disarmed` 的别名。
- `is_vassal_of`: `vassal_of` 的别名。
- `has_national_focus = focus`: 检查作用域内的州（或省份）是否具有焦点 `focus`。
- `party_name = { ... }`: 此触发条件使用包含两个成员的块来定义。第一个成员是 `ideology = ...`，其中 `...` 是意识形态的名称或 `ruling_party`。此成员决定触发条件将测试哪个政党。如果提供了意识形态，它将测试具有该意识形态的第一个活跃政党（一般来说，"第一个"政党是指在文件中较早定义的政治政党）。如果提供了 `ruling_party`，作用域内国家的当前执政党将被测试。第二个成员是 `name = ...`。此值是所选政党名称被测试的值。精确匹配评估为 `true`，而任何其他名称的政党将产生 false。此触发条件只能在国家作用域内使用。示例：
```
	party_name = {
		ideology = conservative
		name = SOME_PARTY_NAME
	}
```
- `party_position = { ... }` : 此触发条件使用包含两个成员的块来定义。第一个成员是 `ideology = ...`，其中 `...` 是意识形态的名称或 `ruling_party`，它决定触发条件将测试哪个政党，如上所述。第二个成员是 `position = ...`，其中 `...` 是政党议题或政治或社会改革的选项之一。触发条件将测试由 `ideology` 成员确定的政党是否持有指定的政党立场（如果是政党议题），或者它是否具有支持该特定改革的特定投票偏好（有关政党偏好的扩展，请参见下文）。此触发条件只能在国家作用域内使用。示例：
```
	party_position = {
		ideology = ruling_party
		position = free_trade
	}
```
- `diplo_points = ...` : 如果作用域内国家保存的外交点数大于或等于给定数字，则此触发条件为 true。
- `suppression_points = ...` : 如果作用域内国家保存的镇压点数大于或等于给定数字，则此触发条件为 true。
- `check_gamerule_ = { ... }`: 检查给定的游戏规则是否选择了某个选项。示例见游戏规则部分。

### 新修正

[修正](modifiers)

### 科技

科技可以在 `leadership_cost` 中拥有其成本。

### FROM 反弹

FROM 反弹是一种技术，以前模组制作者会这样做：
```
country_event (THIS = USA, FROM = ---) -> fire for X
country_event (THIS = X, FROM = USA) -> Fire for Y
country_event (THIS = Y, FROM = X) -> <Dynamic effects>
```
然而这可能很繁琐，因此我们添加了一个 `from_bounce` 效果作用域，可以如下使用：
```
any_country = {
	#Assume FROM = ENG
	from_bounce = {
		FROM = { add_accepted_culture = THIS }
		THIS = { add_accepted_culture = FROM }
	}
	#FROM is now again = ENG
}
```

你甚至可以嵌套它们！你为什么想要这个？真的取决于你。

```
any_country = {
	limit = { has_country_flag = paid_the_sultan }
	from_bounce = {
		prestige = 5
		SUL = { random_owned = { annex_to = FROM } } #Partition the sultan
		any_country = {
			#All countries at war with us will get annexed
			limit = { war_with = FROM }
			from_bounce = { inherit = FROM }
		}
	}
}
```

如果 `from_bounce` 有一个限制，它将使用 FROM 相对性进行评估：
```
ENG = {
	from_bounce = {
		limit = { FROM = { tag != ENG } }
		prestige = 5
	}
}
```
上面的代码永远不会执行，因为它永远不会为 true。`this_bounce` 同样适用。

以前，这需要类似这样的东西：
```
country_event = { #Setup THIS
	id = 50000
	option = {
		name = "Ok"
		any_country = { country_event = 50001 }
	}
}
country_event = { #Setup THIS-FROM
	id = 50001
	is_triggered_only = yes
	option = {
		name = "Ok"
		any_country = {
			limit = { NOT = { tag = FROM } }
			country_event = 50002
		}
	}
}
country_event = {
	id = 50002
	is_triggered_only = yes
	option = {
		name = "OK"
		FROM = { add_accepted_culture = THIS }
		THIS = { add_accepted_culture = FROM }
	}
}
```

### 按修正随机

问题：我们如何拥有根据各种因素变化概率的随机选择？

答案是 `random_by_modifier`：

```
random_by_modifier = {
	chance = {
		base = 50 #50% 概率
		modifier = {
			factor = 1.5 # x1.5 (50% x 1.5 = 75%)
			is_colonial = yes
		}
	}
	#50% 基础概率
	#如果是殖民地则为 75% 概率
	secede_province = THIS
}
```

### 自定义提示文本
```
custom_tooltip = {
	x = <variable> #$x$
	y = <variable> #$x$
	text = "localisation_key"
}
```
或者：
`custom_tooltip = "localisation_key"`

### Lambda 事件

在事件内定义匿名 lambda 事件，无需给它们 ID。

```
country_event = {
	id = 1000
	# etc...
	option = {
		name = "Option A"
		lambda_country_event = {
			#无需定义 ID
			option = {
				name = "Option A"
				#...
			}
			option = {
				name = "Option B"
				#...
			}
		}
	}
	option = {
		name = "Option B"
		lambda_country_event = {
			#无需定义 ID
			option = {
				name = "Option A"
				#...
			}
			option = {
				name = "Option B"
				#...
			}
		}
	}
}
```

这本质上允许"内联"匿名事件，例如在制作 FAQ 部分事件时，或进行一长串用于设置或"角色扮演选择"目的的事件链时。

这些事件不能用 `event` 命令触发，也不能被其他事件引用，它们永远不会自行触发，并且始终被视为 `is_triggered_only = yes`。

- `lambda_country_event`: 主槽位是 `country`，继承 `FROM` 和 `THIS` 槽位类型。
- `lambda_province_event`: 主槽位是 `province`，继承 `FROM` 和 `THIS` 槽位类型。

### 脚本化触发器

我们添加了能够编写一次复杂的触发条件，然后在其他触发条件中多次使用的能力。要使用这些"脚本化触发器"，你必须在你的模组中添加一个 `scripted triggers` 目录（位于模组的顶层，因此路径将如下所示：`...\mod name\scripted triggers`）。在此目录中放置任意数量的 `.txt` 文件，每个文件可以包含任意数量的脚本化触发器。

此类文件中的每个脚本化触发器应如下所示：
```
name_of_condition = {
	main_parameter = nation/state/province/pop/rebel/none
	this_parameter = ...
	from_parameter = ...
	
	... 触发条件的内容放在这里...
}
```
你应该在 csv 文件中为 `name_of_condition` 添加一个条目，因为当你使用脚本化触发器时它会出现在工具提示中。三个参数条目定义了触发器将测试的内容（你必须选择*一种*可能性）。脚本化触发器只能在其各种参数匹配或脚本化触发器的参数为 `none` 的上下文中使用（你可以将 `none` 视为匹配所有内容）。例如，如果主参数是 `province`，那么你只能在有省份在作用域时评估脚本化触发器。`this_parameter` 和 `from_parameter` 是可选的，可以省略（它们默认为 `none`）。你可以定义多个同名的脚本化触发器，只要它们具有不同的参数类型。当使用具有多个版本的脚本化触发器时，将自动选择适合当前参数的版本。

要使用脚本化触发器，只需在触发器中你希望评估脚本化触发器的任何位置添加 `test = name_of_condition`，它就像你将内容复制到该位置一样工作。我建议你在定义脚本化触发器时不要从其他脚本化触发器内部引用它们。你可以安全地引用同一文件中较早定义的脚本化触发器，但在不同文件之间这样做将使你受文件加载顺序的摆布。

### If/Else

现在提供了 If 和 Else 语句，以避免代码重复并让你的生活更轻松。带有 limit 的 `else` 等同于带有 limit 的 `else_if`，而没有 limit 的 `else_if` 等同于没有 limit 的 `else`。换句话说，`else` 和 `else_if` 本质上是同义词，为代码清晰度而提供。

例如：
```
if = { #如果 limit 为 true 则运行
  limit = { ... }
  ...
} else_if = { #仅当上面的 limit 为 false 且此 limit 为 true 时运行
  limit = { ... }
  ...
} else = { #仅当两种情况都不满足且 limit 为 true 时运行
  limit = { ... }
  ...
}
```

未指定 limit 等同于 `always = yes`。

此外，`if` 和 `else`/`else_if` 语句的执行顺序允许嵌套代码：

```
if = {
	limit = { a = yes }
		money = 1
	if = {
		limit = { b = yes }
		money = 50
	} else {
		money = 100
	}
}
```
这等同于：
```
if = {
	limit = { a = yes b = yes }
	money = 1
	money = 50
} else_if {
	limit = { a = yes }
	money = 1
	money = 100
}
```

此外，语句的否定是隐式的，换句话说：
```
if = {
	limit = { test == yes }
} else {
	limit = { test != yes }
}
```

对于每个 `if` 之后的 `else` 都是隐式假定的，这意味着 `else` 语句不需要显式否定（将所有内容重写在一个大的 NOT 语句中），因为它们现在逻辑上与前文所有语句为假绑定在一起，并且其自身的 limit 为 true。

由于语法的不稳定性，可能存在一个问题：
```
else_if = {
  limit = { ... }
} if = {
  limit = { ... }
}
```

此语句的行为是，由于 `else_if` 之前没有 `if`，`else_if` 将能够像它与一个评估为 false 的 `if` 链式连接一样运行，如果其 limit 评估为 true，那么它将运行自己的效果。然而，另一个 `if` 语句将不管前面的表达式如何都会运行。

由于语句的词典顺序是顺序的，每个 `else_if` 和 `else` 前面必须有一个 `if` 语句，否则它们将链式连接到它们之前最近的* preceding * `if` 语句进行词典评估，否则如果没有，它们将本身充当一个 `if`。

```
else_if = {
  limit = { ... }
} else_if = {
  limit = { ... }
}
```
这些 `else_if` 语句是链式连接的，如果第一个运行，第二个就不会运行，反之亦然。如果它们前面没有 `if`，第一个 `else_if` 将承担 `if` 语句的角色。

## UI 模组制作

### 扩展控件

现在可以向现有窗口控件添加新控件（例如按钮、文本标签等），而无需修改原始文件。要向窗口添加新控件，只需像下面的示例一样定义额外的顶级控件：
```
	guiButtonType = {
		name = "alice_move_capital"
		extends = "province_view_header"
		position = { x= 180 y = 3 }
		quadTextureSprite = "GFX_move_capital"	
	}
```
创建此控件时，它将自动插入到名为 `province_view_header` 的窗口中。这允许你扩展 `.gui` 文件中定义的窗口，而无需编辑该文件。上面的示例来自 `alice.gui`，用于向 `province_interface.gui` 中定义的窗口添加一个按钮，而无需编辑该文件。因此，你的模组可以定义一个新的 `.gui` 文件，在那里添加新控件，并让它们在现有窗口中显示，而不会干扰另一个也想向该窗口添加控件的模组（因为现在两个模组都不必修改*同一个* `.gui` 文件）。

### 可脚本化按钮

当然，添加新按钮如果不能让它们做事情就没有意义了。为了允许你向游戏添加自定义按钮效果，我们引入了两种新的 UI 元素类型：`provinceScriptButtonType` 和 `nationScriptButtonType`。这些按钮的定义方式与 `guiButtonType` 相同，只是它们可以额外接受 `allow` 和 `effect` 参数。例如：
```
	provinceScriptButtonType = {
		name = "wololo_button"
		extends = "province_view_header"
		position = { x= 146 y = 3 }
		quadTextureSprite = "GFX_wololo"
		allow = {
			owner = { tag = FROM }
		}
		effect = {
			assimilate = "yes please"
		}
	}
```

省份脚本按钮的主槽位和 THIS 槽位填充为包含窗口所在的省份，FROM 为玩家国家。国家脚本按钮的主槽位和 THIS 槽位填充为包含窗口所在的国家（如果有），如果没有则为玩家国家，FROM 填充为玩家国家。

allow 触发条件是可选的，用于确定按钮何时启用。如果省略 allow 条件，按钮将始终启用。

这些可脚本化按钮的工具提示将始终显示相关的 allow 条件和 effect。你还可以通过添加一个本地化键来自定义工具提示描述，该键是按钮名称后跟 `_tooltip`。例如，对于上面的按钮，工具提示定义为 `wololo_button_tooltip;Wololo $PROVINCE$`。以下三个变量可用于工具提示：`$PROVINCE$`，它将解析为目标省份，`$NATION$`，它将解析为目标国家或目标省份的拥有者，以及 `$PLAYER$`，它将始终解析为玩家自己的国家。

### 简写的 `.gui` 语法

`size = { x = 5 y = 10 }` 可以写成 `size = { 5 10 }`，大多数期望 x 和 y 对的地方也是如此。
此外，`maxwidth = 5` 和 `maxheight = 10` 可以写成 `maxsize = { 5 10 }`

### .gui 布局扩展

在 GUI 中布局元素可能是一个繁琐的过程，虽然 WYSWYG 编辑器是理想的，但目前不可用。

然而，以下新扩展将使 GUI 编辑变得不那么痛苦：

- `add_size = { x y }`: 将指定量添加到当前 `size`
- `add_position = { x y }`: 将指定量添加到当前 `position`
- `table_layout = { x y }`: 其中 `x` 是列，`y` 是行，这基本上等同于 `position.x = column * size.x` 和 `position.y = row * size.y`。对于以表格方式布局元素很有用

## 游戏规则模组制作

### 新定义

Alice 添加了一些新的定义：

- `factories_per_state`: 每州允许的工厂数，默认 8
- `alice_speed_1`: 速度 1 的毫秒数
- `alice_speed_2`: 同上，但速度 2
- `alice_speed_3`: 同上，但速度 3
- `alice_speed_4`: 同上，但速度 4
- `alice_speed_5`: 同上，但速度 5
- `alice_ai_gather_radius`: AI 将用于集结附近军队以形成死亡堆的半径
- `alice_ai_threat_radius`: AI 扫描威胁的半径
- `alice_ai_threat_overestimate`: 高估 AI 对手（更高的值导致蹲坑）
- `alice_ai_attack_target_radius`: AI 执行攻击的半径
- `alice_full_reinforce`: 1 = 正常原版行为，0 = 允许人员不足的军队
- `alice_ai_offensive_strength_overestimate`: 高估进攻对手的实力（使 AI 不那么激进）
- `alice_lf_needs_scale`: 生活需求的缩放倍数
- `alice_ev_needs_scale`: 日常需求的缩放倍数
- `alice_lx_needs_scale`: 奢侈需求的缩放倍数
- `alice_max_event_iterations`: 递归事件内可能的最大迭代次数，默认情况下为 `8`，所以你只能递归触发 `8` 层深的事件。如果模组制作者希望增加他们的"递归性"，他们可以将此值提高到他们希望的任何值。
- `alice_needs_scaling_factor`: 所有需求的缩放因子乘数
- `alice_base_rgo_employment_bonus`: 主 RGO 的额外 RGO 规模。
- `alice_base_rgo_efficiency_bonus`: 主 RGO 的额外 RGO 效率。
- `alice_factory_per_level_employment`: 每工厂等级的就业人数。
- `alice_domestic_investment_multiplier`: 国内投资的乘数。
- `alice_rgo_boost`: 给予 RGO 的加成（例如，1.2 意味着多产出 120%）
- `alice_inputs_base_factor_artisans`:  Artisan 输入基础因子 + 修正。
- `alice_output_base_factor_artisans`: 参见上文。
- `alice_inputs_base_factor`: 参见上文，针对工厂。
- `alice_rgo_overhire_multiplier`: RGO 的超雇乘数。
- `alice_rgo_production_scale_neg_delta`: RGO 产量的缩放增量。
- `alice_invest_capitalist`: 资本家在私人投资池中投资的预算百分比
- `alice_invest_aristocrat`: 参见上文。
- `alice_needs_lf_spend`: 专门用于生活需求的预算百分比
- `alice_needs_ev_spend`: 参见上文，但针对日常需求
- `alice_needs_lx_spend`: 参见上文，但针对奢侈需求
- `alice_sat_delay_factor`: 满意度延迟因子
- `alice_need_drift_speed`: 人口需求权重的漂移速度
- `alice_disable_divergent_any_country_effect`: 在事件中，`any_country = { ... }` 指任何国家，包括不存在的和作用域内的国家；在决议中，`any_country = { ... }` 仅指现存国家，不包括作用域内的国家。设置为 0 保持此行为，设置为 1 使用通用的 `any_country = { ... }`，作用于现存国家，包括当前作用域内的国家。
- `alice_unciv_civ_forbid_war`: 禁止文明国家援助未开化国家，除非通过脚本化事件
- `alice_ideology_base_change_rate`: 人口意识形态的基础变化率
- `alice_nurture_religion_assimilation`: 宗教同化是否也应该转换人口（0 = 是，1 = 否）
- `alice_surrender_on_cores_lost`: 当 AI 失去其核心时，或如果它没有核心，失去其所有土地时，强制 AI 投降
- `alice_artificial_gp_limitant`: 限制 AI 可以拥有的 GP 盟友数量
- `alice_rename_dont_use_localisation`: 在 `change_region_name` 或 `change_province_name` 上指定的键将被视为 CSV 键，否则它们将以内联方式定义。
- `alice_spherelings_only_ally_sphere`: 势力范围成员只会与他们的势力范围领主结盟。
- `alice_overseas_mil`: 当海外维护为零时，海外省份的斗争性增加。
- `alice_substate_subject_money_transfer`: 百分比 [0;100] 的附属国预算收入转移给宗主国。默认值：30.0
- `alice_puppet_subject_money_transfer`. 百分比 [0;100] 的次国家预算收入转移给宗主国。默认值：40.0
- `alice_privateinvestment_subject_transfer`: 百分比 [0;100] 的附属国和宗主国的私人投资池在没有有用项目时每天转移。宗主国向附属国分配资金，附属国向宗主国贡献。默认值：2.0
- `alice_allow_revoke_subject_states`: 允许宗主国夺取附属国的州，提高他们的斗争性并给予分离主义。默认值：0.0
- `alice_leadership_generation_divisor`: 为了允许战斗产生领导力，被动领导力生成被除以这个值。
- `alice_auto_hire_generals`: 设置为 0.0 以禁用游戏自动雇佣将军和海军上将。
- `alice_allow_factories_in_colonies`: 如果设置为 1，允许在殖民地中建造具有 `can_be_built_in_colonies = yes` 标志的工厂
- `alice_naval_base_to_colonial_distance_factor` (默认 0.04): 1 级海军基地解锁的殖民距离的公式中的乘数。
- `alice_always_available_cbs_zero_infamy` - 如果设置为 0，则具有 `always = yes` 的 CB 的恶名成本将按照 `badboy_factor` 计算。
- `alice_max_starvation_degrowth` - 饥饿人口（低于 life_need_starvation_limit）的最大可能人口增长惩罚，当满足度达到 0% 时达到此最大值。此惩罚不会被其他人口增长科技和修正覆盖，因此完全饥饿的人口至少会有这个负增长。
- `alice_can_add_constructable_cbs_as_wargoals` - 如果设置为零，则不能将可构建（但未构建）的 CB 作为战争目标添加到正在进行的战争中。
- `alice_render_on_map_generals` - 如果非零，则 `top_unit_icon` GUI 的 `map_general` 元素将使用地图上的将军图标渲染
- `alice_economy_presim_days` - 创建场景时经济将预模拟的天数，以便经济在开始日期有一个良好的基础。将此值设置得更高会增加场景创建时间。
- 

**危机和会议：**
- `alice_crisis_necessary_base_win_ratio = 2.5f`: 在温度 80 之后 AI 屈服于要求所需的力量比率
- `alice_crisis_necessary_base_fast_win_ratio = 3.5f`: 在温度 80 之前 AI 屈服于要求所需的力量比率
- `alice_crisis_per_wg_ratio = 0.1f`: 每个 WG 增加的必要比率

**军事：**

这些与预备团在战斗中补充的能力有关。

- `alice_reg_move_to_reserve_org = 0.1f`: 如果团在战斗中的组织度低于此小数，它将被从前线撤出并移至预备队。默认值：1.0
- `alice_reg_move_to_reserve_str = 0.0f`: 如果团在战斗中的兵力等于或小于此小数，它将被从前线撤出并移至预备队。默认值 0.0
- `alice_reg_deploy_from_reserve_org = 0.1f`: 如果预备团的组织度等于或高于此小数，它可以被部署到前线，如果 alice_reg_deploy_from_reserve_str 也得到满足。默认值 0.1
- `alice_reg_deploy_from_reserve_str = 0.0f`: 如果预备团的兵力大于此小数，它可以被部署到前线，如果 alice_reg_deploy_from_reserve_org 也得到满足。默认值 0.0


这些与战斗有关：
- `alice_naval_combat_enemy_stacking_target_select_bonus = 0.5f`: 在战斗中处于劣势的舰船获得的目标选择加成。这被添加到默认为 0.5 的基础值上。它使处于劣势的海军更快地找到目标
- `alice_naval_combat_stacking_damage_penalty = 0.5f`: 对以 define:NAVAL_COMBAT_MAX_TARGETS 或更多数量超过敌方的舰队施加的最大组织和兵力伤害减免。当一方处于劣势时，惩罚将开始缩放，当劣势达到 NAVAL_COMBAT_MAX_TARGETS 倍时达到给定值。
- `alice_fort_mil_tactics_discipline_per_level = 0.1f`: 防守时每级堡垒对军事战术和纪律的修正。
- `alice_combat_min_dice_roll = 0.0f`: 战斗中可以掷出的最小骰子点数（包含）
- `alice_combat_max_dice_roll = 9.0f`: 战斗中可以掷出的最大骰子点数（包含）

这些与陆军损耗有关
- `alice_army_sea_transport_attrition = 2.5f`: 海上运输中陆军每月承受的损耗（百分比）。可以通过国家 "land_attrition" 修正来减少
- `alice_fort_siege_attrition_per_level = 0.35f`: 围攻省份的陆军每级堡垒的额外损耗（百分比），与基础围攻损耗叠加。
- `alice_attrition_war_exhaustion = 1.5`: 从承受损耗损失中获得战争疲劳的乘数。工作原理类似于 "COMBATLOSS_WAR_EXHAUSTION" 定义，但针对的是损耗损失。设置为 0 以禁用所有损耗战争疲劳。


这些与单位移动有关
- `alice_army_marching_hours_per_day = 5.0f`: 陆军平均每天行军的小时数。实际上这是陆军 km/小时 统计数据的乘数，决定一支军队在一天内可以移动多远
- `alice_navy_sailing_hours_per_day = 20.0f`: 海军平均每天航行的小时数。实际上这是海军 km/小时 统计数据的乘数，决定一支海军在一天内可以航行多远
正如上述定义所暗示的，就单位移动而言，省份之间的距离现在以公里为单位测量，并直接映射到 km/小时 统计数据。
- `strategic_redeployment_speed_modifier = 1.3f`: 战略重新部署特殊军队命令的基础速度增加
- `strategic_redeployment_infrastructure_factor = 1.0f`: 基础设施对战略重新部署特殊军队命令速度增加的影响因子


这些与占领有关
- `alice_fort_siege_slowdown = 0.75f`: 省份每级堡垒对围城速度的减缓修正。0.75 = 每级堡垒需要多花基础围城时间 75%。0.75 是默认原版值
- `alice_rebel_reduction_after_reoccupation = 7.0f`: 当叛军省份被拥有者重新占领时，所有属于控制叛军派系的人口的斗争性将被除以这个数值


这些与游戏规则有关

- `alice_can_goto_war_against_spherelord_default_setting = 1.0f` - 设置硬编码游戏规则的默认值，决定势力范围成员是否可以直接或间接对其势力范围领主宣战。可以是 1（意味着他们可以对势力范围领主宣战），或 0（意味着他们不能）。默认是 1
- `alice_fog_of_war_default_setting = 1.0f` - 设置硬编码游戏规则的默认值，决定战争迷雾是开启还是关闭。1.0 意味着战争迷雾开启，0.0 意味着关闭，2.0 时仅对观察标签禁用
- `alice_auto_concession_peace_default_setting = 1.0f` - 设置硬编码游戏规则的默认值，决定在敌人割让所有战争目标（或和平协议割让 100 战争分数或更高）时，和平协议是否会被强制接受。1.0 意味着强制和平被禁用，0.0 意味着启用。
- `alice_command_units_default_setting = 0.0f` - 决定 AI 附庸国的单位在战争中是否可以由玩家指挥。值为 0.0f 意味着禁用，值为 1.0f 意味着启用

### 基于政党议题的改革支持

在 issues.txt 中，你可以在政党议题部分中为任何特定议题选项添加 `vote_modifiers = { ... }` 部分。例如，你可以在这里这样做：
```
party_issues = {
	trade_policy = {
		protectionism = {
			vote_modifiers = { ... }
		...
```
在 `vote_modifiers` 部分内，可以为属于社会或政治问题的改革选项定义一个或多个修正。（这些修正与意识形态文件中的 `add_political_reform` 修正共享相同格式。与那些修正一样，它们是加法计算的，并且像那些修正一样，在其主要和 THIS 作用域中包含国家。）例如，你可以添加如下内容（注意作为示例它不太合理，但无所谓）。
```
		trinket_health_care = {
			base = 1
			modifier = {
				factor = -1
				NOT = { ruling_party_ideology = fascist }
			}
		}
```
当这些修正存在时，游戏将首先尝试使用该意识形态的活跃政党（如果有多个这样的政党，将任意选择一个用于此目的）的活跃议题选项相关的修正，而不是使用意识形态的通用添加/移除政治/社会改革修正来确定对特定改革选项的支持。这将完全覆盖通用的添加/移除改革修正，允许政党-意识形态组合即使在通常普遍反对（或支持）该类别所有改革时，也能支持（或反对）特定改革。

### 政党改革支持覆盖

以前在政党定义中可以插入诸如 `economic_policy = laissez_faire` 的行来定义该政党将拥有的特定政党议题。这已经得到扩展，因此任何政治或社会改革类别和选项都可能出现在那里。例如，以下政党描述中的 `pensions = good_pensions` 现在是有效的

```
party = {
	name = "ENG_liberal"
	start_date = 1830.1.1
	end_date = 1859.1.1

	ideology = liberal

	economic_policy = laissez_faire
	trade_policy = free_trade
	religious_policy = pluralism
	citizenship_policy = limited_citizenship
	war_policy = anti_military
	
	pensions = good_pensions
}
```

这意味着该政党将始终支持该类别中的该特定改革（或如果该类别只能逐步更改，则支持最接近的改革），并且它将不支持该类别中的任何其他改革。这将覆盖通过意识形态或上述扩展支持权重产生的任何其他偏好。

### 政党触发器

现在除了通常的 `start_date` 和 `end_date` 之外，你还可以打开/关闭政党。请记住，政党可以在国家之间共享，并且像其他模板类型一样，你希望应用此功能的标签需要在其国家文件中有一个 'template = "test.txt"' 条目。

```
party = {
	name = "default_fascist_military_junta"
	start_date = 1836.1.1 #也是触发器检查的一部分
	end_date = 2000.1.1 #同上
	ideology = fascist
	#[...]
	#示例触发器！
	trigger = {
		war = yes
		nationalism_n_imperialism = 1
	}
}
```

### 额外的 on-actions

- `on_election_started`: 选举开始时
- `on_election_finished`: 选举结束时

## 新数据格式

### 密集 CSV 人口列表

这是一个扩展，允许你使用 CSV 文件而不是手动编写人口脚本，这允许你在电子表格程序中编辑人口文件，例如：

```
province-id;size;culture;religion;pop-type;rebel-faction(optional)
825;100;albanian;orthodox;clergymen;jacobin
825;150;albanian;orthodox;aristocrats;jacobin
825;744;albanian;orthodox;capitalists;jacobin
825;4019578;albanian;orthodox;farmers;jacobin
...
```

这允许处理更大量的数据，同时保持可读性、可编辑性，最重要的是：能够在您喜欢的办公电子表格程序上编辑。

在你的模组中使用这个很简单，创建一个以 `.csv` 结尾的文件，例如 `Africa.csv`，Alice 将* alongside *其他文件一起加载它，甚至是 `.txt` 文件，如果你想混合使用，你绝对可以，只需记住 `history/pops/yyyy.mm.dd` 中的每个文件都会被加载，所以请注意这一点。

### 密集 CSV 省份历史

有时拥有太多省份历史文本文件会使文件处理变得痛苦，或者用太多省份文件搞乱压缩算法。

冗余数据是文件大小的敌人，而且，虽然大多数省份历史文件不占太多空间，但加载它们仍然是好的：

```
province-id;owner;controller;core;trade_goods;life_rating;colonial;slave;
142;RPL;RPL;RPL;coal;31;1;0;
```

与 POP CSV 格式类似。CSV 文件将在历史文件夹中**首先**加载，这意味着你可以混合使用 CSV 和文本文件以实现更大的粒度。例如当涉及多个核心时。

### 国家模板

这允许为国家和其他常用文件消除大量复制粘贴。

```
template = "test.txt"
```

其中 `test.txt` 将位于 `common/templates/test.txt`。

这作为一个通用的"复制粘贴"宏使用，因此你可以在其中放置任何对国家文件有效的内容，只要它是根级别的东西（即你不能在姓氏列表中指定模板）。

### 新事件替换

**仅事件：**

- `$POP$`: `THIS` 的总人口。
- `$FROMCONTINENT$`: `FROM` 的大陆。
- `$FROMCAPITAL$`: `FROM` 的首都。
- `$GOOD$`, `$RESOURCE$`: 省份 `THIS` 生产的商品。
- `$NUMFACTORIES$`: 州 `THIS` 的工厂数。
- `$FROMRULER$`: 等同于 `$MONARCHTITLE$`，但针对 `FROM`
- `$FOCUS$`, `$NF$`: 州 `THIS` 的国家焦点。
- `$TEMPERATURE$`: 危机的当前温度。
- `$TERRAIN$`: 省份 `THIS` 的地形名称。
- `$FROMSTATENAME$`: `FROM` 的州名。
- `$FACTORY$`: 省份 `THIS` 的工厂名称。
- `$DATE$`: 事件触发的日期。
- `$CONTROL$`: 当前控制省份 `THIS` 的国家。
- `$OWNER$`: 拥有省份 `THIS` 的国家。

如果 THIS/FROM 是国家，州和省份从首都推导。
如果 THIS/FROM 是州，国家从拥有者推导，省份从州首府推导。
如果 THIS/FROM 是省份，国家从拥有者推导，州从它所属的状态推导（但它只会选择拥有者的州实例）。

例如，Nejd 和 Hedjaz 共享州 ENG_1，FROM 位于 Nejd 在 ENG_1 上拥有的省份，那么该州将指 Nejd 拥有的州，而不是 Hedjaz 拥有的州。

**决议和事件：**

- `$GOVERNMENT$`: `THIS` 的政府名称。
- `$IDEOLOGY$`: `THIS` 执政党的意识形态名称。
- `$PARTY$`: `THIS` 的政党名称。
- `$INFAMY$`, `$BADBOY$`: 当前恶名。
- `$SPHEREMASTER$`: `THIS` 的势力范围主人。
- `$OVERLORD$`: `THIS` 的宗主国。
- `$NATIONALVALUE$`: `THIS` 的国家价值观名称。
- `$CULTURE_FIRST_NAME$`: 随机生成的名字，属于 `THIS` 的主流文化。
- `$CULTURE_LAST_NAME$`: 随机生成的姓氏，属于 `THIS` 的主流文化。
- `$TECH$`: 当前研究的科技。
- `$NOW$`: 当前日期。
- `$ANYPROVINCE$`: 该国家拥有的任何（随机）省份。

决议现在可以使用危机替换：`$CRISISTAKER$`、`$CRISISTAKER_ADJ$`、`$CRISISATTACKER$`、`$CRISISDEFENDER$`、`$CRISISTARGET$`、`$CRISISTARGET_ADJ$` 和 `$CRISISAREA$` - 此外，它们可以使用 `$CULTURE$`、`$CULTURE_GROUP_UNION$`、`$UNION_ADJ$` 和 `$COUNTRYCULTURE$`，工作方式与它们的事件对应物相同。

**新的危机替换：**

- `$CRISISTAKER_CAPITAL$`: 解放标签的首都。
- `$CRISISTAKER_CONTINENT$`: 解放标签的大陆，基于首都。
- `$CRISISATTACKER_CAPITAL$`: 攻击者的首都。
- `$CRISISATTACKER_CONTINENT$`: 攻击者的大陆，基于首都。
- `$CRISISDEFENDER_CAPITAL$`: 防御者的首都。
- `$CRISISDEFENDER_CONTINENT$`: 攻击者的大陆，基于首都。

**新的修正描述替换**

- `$COUNTRY$`: 修正所属的国家。
- `$COUNTRY_ADJ$`: 修正所属国家的形容词。
- `$CAPITAL$`: 修正所属国家的首都。
- `$CONTINENTNAME$`: 修正的大陆（如果是国家修正，则使用首都作为参考）。
- `$PROVINCENAME$`: 修正的省份（如果是国家修正，则使用首都作为参考）。

### 政府统治者名称

现在你可以为特定国家定义特定政府类型的统治者名称，例如：

```
RUS_absolute_monarchy;The Russian Empire
RUS_absolute_monarchy_ruler;Tsar
```

### 本地 RGO 生产多种商品的定义

由于 RGO 可以生产一整批商品，你可以为特定省份定义自己的分布：

示例 (`history\provinces` 文件)：
```
rgo_distribution = {
	entry = {
        trade_good = silk
        max_employment = 100000
	}
    entry = {
        trade_good = opium
        max_employment = 100000
	}
}
```

要在不覆盖由气候、地形和主要 trade_goods 生成的条目的情况下添加一些 RGO 条目，请使用 `rgo_distribution_add_`。

```
rgo_distribution_add = {
    entry = {
        trade_good = coal
        max_employment = 100000
	}
}
```

### 工厂潜力

工厂潜力（例如资源潜力）是一个允许模组制作者限制每个省份（州）工厂数量的功能。

要将工厂创建限制为具有相应商品潜力的州，商品定义必须具有 `uses_potentials = yes`。

在省份历史文件中如下定义限制：
```
factory_limit = {
	entry = {
        trade_good = iron
        max_level = 16
	}
}
```

要在运行时更改限制，请使用效果。自 v1.2.3 起，减少工厂限制没有实现检查：
```
change_factory_limit = {
    trade_good = rubber
    value = 15
}
```


## 宗教

国家宗教可以像下面这样给予国家修正：

```
shinto = {
		color = { 0.8 0 0 }
		icon = 12

		nation_modifier = {
			education_efficiency = 0.05
		}
	}
```

## 游戏规则

可切换的自定义游戏规则可以在 `common` 文件夹内的 `gamerules.txt` 文件中定义。如果你没有游戏规则文件，那么创建一个。
每个游戏规则的选定选项存储在存档中，因此在游戏启动之间保持持久。

游戏规则定义如下：

```
scripted_gamerule = {
	name = "test_gamerule"
	option = {
		name = "test__gameruleopt_1"
		on_select = "opt1_on_select"
		on_deselect = "opt1_on_deselect"
	}
	option = {
		name = "test__gameruleopt_2"
		default_option = yes
		on_select = "opt2_on_select"
		on_deselect = "opt2_on_deselect"
	
	}
}
```

`name` 成员是该游戏规则的唯一字符串标识符，是必需的。两个或更多游戏规则不能具有相同的名称。
本地化键与名称相同（在此情况下为 test_gamerule）。游戏规则的描述（显示在工具提示中）的本地化键是名称加 _desc。因此此游戏规则的描述本地化键将是 `test_gamerule_desc`。

每个游戏规则可以有一个或多个选项。每个选项也有一个必需的 `name` 成员，其工作方式与游戏规则本身的名称类似（只是每个选项没有描述本地化键，只有名称本地化键）。每个选项名称键是全局唯一的。

接下来是 `default_option` 成员。这只是指示在新建存档时默认选择哪个选项。

最后是 `on_select` 和 `on_deselect` 成员。这些描述了当选中/取消选中相应选项时应运行的 lua 函数的名称。函数应以 "alice" 前缀开头，并接受一个参数，即被更改的游戏规则的数值 ID。
例如，在前面的示例中，如果选中了 `"test_gameruleopt_2"`，将运行名为 `alice.opt2_on_select` 的函数。

你还可以直接在触发器中检查游戏规则的状态，使用以下触发器：

```
check_gamerule = {
	gamerule = "test_gamerule"
	option = "test_gameruleopt_1"
}_
```
这里，它评估名称为 `test_gamerule` 的游戏规则是否设置为名称为 `test_gameruleopt_1` 的选项。
游戏规则也可以在 lua 代码中检查，通过调用 `GAMERULE.check_gamerule_option_by_name` 或 `GAMERULE.check_gamerule_option_by_id`。

还有一些与基础游戏玩法直接交互的硬编码游戏规则，它们不存在于 gamerules.txt 文件中。这些也可以用 `check_gamerule` 触发器检查其选定选项。下面是硬编码游戏规则的名称及其选项列表：

- `alice_gamerule_allow_sphereling_declare_war_on_spherelord`: 检查势力范围成员是否可以直接或间接对其势力范围领主宣战的游戏规则名称。
	- `alice_gamerule_allow_sphereling_declare_war_on_spherelord_opt_no`: 否选项。
	- `alice_gamerule_allow_sphereling_declare_war_on_spherelord_opt_yes`: 是选项。

- `alice_gamerule_allow_partial_retreat`: 启用/禁用部分撤退的游戏规则名称。
	- `alice_gamerule_allow_partial_retreat_opt_disabled`: 禁用选项
	- `alice_gamerule_allow_partial_retreat_opt_enabled`: 启用选项。

- `alice_gamerule_fog_of_war`: 启用/禁用战争迷雾的游戏规则名称
	- `alice_gamerule_fog_of_war_opt_disabled`: 禁用战争迷雾选项
	- `alice_gamerule_fog_of_war_opt_enabled`: 启用战争迷雾选项
	
- `alice_gamerule_auto_concession_peace`: 在敌人割让所有战争目标的情况下启用/禁用自动和平的游戏规则名称
	- `alice_gamerule_auto_concession_peace_opt_cannot_reject`: 自动和平启用选项
	- `alice_gamerule_auto_concession_peace_opt_can_reject`: 自动和平禁用选项

- `alice_gamerule_command_units`: 启用/禁用在战争中指挥 AI 附庸国军队的游戏规则名称
    - `alice_gamerule_command_units_opt_disabled`: 禁用选项
    - `alice_gamerule_command_units_opt_disabled`: 启用选项
