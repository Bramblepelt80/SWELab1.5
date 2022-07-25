#pragma once
#include <string>
#include "../Lab1.5/CalculatorProcessor.h"
#include "../Lab1.5/CalculatorProcessor.cpp"

class CalculatorProcessorTests
{
public:
	static std::string Test1()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "00000000000000000000000000000101";
		std::string input;
		std::string results;
		processor->SetBaseNumber(5);
		input = processor->GetBinary();
		if (input == test)
			results = "Test 1: Pass  ";
		else
			results = "Test 1: Fail  ";
		return results;
	}

	static std::string Test2()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "00000000000000000000000000010000";
		std::string input;
		std::string results;
		processor->SetBaseNumber(16);
		input = processor->GetBinary();
		if (input == test)
			results = "Test 2: Pass  ";
		else
			results = "Test 2: Fail  ";
		return results;
	}

	static std::string Test3()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "0xB";
		std::string input;
		std::string results;
		processor->SetBaseNumber(11);
		input = processor->GetHexadecimal();
		if (input == test)
			results = "Test 3: Pass  ";
		else
			results = "Test 3: Fail  ";
		return results;
	}

	static std::string Test4()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "0x1E";
		std::string input;
		std::string results;
		processor->SetBaseNumber(30);
		input = processor->GetHexadecimal();
		if (input == test)
			results = "Test 4: Pass  ";
		else
			results = "Test 4: Fail  ";
		return results;
	}

	static std::string Test5()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		std::string test = "24";
		std::string input;
		std::string results;
		processor->SetBaseNumber(24);
		input = processor->GetDecimal();
		if (input == test)
			results = "Test 5: Pass  ";
		else
			results = "Test 5: Fail  ";
		return results;
	}

	static std::string Test6()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		int test = 5;
		int input;
		std::string results;
		processor->SetNumber1(2);
		processor->SetNumber2(3);
		processor->SetOperation(0);
		input = processor->ExecuteCommand();
		if (input == test)
			results = "Test 6: Pass  ";
		else
			results = "Test 6: Fail  ";
		return results;
	}
	static std::string Test7()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		int test = 2;
		int input;
		std::string results;
		processor->SetNumber1(7);
		processor->SetNumber2(5);
		processor->SetOperation(1);
		input = processor->ExecuteCommand();
		if (input == test)
			results = "Test 7: Pass  ";
		else
			results = "Test 7: Fail  ";
		return results;
	}

	static std::string Test8()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		int test = 18;
		int input;
		std::string results;
		processor->SetNumber1(2);
		processor->SetNumber2(9);
		processor->SetOperation(2);
		input = processor->ExecuteCommand();
		if (input == test)
			results = "Test 8: Pass  ";
		else
			results = "Test 8: Fail  ";
		return results;
	}

	static std::string Test9()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		int test = 8;
		int input;
		std::string results;
		processor->SetNumber1(24);
		processor->SetNumber2(3);
		processor->SetOperation(3);
		input = processor->ExecuteCommand();
		if (input == test)
			results = "Test 9: Pass  ";
		else
			results = "Test 9: Fail  ";
		return results;
	}

	static std::string Test10()
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		int test = 0;
		int input;
		std::string results;
		processor->SetNumber1(20);
		processor->SetNumber2(2);
		processor->SetOperation(4);
		input = processor->ExecuteCommand();
		if (input == test)
			results = "Test 10: Pass  ";
		else
			results = "Test 10: Fail  ";
		return results;
	}
};
