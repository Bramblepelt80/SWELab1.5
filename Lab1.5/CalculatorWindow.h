#pragma once
#include "wx/wx.h"

class CalculatorWindow : public wxFrame
{
public:
	CalculatorWindow();
private:
	wxTextCtrl* textBox;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

