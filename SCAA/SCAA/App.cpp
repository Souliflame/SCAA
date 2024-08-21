#include "App.h"
#include "MainFrame.h"

// wxWidgets의 진입 매크로
wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("C++ GUI");
    mainFrame->SetClientSize(800, 600);
    mainFrame->Center();
    mainFrame->Show();

    // if false, immediately close
    return true;
}