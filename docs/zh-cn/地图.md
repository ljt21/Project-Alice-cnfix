## 地图

`map::display_data` 很大程度上是自包含的。它只处理地图移动和地图渲染。地图使用 [glm](https://github.com/g-truc/glm) 进行相机移动，这可能是项目中唯一使用 glm 的地方。

地图使用两个网格，一个用于水域，一个用于陆地。水域使用 `assets/shader/map_water_f.glsl` 着色器
地图使用两个片段着色器，`map_water_f.glsl` 用于水域，`map_f.glsl` 用于地形。它们位于 `assets/shader` 目录中。每个着色器都在各自的网格上渲染，分别是 `water_vbo` 和 `land_vbo`。之后将为边界和海岸线设置单独的着色器和网格。

### 地图接口

以下函数用于与地图进行交互：

- `map_display::load_map(sys::state&)` -- 从磁盘加载地图。它只应在启动时调用一次。它会加载所有纹理和着色器，同时创建网格。
- `map_display::render(uint32_t screen_x, uint32_t screen_y)` -- 既渲染地图又更新地图移动。
- `map_display::set_province_color(std::vector<uint32_t> const& prov_color)` -- 更改省份颜色。`prov_color` 向量包含每个省份的新颜色，其大小需要与省份数量相同。
- `map_display::set_pos(glm::vec2 pos)` -- 将相机位置设置为 `pos`。向量坐标是相对的，范围从 0 到 1。

以下是输入事件函数：

- `map_display::on_key_down(sys::virtual_key keycode, sys::key_modifiers mod)` -- 在按键时被调用，使用方向键移动相机。
- `map_display::on_key_up(sys::virtual_key keycode, sys::key_modifiers mod)` -- 在按键释放时被调用。`map_display` 会存储按键状态，直到按键释放才会停止移动相机。
- `map_display::on_mouse_wheel(int32_t x, int32_t y, sys::key_modifiers mod, float amount)` -- 在鼠标滚轮滚动时被调用以缩放地图。
- `map_display::on_mouse_move(int32_t x, int32_t y, int32_t screen_size_x, int32_t screen_size_y, sys::key_modifiers mod)` -- 在鼠标移动时被调用。用于在中键按下时拖动地图。
- `map_display::on_mbuttom_down(int32_t x, int32_t y, int32_t screen_size_x, int32_t screen_size_y, sys::key_modifiers mod)` -- 在中键按下时被调用。开始拖动地图。
- `map_display::on_mbuttom_up(int32_t x, int32_t y, sys::key_modifiers mod)` -- 在中键释放时被调用，停止拖动地图。

### 进一步的目标

未来的目标主要是重现维多利亚 2 的图形效果。我们唯一新增的内容是地球仪和一些维多利亚 2 没有的额外优化。这些目标包括：

- 海岸线：将与边界的工作原理非常相似，但将使用海岸纹理
- 河流：也与边界和海岸非常相似，只是解析会稍微困难一些，因为需要考虑水流方向。
- 地球仪：这是维多利亚 2 没有的新功能。OpenV2 有它，所以这里也必须有，而且非常酷！我们在创建地球仪时可能会使用 SoE 的实现。
- 更平滑的地图移动：这在缩放和移动时会产生很大影响，但必须正确实现，否则感觉会比没有平滑移动更糟糕。
- 使用多线程优化地图解析：目前这不是很重要，但会大大加快解析速度。
- 为缺失或损坏的文件添加错误处理：当加载文件出现问题时，应该能够报告错误并退出应用程序。这可以通过向 `load_map` 函数传递一个错误对象来实现。

### 数据容器中的省份邻接关系 (state.world)

数据容器存储了一种关系，你可以将其用作无序省份 ID 对到边界和距离数据的映射。地图创建过程应负责填充这些信息。我建议在遇到两个具有不同省份 ID 的相邻地图图块时，调用 `state.world.try_create_province_adjacency(first_province_id, second_province_id);`。如果该邻接关系尚不存在，这将添加一个新的邻接关系。然后你需要读取 `map/adjacencies.csv` 文件。只有前 3 列对我们重要。前两列是要连接的省份 ID，第三列是连接类型。对于 `sea` 类型连接，调用 try create 只有在该连接尚不存在时才会返回有效 ID。如果不存在，你可以知道这些省份之前并不相邻，并为该连接设置 `non_adjacent_bit`（见下文）。对于那些标记为 `impassable` 的连接，我建议使用 `force_create_province_adjacency`，它总是会返回一个邻接关系的句柄，并设置 `impassible_bit`。最后，`canal` 的处理方式与 `sea` 类型连接非常相似，只是你还应该设置 `impassible_bit` 以表示该运河在游戏开始时未激活。

对于每个邻接关系，一个 `uint8_t` 存储该关系的类型，作为一系列独立的位。这些位的常量可以在 `constants.hpp` 中找到，它们是
```
province::border::state_bit
province::border::national_bit
province::border::coastal_bit
province::border::impassible_bit
province::border::non_adjacent_bit
province::border::river_crossing_bit
```
除了上述已描述的位之外，当相邻省份属于不同的州时，应设置 `state_bit`；当它们属于不同的国家时，应设置 `national_bit`；当两个省份中心点之间（或质心，无论你用什么）的连线穿过河流时，应设置 `river_crossing_bit`；当其中一个是海域省份而另一个是陆地时，应设置 `coastal_bit`。`state_bit` 和 `national_bit` 之外的位应在加载地图时设置；这两个位依赖于正在并行加载的数据，将在稍后阶段设置。这些字节以与 `province_adjacency_id` 索引相同的顺序连续存储。要获取存储它们的数组指针，你可以这样做 `uint8_t* buffer = &(state.world.province_adjacency_get_type(dcon::province_adjacency_id(0)));`。（是的，我知道这很丑，但在典型情况下你不应该需要以这种方式直接访问。）

如果你有一个 `province_adjacency_id` 并且想要获取它连接的两个省份，你必须调用 `id.get_connected_provinces(0)` 和 `id.get_connected_provinces(1)`（你不应该依赖通过这种方式从关系中获取省份 ID 的顺序。

如果你想走另一条路，获取两个省份 ID 之间的邻接关系，你可以调用 `state.world.get_province_adjacency_by_province_pair(p1, p2)`，如果这两个省份不相邻，它将返回一个无效句柄。

最后，省份之间的距离也存储在这里，但**不要**试图在此时设置它们（尽管最终这可能是地图加载的一部分）。进行正确的距离计算需要调用 `acos`，我们需要实现一个该函数的自定义版本，以确保每个人都能得到相同的结果。
