#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    /* ���ڳ�������ʱ������ */
    virtual bool OnInit();
};

/* ������������ */
class MyFrame : public wxFrame
{
public:
    /* ���캯�� */
    MyFrame(const wxString& title);
    /* �¼������� */
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
private:
    /* �������������¼������� */
    DECLARE_EVENT_TABLE()
};

/* �ܹ���wxGetApp()����ȡʵ����MyApp������ */
DECLARE_APP(MyApp)

/* �Զ�����main������ʵ����MyApp */
IMPLEMENT_APP(MyApp)

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

// MyFrame���¼���  ->  ���������ʵ���ļ���
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
END_EVENT_TABLE()

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg;
    msg.Printf(wxT("Hello and welcome to %s"),
                wxVERSION_STRING);
    wxMessageBox(msg, wxT("����"),
                wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnQuit(wxCommandEvent& event)
{
    // �ر�MyFrame
    Close();
}

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title)
{
    // ���ɲ˵���
    wxMenu *fileMenu = new wxMenu;
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"), wxT("Show about dialog"));
    fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-Q"), wxT("Quit this program"));

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, wxT("&File"));
    menuBar->Append(helpMenu, wxT("&Help"));
    // ���˵����ŵ�MyFrame��
    SetMenuBar(menuBar);
    //����״̬��
    CreateStatusBar(2);
    SetStatusText(wxT("Welcome to wxWidgets!"));
}
