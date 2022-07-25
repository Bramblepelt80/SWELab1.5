#pragma once
#include <string>
#include <vector>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"
#include "ModCommand.h"
class CalculatorProcessor
{
private:
	CalculatorProcessor();
	static CalculatorProcessor* _processor;
	int baseNumber = 0;
	int _num1 = 0;
	int _num2 = 0;
	int operation = -1;
	std::vector<IBaseCommand*> commands;
public:
	static CalculatorProcessor* GetInstance();
	/*{
		if (_processor == nullptr)
			_processor = new CalculatorProcessor();
		return _processor;
	}*/

	void SetBaseNumber(int num)
	{
		baseNumber = num;
	}

	void SetNumber1(int num)
	{
		_num1 = num;
	}

	void SetNumber2(int num)
	{
		_num2 = num;
	}

	void SetOperation(int num)
	{
		switch (num)
		{
		case 0:
			operation = 0;
			break;
		case 1:
			operation = 1;
			break;
		case 2:
			operation = 2;
			break;
		case 3:
			operation = 3;
			break;
		case 4:
			operation = 4;
			break;
		}
	}

	int ExecuteCommand()
	{
		int result = 0;
		AddCommand* add;
		SubtractCommand* sub;
		MultiplyCommand* mlt;
		DivideCommand* dvd;
		ModCommand* mod;
		switch (operation)
		{
		case 0:
			add = new AddCommand(_num1, _num2);
			commands.push_back(add);
			break;
		case 1:
			sub = new SubtractCommand(_num1, _num2);
			commands.push_back(sub);
			break;
		case 2:
			mlt = new MultiplyCommand(_num1, _num2);
			commands.push_back(mlt);
			break;
		case 3:
			dvd = new DivideCommand(_num1, _num2);
			commands.push_back(dvd);
			break;
		case 4:
			mod = new ModCommand(_num1, _num2);
			commands.push_back(mod);
			break;
		}
		for (int i = 0; i < commands.size(); i++)
		{
			result = commands[i]->Execute();
		}
		return result;
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
};

