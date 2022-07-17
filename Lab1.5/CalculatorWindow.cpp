#include "CalculatorWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator - Amber Smith", wxPoint(400, 200), wxSize(575, 600))
{
	textBox = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 10), wxSize(430, 100));
	ButtonFactory factory;
	factory.CreateButtons(this);
}

void CalculatorWindow::OnButtonClicked(wxCommandEvent& evt)
{
	textBox->AppendText(((wxButton*)evt.GetEventObject())->GetLabel());
}