# wxStudy #
个人的wxWidgets学习笔记。  
包含以下内容：
 - 1_Hello:  
一个单cpp文件的wxWidgets简单示例程序。
 - 2_Basic:  
一个含有目录层次的wxWidgets简单示例程序，其功能与上一个示例一样。

## 环境 ##
由于wxWidgets是跨平台的界面库，所以示例代码应该在Windows、Linux和MacOS上均能运行，其CMakeLists.txt可能需要做一定的修改。笔者只在Windows 10 + MSVC编译器2019环境下测试通过。

 - wxWidgets >= 3.1.4
 - CMake >= 3.2

## 编译方法 ##
以编译`1_Hello`为例。
1. 克隆项目并在`1_Hello`文件夹下建立`build`文件夹；
2. `cmd`进入`build`文件夹，输入`cmake ..`；
3. 随后输入`cmake --build .`
4. 在`build/Debug`文件夹中找到生成的目标示例程序`Hello.exe`。