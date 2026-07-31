namespace sys {
// 处理鼠标滚轮事件，amount 值为 1.0 表示滚轮滚动一"格"
void on_mouse_wheel(sys::state& state, int32_t x, int32_t y, key_modifiers mod, float amount);
// 处理各类对话框（事件、战斗报告、外交消息、日志消息等）
void process_dialog_boxes(sys::state& state);
// 处理错误弹出窗口队列
void process_errorpopup_boxes(sys::state& state);
// 打开指定国家的外交窗口
void open_diplomacy_window(sys::state& state, dcon::nation_id target);
}
