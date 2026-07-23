## 标签与旗帜

游戏文件通过区分大小写的三字母代码来识别国家，通常称为它们的标签。标签对我们来说不是很有用，因为我们在内部将这些引用转换为任意的连续 id。然而，在某些罕见的地方，我们可能需要能够恢复那个三字母字符串以显示给用户。存储标签字母的字节位于国家身份的 `identifying_int` 属性中。你可以使用 `int_to_tag` 函数将该数字转换回字符串，如下所示：
```c++
nations::int_to_tag(state.world.national_identity_get_identifying_int(id_for_a_national_identity));
```
请记住，对我们来说，游戏中的国家与标签不是一回事。要获取与特定国家关联的标签，你需要首先通过 `identity_holder` 关系。

### 旗帜

所有旗帜类型都将被添加到 `state::flag_types` 向量中，该向量的大小等于已加载的唯一旗帜数量。而 `state::flag_type_map` 将包含 flag_types 到纹理偏移 id 的重新映射。

要获取特定类型旗帜的动态分配 Id，请使用以下函数：
```c++
uint32_t culture::get_remapped_flag_type(sys::state const& state, culture::flag_type type);
```
旗帜类型必须已经由场景注册，否则函数将失败断言（这假设应用程序将只使用已注册的旗帜类型 - 而不是任意的）。

为国家显示的旗帜由两个因素决定：与国家关联的国家身份及其当前的政府类型。一个国家的当前政府类型可以在国家的 `government_type` 属性中找到。一旦你有了国家身份和政府类型，你就可以使用以下函数查找我们应该显示的旗帜类型：
```c++
culture::flag_type culture::get_current_flag_type(sys::state const& state, dcon::nation_id target_nation);
```
有了这些信息，你就可以调用 `GLuint ogl::get_flag_handle(sys::state& state, dcon::national_identity_id nat_id, culture::flag_type type);`，它将返回一个旗帜纹理的句柄（如有必要，从磁盘加载）。

因为确定显示哪面旗帜所需的查找有点复杂，所以最好缓存国家身份和旗帜类型的组合或纹理本身的句柄，然后在收到 `update` 消息时重新计算这些值。
