#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"

class WidgetsApp : public wxApp
{
	CalculatorWindow* window = nullptr;
public:
	virtual bool OnInit();
};

