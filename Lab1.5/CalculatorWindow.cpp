#include "CalculatorWindow.h"

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator - Amber Smith", wxPoint(400, 200), wxSize(500, 500))
{
	c = new wxButton(this, wxID_ANY, "C", wxPoint(10, 10), wxSize(100, 100));
}