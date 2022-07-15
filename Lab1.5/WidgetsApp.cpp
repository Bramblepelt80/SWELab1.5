#include "WidgetsApp.h"

wxIMPLEMENT_APP(WidgetsApp);

bool WidgetsApp::OnInit()
{
	window = new CalculatorWindow();
	window->Show();
	return true;
}