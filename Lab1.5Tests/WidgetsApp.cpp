#include "WidgetsApp.h"

wxIMPLEMENT_APP(WidgetsApp);

bool WidgetsApp::OnInit()
{
	window = new TestsWindow();
	window->Show();
	return true;
}