#include "TestsWindow.h"
#include "CalculatorProcessorTests.h"
#include "ButtonFactoryTests.h"

TestsWindow::TestsWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Tests", wxPoint(400, 200), wxSize(500, 1000))
{
	textBox = new wxTextCtrl(this, 100, "");

	textBox->AppendText("CalculatorProcessorTests -  ");
	std::string resultsTest1 = CalculatorProcessorTests::Test1();
	textBox->AppendText(resultsTest1);
	std::string resultsTest2 = CalculatorProcessorTests::Test2();
	textBox->AppendText(resultsTest2);
	std::string resultsTest3 = CalculatorProcessorTests::Test3();
	textBox->AppendText(resultsTest3);
	std::string resultsTest4 = CalculatorProcessorTests::Test4();
	textBox->AppendText(resultsTest4);
	std::string resultsTest5 = CalculatorProcessorTests::Test5();
	textBox->AppendText(resultsTest5);
	std::string resultsTest6 = CalculatorProcessorTests::Test6();
	textBox->AppendText(resultsTest6);
	std::string resultsTest7 = CalculatorProcessorTests::Test7();
	textBox->AppendText(resultsTest7);
	std::string resultsTest8 = CalculatorProcessorTests::Test8();
	textBox->AppendText(resultsTest8);
	std::string resultsTest9 = CalculatorProcessorTests::Test9();
	textBox->AppendText(resultsTest9);
	std::string resultsTest10 = CalculatorProcessorTests::Test10();
	textBox->AppendText(resultsTest10);

	textBox->AppendText("ButtonFactoryTests -  ");
	std::string resultsButtonTest1 = ButtonFactoryTests::Test1();
	textBox->AppendText(resultsButtonTest1);
}