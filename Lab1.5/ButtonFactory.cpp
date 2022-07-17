#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{

}

void ButtonFactory::CreateButtons(CalculatorWindow* parent)
{
	buttonClr = new wxButton(parent, wxID_ANY, "C", wxPoint(450, 10), wxSize(100, 100));
	button1 = new wxButton(parent, wxID_ANY, "1", wxPoint(10, 120), wxSize(100, 100));
	button2 = new wxButton(parent, wxID_ANY, "2", wxPoint(120, 120), wxSize(100, 100));
	button3 = new wxButton(parent, wxID_ANY, "3", wxPoint(230, 120), wxSize(100, 100));
	buttonPls = new wxButton(parent, wxID_ANY, "+", wxPoint(340, 120), wxSize(100, 100));
	buttonMod = new wxButton(parent, wxID_ANY, "mod", wxPoint(450, 120), wxSize(100, 100));
	button4 = new wxButton(parent, wxID_ANY, "4", wxPoint(10, 230), wxSize(100, 100));
	button5 = new wxButton(parent, wxID_ANY, "5", wxPoint(120, 230), wxSize(100, 100));
	button6 = new wxButton(parent, wxID_ANY, "6", wxPoint(230, 230), wxSize(100, 100));
	buttonMns = new wxButton(parent, wxID_ANY, "-", wxPoint(340, 230), wxSize(100, 100));
	buttonBin = new wxButton(parent, wxID_ANY, "bin", wxPoint(450, 230), wxSize(100, 100));
	button7 = new wxButton(parent, wxID_ANY, "7", wxPoint(10, 340), wxSize(100, 100));
	button8 = new wxButton(parent, wxID_ANY, "8", wxPoint(120, 340), wxSize(100, 100));
	button9 = new wxButton(parent, wxID_ANY, "9", wxPoint(230, 340), wxSize(100, 100));
	buttonMlt = new wxButton(parent, wxID_ANY, "*", wxPoint(340, 340), wxSize(100, 100));
	buttonHex = new wxButton(parent, wxID_ANY, "hex", wxPoint(450, 340), wxSize(100, 100));
	buttonEql = new wxButton(parent, wxID_ANY, "=", wxPoint(10, 450), wxSize(100, 100));
	button0 = new wxButton(parent, wxID_ANY, "0", wxPoint(120, 450), wxSize(100, 100));
	buttonNeg = new wxButton(parent, wxID_ANY, "+/-", wxPoint(230, 450), wxSize(100, 100));
	buttonDvd = new wxButton(parent, wxID_ANY, "/", wxPoint(340, 450), wxSize(100, 100));
	buttonDec = new wxButton(parent, wxID_ANY, "dec", wxPoint(450, 450), wxSize(100, 100));
}