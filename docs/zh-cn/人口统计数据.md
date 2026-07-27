## 人口统计数据

每个人口（pop）存储了许多关于其偏好的议题和意识形态的数值。这些通常被称为该人口的统计数据。这些数值，连同关于各种文化、宗教、人口类型和就业普遍程度的信息，然后在省份、州和国家层面进行汇总，以便快速查阅。

每个人口统计数据源都存储在相应对象的 `demographics` 属性中。 demographics 属性本身是一个浮点数组，每个索引对应一段不同的人口统计信息。每个值对应于属于该类别人口的数量。这意味着，如果你想计算一个州中持有特定意识形态的人口比例，你需要将该意识形态的 demographics 值除以包含该州总人口的 demographics 值。

### 人口（Pop）统计

人口的统计数据集比省份、州和国家的要有限。这部分是因为每个人口只有一种文化、宗教和类型，因此追踪这些信息将是多余的。单个人口只附加了两种人口统计信息：支持特定意识形态的人数和支持特定议题立场的人数。要检索这些值，你首先需要将所需的意识形态或议题立场转换为人口统计索引。这是通过 `pop_demographics` 命名空间中的 `to_key(sys::state const& state, dcon::ideology_id v)` 和 `to_key(sys::state const& state, dcon::issue_option_id v)` 函数完成的（在 `demographics.hpp` 中声明）。使用返回的键，你可以通过如下代码获取你感兴趣的信息：`state.world.pop_get_demographics(pop_id, demographics_key)`。

### 省份、州和国家统计

其他人口统计数据源更加多样化。首先，有六个固定的人口统计索引，它们作为 `contexpr` 常量存储在 `demographics` 命名空间中：

- `total` - 包含给定实体中人口的总数（即各人口规模的总和）
- `employable` - 包含可以从事*某种*工作的总人口数。并非所有人口类型都是可就业的，因此这通常小于 `total`
- `employed` - 包含目前有工作的可就业人口总数。该值与 `employable` 的比率用于计算失业率等
- `consciousness` - 包含给定实体中人口的觉醒度乘以人口规模的总和。你必须除以 `total` 才能找到平均觉醒度。
- `militancy` - 同上，但用于人口斗争性
- `literacy` - 同上，但用于人口识字率
- `political_reform_desire` - 衡量对实施某项政治改革的支持程度（与其他值一样，在大多数情况下你需要除以 `total` 来归一化）。
- `social_reform_desire` - 同上，但用于实施某项社会改革

然后，除了固定的人口统计索引之外，还有支持特定意识形态或议题立场的人口数量的索引，就像在人口统计中一样，但除此之外，还有用于特定人口类型、文化或宗教的人口数量的索引。与人口统计一样，可以使用 `demographics` 命名空间中的以下函数之一来检索这些值的索引：

- `to_key(sys::state const& state, dcon::ideology_id v)`
- `to_key(sys::state const& state, dcon::issue_option_id v)`
- `to_key(sys::state const& state, dcon::pop_type_id v)`
- `to_key(sys::state const& state, dcon::culture_id v)`
- `to_key(sys::state const& state, dcon::religion_id v)`
