#include "GameCharacterFP.h"
#include <iostream>

int defaultHealthCalc(const GameCharacterFP& gcFP)
{
	std::cout << "defaultHealthCalc(const GameCharacterFP& gcFP) called." << std::endl;
	return 0;
}

GameCharacterFP::GameCharacterFP(HealthCalcFunc hcf) : healthFunc(hcf)
{
	std::cout << "GameCharacterFP::GameCharacterFP(HealthCalcFunc hcf) called." << std::endl;
}

int GameCharacterFP::healthValue() const
{
	std::cout << "GameCharacterFP::healthValue() const called." << std::endl;
	return healthFunc(*this);
}