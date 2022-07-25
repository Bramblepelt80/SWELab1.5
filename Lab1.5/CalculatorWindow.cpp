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
	std::string input = "";
	int num;
	int result;
	
	if (evt.GetId() < 111)
	{
		textBox->AppendText(((wxButton*)evt.GetEventObject())->GetLabel());
	}
	// add
	else if (evt.GetId() == 111)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber1(num);
		processor->SetOperation(0);
	}
	// subtract
	else if (evt.GetId() == 112)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber1(num);
		processor->SetOperation(1);
	}
	// multiply
	else if (evt.GetId() == 113)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber1(num);
		processor->SetOperation(2);
	}
	// divide
	else if (evt.GetId() == 114)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber1(num);
		processor->SetOperation(3);
	}
	// mod
	else if (evt.GetId() == 115)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber1(num);
		processor->SetOperation(4);
	}
	// bin
	else if (evt.GetId() == 116)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetBaseNumber(num);
		textBox->AppendText(processor->GetBinary());
	}
	// hex
	else if (evt.GetId() == 117)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetBaseNumber(num);
		textBox->AppendText(processor->GetHexadecimal());
	}
	// dec
	else if (evt.GetId() == 118)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetBaseNumber(num);
		textBox->AppendText(processor->GetDecimal());
	}
	// neg
	else if (evt.GetId() == 119)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		num *= -1;
		textBox->AppendText(std::to_string(num));
	}
	// Clear
	else if (evt.GetId() == 120)
	{
		textBox->Clear();
	}
	// Equals
	else if (evt.GetId() == 121)
	{
		input = textBox->GetValue().ToStdString();
		textBox->Clear();
		num = stoi(input);
		processor->SetNumber2(num);
		result = processor->ExecuteCommand();
		textBox->AppendText(std::to_string(result));
	}
}