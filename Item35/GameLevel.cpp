#include "GameLevel.h"
#include <iostream>

//成员函数计算方法
double GameLevel::health(const GameCharacterTR1Func&) const
{
	std::cout << "GameLevel::health(const GameCharacterTR1Func&) called." << std::endl;
	return 1.1;
}
