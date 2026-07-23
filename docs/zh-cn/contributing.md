## 有兴趣贡献吗？

我目前正在寻找以下方面的帮助：

#### 美术：

我想找到能够用新的艺术风格重新制作 Victoria 2 现有所有 UI 资产的人，让游戏拥有自己的独特视觉标识。是的，我知道这不是一件小事。

#### 测试人员：

我正在寻找能够构建 C++ 项目并运行它，但不想（或不习惯）贡献代码的人。测试人员需要定期构建项目并进行测试以发现 bug，特别是那些在我未开发的软件/硬件组合上不会出现的 bug。如果你有兴趣成为测试人员，请与我们的项目协调员联系。

#### 自由贡献者

由于这是一个开源项目，你不必成为团队的正式成员就能贡献。任何人都可以通过 GitHub 提交 PR，以这种方式进行临时贡献。

### 构建项目

构建使用 CMake，应该"直接可以工作"，但有一些烦人的例外情况。

#### Windows

1. 你需要安装完整的 git（https://git-scm.com/downloads），因为 Visual Studio 自带的版本对 CMake 来说不够用，原因不明。
2. 确保安装了相对较新版本的 Windows SDK（可以通过 Visual Studio 安装程序更新本地版本的 Windows SDK）。
3. 在 Visual Studio 中打开项目并让其配置（CMake 应在输出窗口中运行并下载依赖项；这可能需要一些时间）。
4. 查看本页底部的"最终润色"部分。

如果音频播放出现问题，你可能希望安装 Windows Media Player 和 Windows Media Feature Pack（https://support.microsoft.com/en-us/windows/get-windows-media-player-81718e0d-cfce-25b1-aee3-94596b658287），以便正确播放 MP3 文件（音乐播放器）。

#### Linux（基于 Debian 的发行版）

确保安装了所需的依赖项。

```bash
sudo apt update
sudo apt install git build-essential clang cmake libgl1-mesa-dev libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev libicu-dev
```

安装完成后，下载 Visual Studio Code 的 `cmake-tools` 扩展并打开项目。CMake 应自动为你配置项目。

如果你遇到错误 `/usr/bin/ld: cannot find -lstdc++`，这可能是由 Ubuntu jammy 中损坏的 gcc-12 包引起的。
```bash
sudo apt remove gcc-12
```
https://stackoverflow.com/questions/67712376/after-updating-gcc-clang-cant-find-libstdc-anymore

（仅限 Linux）我们使用的 Intel TBB 库版本似乎在有空格的路径中无法编译，因此你需要确保放置项目的位置路径中没有任何空格（是的，我也觉得这很傻）。

#### Linux（通用）

适用于非基于 Debian 的发行版，需要的工具：
基本编译工具（C 编译器和 C++ 编译器）
CMake
Git
onetbb
GLFW3
X11（*应该* 支持 wayland，但不保证。）

从这里开始编译很简单
1. `cd Project-Alice`
2. 做一些设置让调试器在你的 V2 目录中启动程序，以便它能找到游戏文件（我不知道这在 Linux 上是如何完成的）
4. `cmake -B build . -DCMAKE_BUILD_TYPE=Debug`
5. 要构建所有目标：`cmake --build build -j8`，其中 -j8 = 使用 8 个线程编译，你可以指定任何值。截至撰写本文时，SaveEditor 仅支持 Windows，因此你需要分别编译 Launcher 和 Alice：
6. 构建 Launcher：`cmake --build build --parallel --target launch_alice`
7. 构建 Alice：`cmake --build build --parallel --target Alice`
8. 运行增量构建：`cmake --build build --parallel --target AliceIncremental`

如果你在 Linux 发行版中遇到库的问题（例如 Debian 版本过旧），建议在编译时启用静态链接：
在 CMakeLists.txt 中设置 `USE_STATIC_LIBS ON`。

#### 最终润色

因为项目目前需要使用现有游戏文件（作为图形等的来源），每个人都需要告诉编译器他们安装游戏的副本在哪里，并将新文件放在该目录中。

将 assets 文件夹复制到你的 V2 目录。**注意：当你或其他人更新资产文件时，你需要将所有更改的文件复制到 V2 目录并重新构建任何场景。不这样做可能会导致崩溃**。然后，你需要配置调试器，让 Alice 和启动器*就像*它们位于你的 V2 目录中一样启动。对于 Visual Studio 和 Visual Studio Code，你可以通过创建启动配置文件来实现。（参见 [Visual Studio 的说明](https://learn.microsoft.com/en-us/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio?view=vs-2022) 和 [VS Code 的说明](https://code.visualstudio.com/docs/cpp/launch-json-reference)）。该文件的内容应大致如下所示（复制如下），只需将目录位置更改为你指向 V2 目录的位置。

```
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "launch_alice.exe (Launcher\\launch_alice.exe)",
      "name": "launch_alice.exe (Launcher\\launch_alice.exe)",
      "currentDir": "C:\\programs\\V2"
    },
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "Alice.exe",
      "name": "Alice.exe",
      "currentDir": "C:\\programs\\V2",
      "args": [
        ""
      ]
    }
  ]
}
```

注意 `args` 包含启动程序的命令行参数。如果你想调试特定的场景文件，你需要将其更改为类似 `"9DCA2D56-0.bin"` 的值。

### 警告！

如果你使用 VPN，你的端口很可能不是默认端口。这意味着除非你更改 Git 的端口，否则你的 VPN 将不起作用。

这将导致你下载的文件很可能损坏。我花了整个下午排查这个问题，还错过了晚餐。

另外，在修改 .json 文件时，请密切注意语法错误。我因为一个小逗号差点砸了电脑。

### 增量构建

`Alice` 构建目标将几乎所有游戏源文件组合成一个大的翻译单元，这意味着更改一行源代码几乎总是需要重新编译整个游戏。根据构建配置和系统规格，即使你只更改了一行，这也可能需要长达 10 分钟。因此，建议所有贡献者使用 `AliceIncremental` 构建目标，因为它将游戏分成更小的翻译单元，可以并行编译，并且大大减少了重新编译任何更改所需的时间。GitHub CI 构建 `Alice` 目标，因此它会捕获在 `Alice` 目标下无法编译的更改。

#### 给 Peter 的备忘录

在主 CMakeLists.txt 中，你会找到以下行
```
$<$<CONFIG:Debug>:            /RTC1 /EHsc /MTd /Od>
$<$<NOT:$<CONFIG:Debug>>:     /DNDEBUG /wd4530 /MT /O2 /Oi /sdl- /GS- /Gy /Gw /Zc:inline>)
```
将第一行的 `/Od` 更改为 `/O1`（甚至 `/O2`），这应该能显著提高调试运行速度。
