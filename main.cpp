#include <wx/wxprec.h>
#include <wx/window.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class MyApp: public wxApp {     //main window class
    public:
        virtual bool OnInit();
};

class MainFrame: public wxFrame { //the main frame of the window
    public:
        MainFrame(const wxString& title, const wxPoint& pos); //with title, position and size in it's constructor

    private:
        void OnHello(wxCommandEvent& event);    //on hello event
        void OnExit(wxCommandEvent& event);     //on exit event
        void OnAbout(wxCommandEvent& event);    //on about event
        wxDECLARE_EVENT_TABLE();
};

enum {
    ID_Hello = 1    //hello is a custom event, so I assigned an id = 1, exit and about have fixed ids
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_MENU(ID_Hello,   MainFrame::OnHello)
    EVT_MENU(wxID_EXIT,  MainFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MainFrame::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MainFrame *frame = new MainFrame("Example App", wxPoint(50, 50));
    frame->Maximize();
    frame->Show( true );
    return true;
}


MainFrame::MainFrame(const wxString& title, const wxPoint& pos) : wxFrame(NULL, wxID_ANY, title, pos)
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );
}
void MainFrame::OnExit(wxCommandEvent& event) {
    Close( true );
}
void MainFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                  "About Hello World", wxOK | wxICON_INFORMATION );
}
void MainFrame::OnHello(wxCommandEvent& event) {
    wxLogMessage("Hello world from wxWidgets!");
}