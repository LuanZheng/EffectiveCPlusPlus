#include "GameLevel.h"
#include <iostream>

//��Ա�������㷽��
double GameLevel::health(const GameCharacterTR1Func&) const
{
	std::cout << "GameLevel::health(const GameCharacterTR1Func&) called." << std::endl;
	return 1.1;
}
