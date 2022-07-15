#pragma once
#include "wx/wx.h"

class CalculatorWindow : public wxFrame
{
public:
	CalculatorWindow();
private:
	// In order of left to right appearance in window
	wxTextCtrl* textBox;
	wxButton* buttonClr;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* buttonPls;
	wxButton* buttonMod;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* buttonMns;
	wxButton* buttonBin;
	wxButton* button7;
	wxButton* button8;
	wxButton* button9;
	wxButton* buttonMlt;
	wxButton* buttonHex;
	wxButton* buttonEql;
	wxButton* button0;
	wxButton* buttonNeg;
	wxButton* buttonDvd;
	wxButton* buttonDec;
};

