#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"

class WidgetsApp : public wxApp
{
public:
	CalculatorWindow* window = nullptr;
	virtual bool OnInit();
};

