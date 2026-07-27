## 图形与 GUI 定义

渲染近似维多利亚 2 UI 所需的信息包含在 `interface` 目录中的 `.gfx` 和 `.gui` 文件中。`.gfx` 文件大致描述了 UI 渲染可以调用的资源（即图形），而 `.gui` 文件包含这些资源的放置描述以及与之关联的一般行为类型（即 GUI）。由于 `.gui` 文件可能引用图形资源，因此先解析 `.gfx` 文件是很自然的。

请注意，由于我们的解析器在进行比较时反正会将所有内容转换为小写，因此我将所有关键字都记录为小写，无论它们在游戏文件中的大小写如何。

### `.gfx` 文件

图形文件的顶层必须是一个拥有以下键之一的组：`bitmapfonts`（字体信息）、`fonts`（更多字体信息）、`lighttypes`（3D 光照定义）、`objecttypes`（3D 对象定义）和 `spritetypes`（2D 图形资源定义）。由于我们将使用合适的字体，并且不支持 3D 模型，因此这些组中唯一让我们感兴趣的是 `spritetypes`，其余我们将丢弃。

`spritetypes` 组本身由多个组组成，具有以下键：`spritetype`、`corneredtilespritetype`、`maskedshieldtype`、`textspritetype`、`tilespritetype`、`progressbartype`、`barcharttype`、`piecharttype`、`linecharttype` 和 `scrollingsprite`。其中，`scrollingsprite` 对我们没有用，我们将直接丢弃它。其余的都将以相同的方式解析，并解析为相同的目标对象，我们只是标记该组是用哪种类型声明的。尽管目前可能无关紧要，但 `progressbartype`、`barcharttype`、`piecharttype`、`linecharttype` 都编码了引用它们对象的行为信息，不幸的是模糊了图形和 GUI 定义之间的界限。`corneredtilespritetype` 用于渲染可扩展的背景；你通过在所有方向上拉伸中心矩形，同时保持角落固定，并只在一个方向上扩展边缘来渲染它们。`tilespritetype` 表示在一个图像文件中以网格排列的多个精灵。而 `maskedshieldtype` 表示一个遮罩，用于"裁剪"其他纹理的部分。其他所有东西都只是图像。

这就把我们带到了解析的主体，即记录每个对象中的数据。这里发现的大多数东西都是简单的值：
- `name` : 资源在 `.gui` 文件中被引用的名称
- `horizontal` : 一个布尔值，区分水平进度条和垂直进度条
- `allwaystransparent` : 一个布尔值，但我不知道它做什么。不过保存它很容易，"以防万一"
- `transparencecheck` : 一个布尔值，决定是否透明度对命中检测有影响
- `flipv` : 一个布尔值，决定是否垂直翻转显示资源
- `noofframes` : 一个整数，告诉我们图像中打包了多少个子精灵
- `size` : 这个有点棘手；可以是单个整数，也可以是一个带有 `{ x = ... y = ... }` 的组，决定以像素为单位显示资源的大小。单个值表示该资源是正方形
- `clicksound` : 看起来很有趣，但实际上总是保存文本 `click`；它可能和一个布尔值没什么区别
- `texturefile` 或 `texturefile1` : 资源的主纹理
- `texturefile2` : 存在于 `maskedshieldtype` 或 `progressbar` 中。第一种情况下，这是遮罩文件，而另一个纹理是要显示在结果上的覆盖层。对于进度条，一个纹理用作条，另一个用作背景。
- `bordersize` : 一个包含 `{ x = ... y = ... }` 的组，用于 `corneredtilespritetype` 以确定不被拉伸的边缘有多大。`x` 和 `y` 似乎总是相同的，所以我们只存储其中一个。
- `color`, `color2`, `colortwo` : 不知道这些是做什么用的，所以我忽略了它们。
- `effectfile` : 似乎控制着控件的 directX 着色器。我们忽略这个。
- `loadtype`, `noreftype`, `norefcount` : 看起来都像是内部加载管理控制；我们忽略它们。
- `linewidth` : 总是 2，所以我们忽略它。

而且，奇怪的是，这就是 .gfx 文件中所有有用的信息了。

### `.gui` 文件

`.gui` 文件要复杂得多，部分原因是我们不会直接丢弃它们包含的大部分内容。与 `.gfx` 文件一样，`.gui` 文件的顶层由顶级组组成，这些组收集了大量同类型的定义。或者至少我认为这是意图，因为据我所知，顶层只包含 `guitypes` 组。所以，唯一让我们感兴趣的是这些组的内容。

其中是由 UI 元素定义组成的组列表，每个组都按其类型标记（就它应该显示的一般行为而言）。可能的顶级类型有：`guibuttontype`、`checkboxtype`、`eu3dialogtype`、`icontype`、`instanttextboxtype`、`listboxtype`、`positiontype`、`scrollbartype`、`windowtype`、`shieldtype`、`overlappingelementsboxtype`、`editboxtype` 和 `textboxtype`。为了简化，我们将 `eu3dialogtype` 和 `windowtype` 元素的解析合并，将两者视为同一事物；我们将 `instanttextboxtype`、`editboxtype` 和 `textboxtype` 解析为共同的文本元素类型；我们将 `shieldtype` 和 `icontype` 解析为共同的图像类型；我们将 `guibuttontype` 和 `checkboxtype` 都解析为按钮。

除了刚才提到的之外，每种类型都有自己的一组独特属性，并且被唯一地解析（不像 `.gfx` 文件的内容，它们都经过相同的解析路径）。

#### 注意事项和警告

一些原版游戏附带的文件存在格式错误或缺少 GFX 资源 - 因此它们被忽略且永远不会被解析：

- `confirmbuild.gui`
- `convoys.gui`
- `brigadeview.gui`

如果一个模组依赖这些文件被解析和/或将它们用于某些用途 - 那就不要这样做。之前，`eu3dialog.gui` 也被忽略了，不过现在它已被解析和使用，但图形元素 `GFX_icon_merchant` 被覆盖了，如果一个模组依赖这个不被覆盖（无论出于什么原因）；请告诉我们。

一些元素会被游戏代码自动修复，覆盖它们原本设置的属性。这些元素如下：
- `state_info` 覆盖 `orientation`。
- `production_goods_name` 覆盖 `orientation`。
- `factory_info` 覆盖 `orientation`。
- `new_factory_option` 覆盖 `orientation`。
- `ledger_legend_entry` 覆盖 `orientation`。
- `project_info` 覆盖 `orientation`。
- `pop_details_win` 覆盖 `moveable`。
- `trade_flow` 覆盖 `moveable`。
- `ledger` 覆盖 `moveable`。
- `province_view` 覆盖 `moveable`。
- `releaseconfirm` 覆盖 `moveable`。
- `defaultdiplomacydialog` 覆盖 `moveable`。
- `gpselectdiplomacydialog` 覆盖 `moveable`。
- `build_factory` 覆盖 `moveable`。
- `event_election_window` 覆盖 `moveable`。
- `declarewardialog` 覆盖 `moveable`。
- `setuppeacedialog` 覆盖 `moveable`。
- `makecbdialog` 覆盖 `moveable`。
- `setupcrisisbackdowndialog` 覆盖 `moveable`。
- `invest_project_window` 覆盖 `moveable`。

#### 关于字体的简要说明

其中一些元素会引用各种字体。由于我们不会直接使用游戏中的任何字体，试图解码字体描述并解释它们似乎是浪费时间。相反，我们将通过硬编码字体名称来识别字体，以便稍后分配给我们选择的字体。每个字体名称以以下之一开头：`arial`、`fps`、`main`、`tooltip`、`frangoth`、`garamond`、`impact`、`old_english`、`timefont` 或 `vic`，然后可选地跟一个下划线，然后可选地跟一个数字（大概是大小），然后是一个下划线和最后的装饰，如 `bold`、`black`、`black_bold` 或 `bl`。我们将通过将名称的开头映射到我们将加载的少数几种字体之一，解析出大小（如果存在），然后确定是用白色（默认）还是黑色渲染字体来处理所有这些。

#### 按钮 (`guibuttontype` 和 `checkboxtype`)

- `position` : 一个内容为 `{ x = ... y = ...}` 的组
- `size` : 一个内容为 `{ x = ... y = ...}` 的组
- `delayedtooltipText` : 文本，至少名义上是。初步检查后发现，它出现时总是被赋值为 `""`，所以我暂时丢弃它。
- `format` : 包含 `right`、`left`、`center` 或 `centre`（大小写可能不同）的文本值，决定控件中文本的对齐方式。
- `spritetype` : 命名用于绘制元素的图形资源的文本（似乎只出现在 `icontype` 中，但为什么不一并放在这里呢？
- `rotation` : 正负 1.5708 的浮点值（即顺时针或逆时针旋转 90 度）。
- `shortcut` : 与控件关联的快捷键
- `tooltip` 和 `tooltiptext` : 显然都设置为 `""`
- `name` : 可用于引用此元素的文本标签
- `quadtexturesprite` : 命名用于绘制元素的图形资源的文本
- `buttontext` : 引用从语言文件加载的文本的文本键
- `buttonfont` : 用于渲染文本的字体，如上所述
- `orientation` : `center`、`lower_left`、`lower_right`、`upper_left`（或 `upperl_left`，因为它被拼错了一次）、`upper_right`、`center_up` 或 `center_down`；决定如何相对于父元素解释位置。
- `clicksound` : `click`、`close_window` 或 `start_game` 之一
- `parent` : 我不知道这是做什么用的，所以我忽略它。

#### 图像 (`icontype` 和 `shieldtype`)

- `position` : 一个内容为 `{ x = ... y = ...}` 的组
- `orientation` : 同上
- `buttonmesh` : 不知道这是做什么用的，所以我忽略它
- `frame` : 当图形资源是一组图标在一个图像中时，选择其中一个图标
- `name` : 同上
- `spritetype` : 同上
- `rotation` : 同上
- `scale` : 描述图标拉伸程度的浮点值

#### 文本框 (`instanttextboxtype`、`editboxtype` 和 `textboxtype`)

- `orientation` : 同上
- `allwaystransparent` : 与图形资源一样，我不知道这意味着什么，但我仍然存储它
- `fixedsize` : 另一个小谜团。我存储了它但没有使用它
- `font` : 同上
- `format` : 同上
- `maxheight` 和 `maxwidth` : 暗示文本框可能更小，但通常我要么将文本框大小设置为内容大小（如工具提示），要么按此大小创建它们。
- `name` : 同上
- `size` : 一个内容为 `{ x = ... y = ...}` 的组，我将其与 `maxheight` 和 `maxwidth` 值存储在同一位置，消除它们之间的任何区别。
- `text` : 引用从语言文件加载的文本的文本键
- `texturefile` : 如果存在，可能设置为 `""` 或 `gfx\\interface\\tiles_dialog.tga`、`gfx\\interface\\transparency.tga`、`gfx\\interface\\small_tiles_dialog.dds` 之一，我只是将其存储为无背景或背景 1、2 或 3。
- `position` : 同上
- `bordersize` : 一个内容为 `{ x = ... y = ...}` 的组，为文本框添加一个额外的内部边距，文本不会定位到那里。

#### `listboxtype`

- `orientation` : 同上
- `allwaystransparent` : 同上
- `background` : 文本，引用用于渲染控件背景的图形对象
- `horizontal` : 一个布尔值，但我不支持等效于 `true` 的值，而且我认为文件中不包含任何
- `name` : 同上
- `priority` : 未知，似乎总是设置为 100
- `scrollbartype` : 似乎总是 `standardlistbox_slider`，这是唯一我们接受的值
- `spacing` : 一个小整数，有时写成浮点值。我不知道该怎么处理这个
- `step` : 未知，似乎总是设置为 0
- `position` : 同上
- `size` : 同上
- `bordersize` : 同上，但我不知道它对列表框应该做什么
- `offset` : 一个内容为 `{ x = ... y = ...}` 的组……不太记得这个是做什么用的了，但我认为它与列表项的定位有关。

#### `positiontype`

- `name` : 同上
- `position` : 一个内容为 `{ x = ... y = ...}` 的组；此类型的元素表示布局例程可以引用的位置。

#### `scrollbartype`

- `horizontal` : 滚动条是水平还是垂直，但用 `1` 和 `0` 而不是通常的布尔值书写
- `leftbutton` 和 `rightbutton` : 通过名称引用此对象的子对象*按钮*，以确定哪些按钮位于滚动条两端
- `lockable` : 一个布尔值，但我不知道它做什么
- `minvalue` 和 `maxvalue` : 滚动条数值限制的整数。然而，`minvalue` 总是 0，所以我们忽略它。
- `name` : 同上
- `priority` : 总是 100；不确定其用途
- `rangelimitmax`, `rangelimitmin` : 我们忽略这些
- `rangelimitmaxicon` 和 `rangelimitminicon` : 通过名称引用此对象的子对象*图标*，这些图标可用于指示滑块在全范围之外的限制
- `slider` : 通过名称引用此对象的子对象*按钮*，以确定哪个按钮用作滑块
- `startvalue` : 我们忽略这个
- `stepsize` : 决定滑块可以停止的间隔。可能是 `2`、`1`、`0.1`、`0.01` 或 `0.001`
- `track` : 通过名称引用此对象的子对象*按钮*，以用作滚动条的背景
- `userangelimit` : 一个布尔值，决定滑块是否可以限制在滚动条的一部分
- `position` : 同上
- `bordersize` : 同上，但我不知道它对滚动条应该做什么
- `size` : 同上
- `guibuttontype` 和 `icontype` : 这些是以常规方式定义按钮和图标的组。但是，它们的名称只需要在滚动条本身内部可见。

#### `overlappingelementsboxtype`

这些是你能在几个地方看到的旗帜列表或其他图标列表。

- `orientation` : 同上
- `format` : 与文本框和按钮相同，只是它决定了图标列表的对齐方式
- `name` : 同上
- `spacing` : 定义理想间距的浮点数，在可能的情况下
- `position` : 同上
- `size` : 同上

#### 窗口 (`eu3dialogtype` 和 `windowtype`)

- `orientation` : 同上
- `background` : 可能旨在将其中一个子对象指定为背景，但经常留空。
- `dontrender`, `downsound`, `upsound` : 我们忽略这些
- `fullscreen` : 一个布尔值，表示窗口最初是否打算作为"模态"窗口（即当它激活时隐藏地图）
- `horizontalborder` 和 `verticalborder` : 我们忽略这些
- `moveable` : 一个布尔值，表示是否原本打算允许你拖动窗口
- `name` : 同上
- `position` : 同上
- `size` : 同上

此外，窗口可以将任何 GUI 对象类型作为成员。任何此类对象都应是窗口的子控件。
