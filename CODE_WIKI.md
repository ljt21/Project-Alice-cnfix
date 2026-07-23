# Project Alice 中文修正版 - Code Wiki 文档

## 目录

1. [项目概述](#项目概述)
2. [整体架构](#整体架构)
3. [核心模块详解](#核心模块详解)
4. [关键类与函数说明](#关键类与函数说明)
5. [依赖关系](#依赖关系)
6. [构建与运行](#构建与运行)
7. [数据结构设计](#数据结构设计)
8. [脚本系统](#脚本系统)

---

## 项目概述

### 项目简介

Project Alice 是 Open V2 代码库的延续与重写，旨在创建一个完整的 Victoria 2 游戏克隆。本项目（Project-Alice-cnfix）致力于实现 Project Alice 的中文化工作，提供一个可运行的开源策略游戏引擎。

**核心特性：**
- 完整的战略游戏模拟引擎
- 基于 C++20 的高性能实现
- 支持 Windows 和 Linux 平台
- 支持多人联机对战
- Lua 脚本扩展支持
- 现代化的图形渲染引擎

### 许可证

- 代码部分：GPL3 许可证
- 美术资源：待定（建议 Creative Commons）

---

## 整体架构

### 架构概览

Project Alice 采用分层架构设计，主要分为以下几个层次：

```
┌─────────────────────────────────────────────┐
│           用户界面层 (GUI Layer)              │
│  - 图形界面元素                               │
│  - 事件处理                                   │
│  - 渲染管理                                   │
└─────────────────────────────────────────────┘
                    ↓
┌─────────────────────────────────────────────┐
│         游戏逻辑层 (Game Logic Layer)        │
│  - 游戏状态管理                               │
│  - 命令系统                                   │
│  - 通知系统                                   │
└─────────────────────────────────────────────┘
                    ↓
┌─────────────────────────────────────────────┐
│       游戏系统层 (Game Systems Layer)        │
│  - 经济系统  - AI系统                        │
│  - 军事系统  - 外交系统                      │
│  - 政治系统  - 人口系统                      │
└─────────────────────────────────────────────┘
                    ↓
┌─────────────────────────────────────────────┐
│         基础设施层 (Infrastructure)          │
│  - 地图系统  - 网络通信                      │
│  - 文件系统  - 资源管理                      │
└─────────────────────────────────────────────┘
```

### 核心设计理念

1. **性能优先**：采用 Unity Build 和预编译头优化编译速度
2. **确定性模拟**：确保多人游戏的同步性
3. **模块化设计**：各系统相对独立，降低耦合
4. **扩展性**：通过 Lua 脚本支持游戏逻辑扩展

---

## 核心模块详解

### 1. 游戏状态管理模块 (GameState)

**位置**：`src/gamestate/`

**职责**：
- 维护全局游戏状态
- 管理游戏循环
- 协调各子系统交互
- 处理序列化/反序列化

**核心文件**：
- [system_state.hpp](file:///workspace/Project-Alice-cnfix/src/gamestate/system_state.hpp) - 游戏状态主类
- [commands.hpp](file:///workspace/Project-Alice-cnfix/src/gamestate/commands.hpp) - 命令系统
- [serialization.hpp](file:///workspace/Project-Alice-cnfix/src/gamestate/serialization.hpp) - 存档序列化

**关键类**：
```cpp
namespace sys {
struct state {
    // 全局游戏状态容器
    dcon::data_container world;

    // 用户设置
    user_settings_s user_settings;

    // 游戏时间
    date current_date;

    // 当前玩家国家
    dcon::nation_id current_nation;

    // 网络状态
    network_state network;

    // 地图状态
    map::map_state map_state;

    // UI状态
    ui::ui_state ui_state;
};
}
```

### 2. 经济系统模块 (Economy)

**位置**：`src/economy/`

**职责**：
- 商品价格计算
- 工厂生产模拟
- 人口消费需求
- 国际贸易
- 国家预算

**核心文件**：
- [economy.hpp](file:///workspace/Project-Alice-cnfix/src/economy/economy.hpp) - 经济系统主接口
- [economy_pops.hpp](file:///workspace/Project-Alice-cnfix/src/economy/economy_pops.hpp) - 人口经济行为
- [economy_production.hpp](file:///workspace/Project-Alice-cnfix/src/economy/economy_production.hpp) - 生产系统
- [national_budget.hpp](file:///workspace/Project-Alice-cnfix/src/economy/national_budget.hpp) - 国家预算

**经济模拟流程**：
```
每日更新循环：
1. 计算有效价格（考虑关税、补贴）
2. 确定就业分配（按优先级和盈利能力）
3. 计算消费需求
4. 分配商品供应
5. 更新价格（基于供需关系）
6. 计算收入和利润
```

**关键函数**：
```cpp
namespace economy {
    // 每日经济更新
    void daily_update(sys::state& state, bool presimulation, float presimulation_stage);

    // 初始化经济系统
    void initialize(sys::state& state);

    // 估算日收入
    float estimate_daily_income(sys::state& state, dcon::nation_id n);

    // 工厂建设状态
    construction_status factory_upgrade(sys::state& state, dcon::factory_id f);
}
```

### 3. AI系统模块 (AI)

**位置**：`src/ai/`

**职责**：
- 国家战略决策
- 军事行动规划
- 外交政策制定
- 经济管理

**核心文件**：
- [ai.hpp](file:///workspace/Project-Alice-cnfix/src/ai/ai.hpp) - AI主接口
- [ai_economy.hpp](file:///workspace/Project-Alice-cnfix/src/ai/ai_economy.hpp) - AI经济决策
- [ai_war.hpp](file:///workspace/Project-Alice-cnfix/src/ai/ai_war.hpp) - AI战争决策

**AI决策系统**：
```cpp
namespace ai {
    // 执行AI决策
    void take_ai_decisions(sys::state& state);

    // 更新执政党
    void update_ai_ruling_party(sys::state& state);

    // 军事行动
    void make_attacks(sys::state& state);
    void make_defense(sys::state& state);

    // 估算战斗力
    float estimate_army_offensive_strength(sys::state& state, dcon::army_id a);
    float estimate_win_probability(sys::state& state,
        std::vector<dcon::army_id> const& attacker,
        std::vector<dcon::army_id> const& defender);
}
```

### 4. 地图系统模块 (Map)

**位置**：`src/map/`

**职责**：
- 地图数据管理
- 渲染优化
- 地图模式切换
- 投影转换（全球地图/平面地图）

**核心文件**：
- [map.hpp](file:///workspace/Project-Alice-cnfix/src/map/map.hpp) - 地图核心
- [map_state.hpp](file:///workspace/Project-Alice-cnfix/src/map/map_state.hpp) - 地图状态
- [projections.hpp](file:///workspace/Project-Alice-cnfix/src/map/projections.hpp) - 地图投影

**地图数据结构**：
```cpp
namespace map {
struct map_vertex {
    glm::vec2 position_;
};

struct vertex {
    glm::vec2 position_;
    glm::vec2 texcoord_;
};

// 地图状态管理
class map_state {
    // 地图模式
    projection_mode current_mode;

    // 渲染数据
    std::vector<map_vertex> vertices;

    // 地图模式状态
    std::vector<uint8_t> province_colors;
};
}
```

### 5. GUI系统模块 (GUI)

**位置**：`src/gui/`

**职责**：
- 界面元素管理
- 用户交互处理
- 界面渲染
- 事件分发

**核心文件**：
- [gui_element_base.hpp](file:///workspace/Project-Alice-cnfix/src/gui/gui_element_base.hpp) - UI元素基类
- [gui_graphics.hpp](file:///workspace/Project-Alice-cnfix/src/gui/gui_graphics.hpp) - 图形渲染

**UI框架架构**：
```cpp
namespace ui {
class element_base {
public:
    element_data base_data;
    element_base* parent = nullptr;

    // 核心接口
    virtual message_result impl_on_lbutton_down(sys::state& state, int32_t x, int32_t y, sys::key_modifiers mods);
    virtual message_result impl_on_key_down(sys::state& state, sys::virtual_key key, sys::key_modifiers mods);
    virtual void impl_on_update(sys::state& state) noexcept;

    // 消息传递
    message_result impl_get(sys::state& state, Cyto::Any& payload) noexcept;
};
}
```

### 6. 军事系统模块 (Military)

**位置**：`src/military/`

**职责**：
- 单位管理（陆军、海军）
- 战斗模拟
- 征兵系统
- 战争分数计算

### 7. 脚本系统模块 (Scripting)

**位置**：`src/scripting/`

**职责**：
- 游戏事件脚本
- 触发器系统
- 效果系统
- Lua 脚本接口

**核心文件**：
- [fif.hpp](file:///workspace/Project-Alice-cnfix/src/scripting/fif.hpp) - 脚本框架接口
- [triggers.hpp](file:///workspace/Project-Alice-cnfix/src/scripting/triggers.hpp) - 触发器系统
- [effects.hpp](file:///workspace/Project-Alice-cnfix/src/scripting/effects.hpp) - 效果系统

---

## 关键类与函数说明

### 游戏状态类 (sys::state)

**位置**：[src/gamestate/system_state.hpp](file:///workspace/Project-Alice-cnfix/src/gamestate/system_state.hpp)

**核心职责**：
- 作为全局游戏状态的容器
- 协调各子系统
- 维护游戏时间线

**主要成员**：
```cpp
struct state {
    // 数据容器
    dcon::data_container world;

    // 用户设置
    user_settings_s user_settings;

    // 游戏核心状态
    date current_date;
    dcon::nation_id current_nation;

    // 子系统状态
    map::map_state map_state;
    ui::ui_state ui_state;
    network_state network;

    // 游戏规则
    gamerule::game_rule_settings game_rule_settings;
};
```

### 经济系统核心函数

**位置**：[src/economy/economy.hpp](file:///workspace/Project-Alice-cnfix/src/economy/economy.hpp)

#### `economy::daily_update()`
```cpp
void daily_update(sys::state& state, bool presimulation, float presimulation_stage);
```
**功能**：执行每日经济更新，包括价格计算、生产分配、消费结算

#### `economy::estimate_daily_income()`
```cpp
float estimate_daily_income(sys::state& state, dcon::nation_id n);
```
**功能**：估算国家每日收入，用于AI决策和预算规划

### AI决策函数

**位置**：[src/ai/ai.hpp](file:///workspace/Project-Alice-cnfix/src/ai/ai.hpp)

#### `ai::take_ai_decisions()`
```cpp
void take_ai_decisions(sys::state& state);
```
**功能**：让所有AI国家执行决策

#### `ai::estimate_win_probability()`
```cpp
float estimate_win_probability(sys::state& state,
    std::vector<dcon::army_id> const& attacker,
    std::vector<dcon::army_id> const& defender);
```
**功能**：估算战斗胜利概率，用于AI战术决策

---

## 依赖关系

### 外部依赖库

Project Alice 使用以下主要依赖库：

| 依赖库 | 版本 | 用途 |
|--------|------|------|
| **GLFW** | 最新 | 窗口管理 |
| **GLEW** | 静态链接 | OpenGL扩展 |
| **FreeType** | 最新 | 字体渲染 |
| **Harfbuzz** | 最新 | 文本整形 |
| **GLM** | 最新 | 数学库 |
| **LuaJIT** | 最新 | 脚本引擎 |
| **miniaudio** | 最新 | 音频播放 |
| **TBB** | 最新 | 并行计算 |
| **ICU** | 最新 | Unicode支持 |
| **fmt** | 最新 | 格式化库 |
| **Zstd** | 最新 | 数据压缩 |
| **LLVM** | (Windows) | JIT编译 |

### 内部依赖工具

| 工具 | 用途 |
|------|------|
| **DataContainerGenerator** | 生成数据容器代码 |
| **ParserGenerator** | 生成解析器代码 |
| **FifInterfaceGenerator** | 生成脚本接口 |

### 模块间依赖关系

```
main.cpp (主入口)
    ├── gamestate (游戏状态)
    │   ├── economy (经济系统)
    │   ├── ai (AI系统)
    │   ├── military (军事系统)
    │   └── nations (国家管理)
    ├── gui (用户界面)
    │   ├── graphics (图形渲染)
    │   └── text (文本渲染)
    ├── map (地图系统)
    │   └── graphics (图形渲染)
    ├── scripting (脚本系统)
    │   ├── luajit (Lua引擎)
    │   └── fif (脚本框架)
    ├── network (网络通信)
    └── sound (音频系统)
```

---

## 构建与运行

### 构建要求

#### Windows 平台
- **编译器**：MSVC 2022 或 Clang (Windows)
- **CMake**：版本 3.16+
- **Git**：完整安装
- **Windows SDK**：最新版本

#### Linux 平台
- **编译器**：GCC 或 Clang
- **CMake**：版本 3.16+
- **依赖库**：
  ```bash
  sudo apt install git build-essential clang cmake \
    libgl1-mesa-dev libxrandr-dev libxinerama-dev \
    libxcursor-dev libxi-dev libicu-dev
  ```

### 构建步骤

#### Windows (Visual Studio)

1. 克隆仓库
   ```bash
   git clone https://github.com/ljt21/Project-Alice-cnfix.git
   cd Project-Alice-cnfix
   ```

2. 打开 Visual Studio，加载 CMakeLists.txt

3. 等待 CMake 配置完成（会自动下载依赖）

4. 构建目标：
   - `Alice` - 主游戏可执行文件
   - `AliceIncremental` - 增量构建目标（推荐开发使用）
   - `launch_alice` - 启动器

#### Linux

```bash
# 安装依赖
sudo apt update
sudo apt install git build-essential clang cmake \
  libgl1-mesa-dev libxrandr-dev libxinerama-dev \
  libxcursor-dev libxi-dev libicu-dev

# 克隆并构建
git clone https://github.com/ljt21/Project-Alice-cnfix.git
cd Project-Alice-cnfix
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel --target Alice
cmake --build build --parallel --target launch_alice
```

### 运行配置

1. **准备游戏资源**：
   - 将 `assets` 文件夹复制到 Victoria 2 游戏目录
   - 确保可执行文件与 `v2game.exe` 在同一目录

2. **启动游戏**：
   ```bash
   ./launch_alice  # Linux
   launch_alice.exe  # Windows
   ```

3. **调试配置**（Visual Studio）：
   ```json
   {
     "type": "default",
     "project": "CMakeLists.txt",
     "projectTarget": "Alice.exe",
     "name": "Alice.exe",
     "currentDir": "path/to/victoria2/directory",
     "args": ["scenario.bin"]
   }
   ```

### 增量构建

推荐使用 `AliceIncremental` 目标进行开发：

```bash
cmake --build build --target AliceIncremental
```

**优势**：
- 减少编译时间（单文件修改约快10倍）
- 支持并行编译
- 更快的开发迭代

---

## 数据结构设计

### DCON 数据容器系统

Project Alice 使用自定义的数据容器生成系统 (DCON)，通过声明式语法定义游戏数据结构。

**定义文件**：[src/gamestate/dcon_generated.txt](file:///workspace/Project-Alice-cnfix/src/gamestate/dcon_generated.txt)

#### 基础类型定义

```cpp
// 索引类型
make_index{text_key}{uint32_t}
make_index{texture_id}{uint16_t}
make_index{gfx_object_id}{uint16_t}
make_index{gui_def_id}{uint16_t}

// 游戏对象示例
object{
    name{ national_identity }
    storage_type{contiguous}
    size{ 2000 }
    tag{ scenario }

    property{
        name{ color }
        type{ uint32_t }
        tag{ scenario }
    }
    property{
        name{ name }
        type{ text_key }
        tag{ scenario }
    }
    property{
        name{ adjective }
        type{ text_key }
        tag{ scenario }
    }
}
```

**生成的代码**：
- `dcon_generated.hpp` - 数据容器类定义
- `dcon_generated_ids.hpp` - 索引类型定义
- `lua_dcon_generated.hpp` - Lua 绑定代码
- `fif_dcon_generated.hpp` - 脚本接口

### 内存管理策略

- **连续存储**：大多数游戏数据使用连续内存布局，提高缓存命中率
- **池分配**：频繁分配的小对象使用对象池
- **避免碎片**：尽量预分配所需内存

---

## 脚本系统

### FIF (Fif Interface Framework)

FIF 是 Project Alice 的核心脚本框架，支持三种执行模式：

1. **解释器模式** (interpreter_stack)
   - 直接执行脚本字节码
   - 适合调试和快速原型

2. **字节码编译模式** (bytecode_compiler)
   - 预编译为字节码
   - 平衡性能和编译速度

3. **LLVM 编译模式** (llvm_compiler)
   - 使用 LLVM JIT 编译为机器码
   - 最高性能（仅 Windows）

### 脚本系统架构

```
游戏事件脚本 (.txt)
    ↓
ParserGenerator (解析器生成)
    ↓
抽象语法树
    ↓
FIF 编译器
    ↓
可执行脚本
```

### Lua 集成

**位置**：`src/scripting/luajit/`

Project Alice 通过 LuaJIT 提供扩展接口：

- **API 绑定**：自动生成的 Lua 接口 (`lua_dcon_generated.hpp`)
- **沙盒环境**：限制 Lua 脚本的访问权限
- **性能优化**：使用 LuaJIT 的 FFI 接口

---

## 扩展开发指南

### 添加新的游戏对象

1. 在 `dcon_generated.txt` 中定义对象结构
2. 运行 CMake 生成代码
3. 实现相关逻辑函数
4. 添加 Lua 绑定（如需）

### 添加新的地图模式

1. 在 `src/map/modes/` 创建模式定义文件
2. 在 `map_modes.hpp` 注册新模式
3. 实现颜色计算逻辑
4. 添加 UI 切换选项

### 添加新的 GUI 窗口

1. 继承 `ui::element_base`
2. 实现必要的消息处理接口
3. 在 `create_windows.cpp` 注册窗口
4. 添加相应的 `.gui` 定义文件

---

## 性能优化

### 编译优化

- **Unity Build**：减少编译单元数量
- **预编译头**：加速常用头文件编译
- **LTO**：链接时优化
- **PGO**：性能导向优化（可选）

### 运行时优化

- **SIMD 指令**：支持 AVX2/AVX512
- **并行计算**：使用 TBB 进行数据并行
- **缓存友好**：连续内存布局
- **延迟加载**：按需加载资源

---

## 调试与测试

### 调试工具

- **dbg_alice**：专用调试工具（Windows）
- **超级控制台**：游戏内置调试控制台
- **日志系统**：详细的运行日志

### 测试框架

使用 Catch2 进行单元测试：

```bash
cmake --build build --target tests
cd build
ctest --output-on-failure
```

---

## 贡献指南

### 代码规范

- 遵循 C++20 标准
- 使用一致的命名约定
- 添加必要的注释
- 通过预提交钩子检查

### 提交代码

1. Fork 项目仓库
2. 创建功能分支
3. 提交 Pull Request
4. 等待代码审查

### 测试要求

- 所有新功能需包含单元测试
- 确保跨平台兼容性
- 验证多人游戏同步性

---

## 常见问题

### Q: 如何处理音频播放问题？
A: Windows 用户需安装 Windows Media Player 和 Media Feature Pack。

### Q: 编译时间过长怎么办？
A: 使用 `AliceIncremental` 目标进行增量编译。

### Q: 如何调试特定场景？
A: 在启动参数中指定 `.bin` 场景文件名。

### Q: 多人游戏端口配置？
A: 修改 `host_settings.json` 中的端口设置（默认 1984）。

---

## 附录

### 项目目录结构

```
Project-Alice-cnfix/
├── src/               # 源代码
│   ├── gamestate/     # 游戏状态管理
│   ├── economy/       # 经济系统
│   ├── ai/            # AI系统
│   ├── gui/           # 用户界面
│   ├── map/           # 地图系统
│   ├── scripting/     # 脚本系统
│   ├── network/       # 网络通信
│   └── ...            # 其他模块
├── assets/            # 游戏资源
├── dependencies/      # 外部依赖
├── docs/              # 文档
├── tests/             # 测试代码
├── CMakeLists.txt     # 构建配置
└── README.md          # 项目说明
```

### 参考资源

- [原始项目](https://github.com/schombert/Project-Alice)
- [用户指南](docs/user_guide.md)
- [贡献指南](docs/contributing.md)
- [经济设计文档](docs/economy_design.md)

---

**文档版本**：1.0
**最后更新**：2026-07-23
**维护者**：Project Alice 中文修正版团队