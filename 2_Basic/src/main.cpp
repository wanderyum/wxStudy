#include "../include/MyFrame.h"

class MyApp : public wxApp
{
public:
    /* ���ڳ�������ʱ������ */
    virtual bool OnInit();
};

/* ����ĳ�ʼ�� */
bool MyApp::OnInit()
{
    /* ���������� */
    MyFrame* mainWin = new MyFrame(wxT("һ���򵥵�ʾ������"));
    /* ��ʾ������ */
    mainWin->Show(true);
    /* �����¼����� */
    return true;
}

/* �ܹ���wxGetApp()����ȡʵ����MyApp������ */
DECLARE_APP(MyApp)

/* �Զ�����main������ʵ����MyApp */
IMPLEMENT_APP(MyApp)