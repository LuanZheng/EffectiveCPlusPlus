#include "GameCharacterATR1Func.h"
#include <iostream>

//补充：如递归所有控件路径，函数将导致运行时堆栈溢出
//该提示虽然表现为一个warning,但会导致运行时死循环调用，原因是无条件自我递归调用造成的
GameCharacterATR1Func::GameCharacterATR1Func(HealthCalcFuncTR1 hcf) : GameCharacterTR1Func(hcf)
{
	std::cout << "GameCharacterATR1Func::GameCharacterATR1Func(HealthCalcFunc hcf) : GameCharacterTR1Func(hcf) called." << std::endl;
}

short loseHealthQuicklyTR1(const GameCharacterTR1Func&)
{
	std::cout << "loseHealthQuicklyTR1(const GameCharacterTR1Func&) called." << std::endl;
	return 0;
}

int loseHealthSlowlyTR1(const GameCharacterTR1Func&)
{
	std::cout << "loseHealthSlowlyTR1(const GameCharacterTR1Func&) called." << std::endl;
	return 0;
}