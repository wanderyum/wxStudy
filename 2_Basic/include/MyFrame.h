#ifndef MY_FRAME_H
#define MY_FRAME_H

#include <wx/wx.h>

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

#endif