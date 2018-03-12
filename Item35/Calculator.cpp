#include "Calculator.h"
#include <iostream>
#include "StandardStrategy.h"

Calculator::Calculator(StandardStrategy* pSS) : mp_SS(pSS)
{
	std::cout << "Calculator::Calculator(StandardStrategy* pSS) called." << std::endl;
}

void Calculator::calculate()
{
	std::cout << "Calculator::calculate() called." << std::endl;
	mp_SS->action();
}