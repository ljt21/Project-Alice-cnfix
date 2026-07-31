// 系统状态前向声明
namespace sys {
struct state;
}
namespace alice_ui {
// 判断当前界面是否为从右到左（RTL）布局
bool state_is_rtl(sys::state& state);
}
namespace text {
enum class text_color : uint8_t;
}
namespace ogl {
struct color3f;
}
namespace ui {
// 获取指定文本颜色对应的渲染颜色
ogl::color3f get_text_color(sys::state& state, text::text_color text_color);
}
