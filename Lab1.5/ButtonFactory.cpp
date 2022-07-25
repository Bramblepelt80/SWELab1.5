#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{

}

void ButtonFactory::CreateButtons(CalculatorWindow* parent)
{
	buttonClr = new wxButton(parent, 120, "C", wxPoint(450, 10), wxSize(100, 100));
	button1 = new wxButton(parent, 101, "1", wxPoint(10, 120), wxSize(100, 100));
	button2 = new wxButton(parent, 102, "2", wxPoint(120, 120), wxSize(100, 100));
	button3 = new wxButton(parent, 103, "3", wxPoint(230, 120), wxSize(100, 100));
	buttonAdd = new wxButton(parent, 111, "+", wxPoint(340, 120), wxSize(100, 100));
	buttonMod = new wxButton(parent, 115, "mod", wxPoint(450, 120), wxSize(100, 100));
	button4 = new wxButton(parent, 104, "4", wxPoint(10, 230), wxSize(100, 100));
	button5 = new wxButton(parent, 105, "5", wxPoint(120, 230), wxSize(100, 100));
	button6 = new wxButton(parent, 106, "6", wxPoint(230, 230), wxSize(100, 100));
	buttonSub = new wxButton(parent, 112, "-", wxPoint(340, 230), wxSize(100, 100));
	buttonBin = new wxButton(parent, 116, "bin", wxPoint(450, 230), wxSize(100, 100));
	button7 = new wxButton(parent, 107, "7", wxPoint(10, 340), wxSize(100, 100));
	button8 = new wxButton(parent, 108, "8", wxPoint(120, 340), wxSize(100, 100));
	button9 = new wxButton(parent, 109, "9", wxPoint(230, 340), wxSize(100, 100));
	buttonMlt = new wxButton(parent, 113, "*", wxPoint(340, 340), wxSize(100, 100));
	buttonHex = new wxButton(parent, 117, "hex", wxPoint(450, 340), wxSize(100, 100));
	buttonEql = new wxButton(parent, 121, "=", wxPoint(10, 450), wxSize(100, 100));
	button0 = new wxButton(parent, 110, "0", wxPoint(120, 450), wxSize(100, 100));
	buttonNeg = new wxButton(parent, 119, "+/-", wxPoint(230, 450), wxSize(100, 100));
	buttonDvd = new wxButton(parent, 114, "/", wxPoint(340, 450), wxSize(100, 100));
	buttonDec = new wxButton(parent, 118, "dec", wxPoint(450, 450), wxSize(100, 100));
}