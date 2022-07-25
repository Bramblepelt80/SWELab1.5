#include "CalculatorProcessor.h"

CalculatorProcessor::CalculatorProcessor()
{

}

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;
//int CalculatorProcessor::baseNumber = 0;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_processor == nullptr)
		_processor = new CalculatorProcessor();
	return _processor;
}