#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"

class ButtonFactory : public wxFrame
{
private:
	// In order of left to right appearance in window
	wxButton* buttonClr;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* buttonAdd;
	wxButton* buttonMod;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* buttonSub;
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

public:
	ButtonFactory();
	void CreateButtons(CalculatorWindow* parent);
};