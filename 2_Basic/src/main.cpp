#include "../include/MyFrame.h"

class MyApp : public wxApp
{
public:
    /* 将在程序启动时被调用 */
    virtual bool OnInit();
};

/* 程序的初始化 */
bool MyApp::OnInit()
{
    /* 创建主窗口 */
    MyFrame* mainWin = new MyFrame(wxT("一个简单的示例程序"));
    /* 显示主窗口 */
    mainWin->Show(true);
    /* 启动事件侦听 */
    return true;
}

/* 能够用wxGetApp()来获取实例化MyApp的引用 */
DECLARE_APP(MyApp)

/* 自动创建main函数并实例化MyApp */
IMPLEMENT_APP(MyApp)