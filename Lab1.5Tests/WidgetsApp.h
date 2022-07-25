#pragma once
#include "wx/wx.h"
#include "TestsWindow.h"

class WidgetsApp : public wxApp
{
public:
	TestsWindow* window = nullptr;
	virtual bool OnInit();
};

