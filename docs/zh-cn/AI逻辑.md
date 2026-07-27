## AI 逻辑

### 估算

- `float estimate_strength(sys::state& state, dcon::nation_id n)` -- 仅估算该国本身、附庸和属国的实力（不包括盟友）。
- `float estimate_defensive_strength(sys::state& state, dcon::nation_id n)` -- 估算如果我们与之交战将遇到的防御力量（该国加上盟友的联合力量）。
- `float estimate_additional_offensive_strength(sys::state& state, dcon::nation_id n, dcon::nation_id target)` -- 估算相对于目标的额外进攻力量。

## AI 单位移动和建造设施

### 一般

`void remove_ai_data(sys::state& state, dcon::nation_id n)`：
运行此函数时，将移除给定国家与单位相关的所有 AI 控制信息。当玩家控制一个国家时，必须运行此函数。否则，为特定单位设置的 AI 行为可能会继续运行并导致单位在玩家未给出命令的情况下行动。

`void daily_cleanup(sys::state& state)`：
必须每天运行。移除 AI 合并操作可能留下的空陆军和海军。（这允许合并可以由国家并行完成，因为来自不同国家的军队不能合并。

`void general_ai_unit_tick(sys::state& state)`：
运行下面描述的各种函数，向空闲单位发布新命令。

### 海军 AI

`void update_ships(sys::state& state)`：
此函数负责删除属于 AI 控制国家的过时船只。此函数遍历所有国家，但只删除属于 *未* 在战争中的 AI 国家的船只。

`void build_ships(sys::state& state)`：
此函数填充 AI 控制国家的船只建造队列。目前正在建造一艘或多艘船的国家将被跳过。AI 将至少建造 10 艘运输船或 1/3 的舰队上限，以较大者为准。然后它将把剩余舰队上限的一半用于小船，一半用于大船。

`dcon::province_id get_home_port(sys::state& state, dcon::nation_id n)`：
内部函数。找到距离首都最近、等级最高的港口省份。AI 海军在没有活跃任务时将使用此港口作为返回的基地。

`void refresh_home_ports(sys::state& state)`：
为每个活着的 AI 国家设置母港。需要在场景加载时运行，并且理想情况下，在每个 tick 时运行。

`bool navy_needs_repair(sys::state& state, dcon::navy_id n)`：
内部函数。用于检查海军是否应该留在港口恢复实力。

`bool naval_advantage(sys::state& state, dcon::nation_id n)`：
内部函数。用于猜测海军离开港口是否安全。

`void send_fleet_home(sys::state& state, dcon::navy_id n)`：
内部函数。主要用作当某些东西中断其活动时"恢复"舰队的一种方式。尝试将其送往母港并卸载所有运输的陆军，以便为新行动做好准备。

`bool set_fleet_target(sys::state& state, dcon::nation_id n, dcon::province_id start, dcon::navy_id for_navy)`：
内部函数。用于在试图进行海战时，每次两个省份地向另一支舰队引导一支舰队。

`void unload_units_from_transport(sys::state& state, dcon::navy_id n)`：
内部函数。当运输船到达目的地海岸但无法停靠时使用。尽可能为所有运输单位规划前往其目的地的路径。

`bool merge_fleet(sys::state& state, dcon::navy_id n, dcon::province_id p, dcon::nation_id owner)`
内部函数。尝试将舰队的内容转移到同一国家拥有的、位于同一省份的另一支非空舰队。将现有海军本身留在后面，空。

`void pickup_idle_ships(sys::state& state)`：
此函数用于为完成前一个任务的舰队分配新任务。它还找到新建造的船只并尝试将其合并到主力舰队中。运行此函数的频率越高，舰队对当前情况的响应就会越快。

### 陆军 AI

`void distribute_guards(sys::state& state, dcon::nation_id n)`：
内部函数。此函数尝试将当前无任务的陆军（守卫）分布在一个国家控制的省份中，优先于敌对边界、正常边界等。此函数 *不会* 实际移动任何单位甚至给它们命令。相反，它给每个单位一个应该站立的省份。其他函数会将空闲军队移回这些位置。此函数可能代价较高；不应运行太频繁。

`void make_defense(sys::state& state)`：
对所有国家并行执行上述操作的公共函数

`void move_idle_guards(sys::state& state)`：
此函数获取被分配为守卫且当前未做任何事的单位，并尝试将它们规划到其分配的省份。无法规划路径的单位被标记为运输

`void update_naval_transport(sys::state& state)`：
此函数获取试图被运输的单位，并尝试将它们移动到任何等待的舰队上（如果可能）。这处理守卫运输和进攻运输。这不移动船只。使装载的船只开始移动是海军单位 AI 的一部分。

`bool army_ready_for_battle(sys::state& state, dcon::nation_id n, dcon::army_id a)`：
内部函数。测试第一个兵团的组织度，以估算军队是否可以用于进攻。

`void gather_to_battle(sys::state& state, dcon::nation_id n, dcon::province_id p, float sorting_distance_limit)`：
内部函数。在往返移动距离限制内，聚集所有非移动军队以增援战斗。

`void assign_targets(sys::state& state, dcon::nation_id n)`：
内部函数。决定攻击目标，向攻击者群体下达集结命令，使其从单个省份出发。运行此函数的频率越高，AI 发起攻击时就越具侵略性。

`void make_attacks(sys::state& state)`：
对所有国家并行执行上述操作的公共函数

`void move_gathered_attackers(sys::state& state)`：
向当前未移动的进攻单位下达移动命令（如果攻击结束则将它们移回守卫状态）。还负责为无法通过陆地到达目标的单位安排运输。

`void update_land_constructions(sys::state& state)`：
`build_ships` 的陆军版本。试图平衡前线与后线单位。

`void new_units_and_merging(sys::state& state)`：
处理为"新"单位分配基础 AI 活动类型。向新单位下达移动命令以尝试形成 10 个堆叠。当它们到达时，将此类单位合并到适当的军队中。

TODO: 增援战斗
