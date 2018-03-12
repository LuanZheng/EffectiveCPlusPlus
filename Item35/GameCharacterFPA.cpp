#include "GameCharacterFPA.h"
#include <iostream>

GameCharacterFPA::GameCharacterFPA(HealthCalcFunc hcf) : GameCharacterFP(hcf)
{
	std::cout << "GameCharacterFPA::GameCharacterFPA(HealthCalcFunc hcf = defaultHealthCalc) called." << std::endl;
}

int loseHealthQuickly(const GameCharacterFP&)
{
	std::cout << "loseHealthQuickly(const GameCharacterFP&) called." << std::endl;
	return 0;
}

int loseHealthSlowly(const GameCharacterFP&)
{
	std::cout << "loseHealthSlowly(const GameCharacterFP&) called." << std::endl;
	return 0;
}