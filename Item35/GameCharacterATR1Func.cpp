#include "GameCharacterATR1Func.h"
#include <iostream>

//���䣺��ݹ����пؼ�·������������������ʱ��ջ���
//����ʾ��Ȼ����Ϊһ��warning,���ᵼ������ʱ��ѭ�����ã�ԭ�������������ҵݹ������ɵ�
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