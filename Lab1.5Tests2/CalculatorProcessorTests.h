#pragma once
#include <iostream>
#include <string>
#include "../Lab1.5/CalculatorProcessor.h"
#include "../Lab1.5/CalculatorProcessor.cpp"

class CalculatorProcessorTests
{
public:
	//CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	static void Test1()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "00000000000000000000000000000101";
		std::string input;
		processor->SetBaseNumber(5);
		input = processor->GetBinary();
		std::cout << "Test 1: ";
		if (input == test)
			std::cout << "Pass" << std::endl;
		else
			std::cout << "Fail" << std::endl;
	}
};
