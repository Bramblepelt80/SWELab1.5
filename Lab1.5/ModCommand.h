#pragma once
#include "IBaseCommand.h"

class ModCommand : public IBaseCommand
{
private:
	int _num1;
	int _num2;
public:
	ModCommand(int num1, int num2)
	{
		_num1 = num1;
		_num2 = num2;
	}
	int Execute()
	{
		return _num1 % _num2;
	}
};