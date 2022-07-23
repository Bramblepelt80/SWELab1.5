#pragma once
#include <string>
class CalculatorProcessor
{
private:
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	int baseNumber;
	std::string textBoxInput;
public:
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
			_processor = new CalculatorProcessor();
		return _processor;
	}

	void SetBaseNumber(int num)
	{
		baseNumber = num;
	}

	void GetTextBoxInput(std::string input)
	{
		textBoxInput = input;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}

	std::string GetBinary()
	{
		std::string results = "";
		int num = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (num % 2 == 0)
			{
				results = "0" + results;
			}
			else
				results = "1" + results;
			num /= 2;
		}
		return results;
	}
	std::string GetHexadecimal()
	{
		std::string results = "";
		int num = baseNumber;
		while (num > 0)
		{
			int mod = num % 16;
			if (mod < 10)
				results = std::to_string(mod) + results;
			else if (mod == 10)
				results = "A" + results;
			else if (mod == 11)
				results = "B" + results;
			else if (mod == 12)
				results = "C" + results;
			else if (mod == 13)
				results = "D" + results;
			else if (mod == 14)
				results = "E" + results;
			else if (mod == 15)
				results = "F" + results;
			num /= 16;
		}
		results = "0x" + results;

		return results;
	}

	int Add(int num1, int num2)
	{
		return num1 + num2;
	}

	int Subtract(int num1, int num2)
	{
		return num1 - num2;
	}

	int Multiply(int num1, int num2)
	{
		return num1 * num2;
	}

	int Divide(int num1, int num2)
	{
		return num1 / num2;
	}

	int Mod(int num1, int num2)
	{
		return num1 % num2;
	}
};

