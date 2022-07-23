#include "CalculatorWindow.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator - Amber Smith", wxPoint(400, 200), wxSize(575, 600))
{
	textBox = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(430, 100));
	ButtonFactory factory;
	factory.CreateButtons(this);
}

void CalculatorWindow::OnButtonClicked(wxCommandEvent& evt)
{
	// I have no idea why creating a processor here is giving the error from the lecture. I put everything in CalculatorProcessor.h and deleted the .cpp
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	
	if (evt.GetId() < 115)
	{
		textBox->AppendText(((wxButton*)evt.GetEventObject())->GetLabel());
	}
	else if (evt.GetId() == 115)
	{
		textBox->AppendText("%");
	}
	else if (evt.GetId() == 121)
	{
		processor->GetTextBoxInput(textBox->GetValue().ToStdString());
	}
}