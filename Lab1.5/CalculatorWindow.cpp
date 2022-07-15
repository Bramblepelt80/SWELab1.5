#include "CalculatorWindow.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator - Amber Smith", wxPoint(400, 200), wxSize(575, 600))
{
	textBox = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 10), wxSize(430, 100));
	buttonClr = new wxButton(this, wxID_ANY, "C", wxPoint(450, 10), wxSize(100, 100));
	button1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 120), wxSize(100, 100));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(120, 120), wxSize(100, 100));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(230, 120), wxSize(100, 100));
	buttonPls = new wxButton(this, wxID_ANY, "+", wxPoint(340, 120), wxSize(100, 100));
	buttonMod = new wxButton(this, wxID_ANY, "mod", wxPoint(450, 120), wxSize(100, 100));
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 230), wxSize(100, 100));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(120, 230), wxSize(100, 100));
	button6 = new wxButton(this, wxID_ANY, "6", wxPoint(230, 230), wxSize(100, 100));
	buttonMns = new wxButton(this, wxID_ANY, "-", wxPoint(340, 230), wxSize(100, 100));
	buttonBin = new wxButton(this, wxID_ANY, "bin", wxPoint(450, 230), wxSize(100, 100));
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 340), wxSize(100, 100));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(120, 340), wxSize(100, 100));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(230, 340), wxSize(100, 100));
	buttonMlt = new wxButton(this, wxID_ANY, "*", wxPoint(340, 340), wxSize(100, 100));
	buttonHex = new wxButton(this, wxID_ANY, "hex", wxPoint(450, 340), wxSize(100, 100));
	buttonEql = new wxButton(this, wxID_ANY, "=", wxPoint(10, 450), wxSize(100, 100));
	button0 = new wxButton(this, wxID_ANY, "0", wxPoint(120, 450), wxSize(100, 100));
	buttonNeg = new wxButton(this, wxID_ANY, "+/-", wxPoint(230, 450), wxSize(100, 100));
	buttonDvd = new wxButton(this, wxID_ANY, "/", wxPoint(340, 450), wxSize(100, 100));
	buttonDec = new wxButton(this, wxID_ANY, "dec", wxPoint(450, 450), wxSize(100, 100));
}

void CalculatorWindow::OnButtonClicked(wxCommandEvent& evt)
{
	textBox->AppendText(((wxButton*)evt.GetEventObject())->GetLabel());
}