## 声音系统

声音系统是项目中相对无趣的部分。我们将所有声音分为三类：音乐、界面声音（例如鼠标点击）和音效（目前均未实现）。当它们的有效音量（主音量 x 音乐音量）为非负时，音乐文件会按随机顺序连续播放。界面声音只播放一次，并且一次只能播放一个界面声音。如果你在另一个界面声音仍在播放时尝试播放一个界面声音，当前正在播放的界面声音将被取消。音效的工作方式与界面声音非常相似。与它们一样，一次只能播放一个。但是，如果你在另一个音效仍在播放时尝试播放一个音效，先前的音效将继续播放，而新的音效不会播放。

声音系统中的所有音量都表示为 0.0 到 1.0 范围内的浮点值。每个声音类别都有一个存储的音量设置，以及一个主音量设置。在计算播放某个特定类别的声音时所用的音量时，该类别的音量会与主音量相乘，以确定其播放音量。

### 初始化

声音系统通过 `void initialize_sound_system(sys::state& state)` 进行初始化。该函数负责创建平台相关的 `sound_impl` 对象（存储在 `sys::state` 对象的 `sound_ptr` 成员中）并枚举音乐文件。此函数应在窗口创建例程中的某个位置调用。

### 播放界面声音和音效

`void play_effect(sys::state& state, audio_instance& s, float volume)` 和 `void play_interface_sound(sys::state& state, audio_instance& s, float volume)` 函数负责播放音效和界面声音。它们的 volume 参数范围为 0.0 到 1.0（通过将用户设置中的主音量与保存在那里的界面声音音量或音效音量相乘计算得出）。这些函数负责检测是否有其他声音正在播放并做出适当的反应。请注意，这两个函数都通过实现定义的 `audio_instance` 结构来标识要播放的声音。目前，唯一提供此类结构的实例是通过 `audio_instance& get_click_sound(sys::state& state)` 函数，该函数返回按钮被点击时播放的声音。

### 播放音乐

音乐通过 `void stop_music(sys::state& state)` 和 `void start_music(sys::state& state, float volume)` 函数进行控制。这些函数启动和停止自动播放的音乐循环（假设有效音量 > 0.0；作为一种优化，当没有音量时我根本不播放音乐）。由于我的实现编写方式，我需要一个在当前播放的音乐结束时回调声音系统的函数，我将其公开为 `void update_music_track(sys::state& state)`。但是，不应正式依赖此函数执行任何操作。*它没有平台无关的意义。* 此外，当音乐开始播放时，Windows 实现总是从 `thecoronation_titletheme.mp3` 开始。

### 更改音量

有三个函数用于更改音量：

- `void change_effect_volume(sys::state& state, float volume)`
- `void change_interface_volume(sys::state& state, float volume)`
- `void change_music_volume(sys::state& state, float volume)`

这些函数**不会**以任何方式更改音量设置。相反，它们会改变各自类别中任何当前正在播放的声音或音乐的音量。当用户更改声音设置时，我们会调用这些函数以确保更改立即反映在正在播放的声音中。
