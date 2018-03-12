#include "GameCharacterTR1Func.h"
#include <iostream>

int defaultHealthCalcTR1(const GameCharacterTR1Func& gcFP)
{
	std::cout << "defaultHealthCalcTR1(const GameCharacterTR1Func& gcFP) called." << std::endl;
	return 0;
}

GameCharacterTR1Func::GameCharacterTR1Func(HealthCalcFuncTR1 hcf) : healthFunc(hcf)
{
	std::cout << "GameCharacterTR1Func::GameCharacterTR1Func(HealthCalcFunc hcf) called." << std::endl;
}

int GameCharacterTR1Func::healthValue() const
{
	std::cout << "GameCharacterTR1Func::healthValue() called." << std::endl;
	return healthFunc(*this);
}

HealthCalcFuncTR1 GameCharacterTR1Func::operator()() const
{
	std::cout << "GameCharacterTR1Func::operator()() const called." << std::endl;
	return healthFunc;
}
