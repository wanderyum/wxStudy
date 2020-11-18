#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    /* 将在程序启动时被调用 */
    virtual bool OnInit();
};

/* 声明主窗口类 */
class MyFrame : public wxFrame
{
public:
    /* 构造函数 */
    MyFrame(const wxString& title);
    /* 事件处理函数 */
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
private:
    /* 表明这个类包含事件处理功能 */
    DECLARE_EVENT_TABLE()
};

/* 能够用wxGetApp()来获取实例化MyApp的引用 */
DECLARE_APP(MyApp)

/* 自动创建main函数并实例化MyApp */
IMPLEMENT_APP(MyApp)

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

// MyFrame的事件表  ->  放置于类的实现文件中
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
END_EVENT_TABLE()

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg;
    msg.Printf(wxT("Hello and welcome to %s"),
                wxVERSION_STRING);
    wxMessageBox(msg, wxT("关于"),
                wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnQuit(wxCommandEvent& event)
{
    // 关闭MyFrame
    Close();
}

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title)
{
    // 生成菜单栏
    wxMenu *fileMenu = new wxMenu;
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"), wxT("Show about dialog"));
    fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-Q"), wxT("Quit this program"));

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, wxT("&File"));
    menuBar->Append(helpMenu, wxT("&Help"));
    // 将菜单栏放到MyFrame中
    SetMenuBar(menuBar);
    //加入状态栏
    CreateStatusBar(2);
    SetStatusText(wxT("Welcome to wxWidgets!"));
}
