#include <iostream>
#include "GameCharacterA.h"
#include "GameCharacterFPA.h"
#include "GameCharacterATR1Func.h"
#include "GameLevel.h"
#include "Calculator.h"
#include "RealStandardStrategy.h"

//#include "GameCharacterATR1Func.cpp"


//typedef int(*HealthCalcFunc)(const GameCharacter&);

int main()
{
	//NVI
	GameCharacter* gc = new GameCharacterA();
	gc->healthValue();                //healthValue�Ǹ���Ա��������������һ��doHealthValue���麯����
	                                  //���麯���ڻ������Ǹ�private,����Ȼ�������ֳ���̬��
	delete gc;


	//Function points
	//���ԣ�ͬһ���Ϳ����в��õĽ������㺯��
	//���ԣ��������㺯�����������ڶ�̬���
	GameCharacterFP* gcFPQ = new GameCharacterFPA(loseHealthQuickly);   
	GameCharacterFP* gcFPS = new GameCharacterFPA(loseHealthSlowly);

	gcFPQ->healthValue();
	gcFPS->healthValue();

	//TR1::function
	GameCharacterATR1Func* gcATR1F = new GameCharacterATR1Func(loseHealthQuicklyTR1);  //��FP����ʹ��������ͬ��short���Զ�תint
	gcATR1F->healthValue();
	
	//���ó�Ա����������ķ���
	GameLevel currentLevel;
	GameCharacterATR1Func* gcATR1FMemberCalc = 
		new GameCharacterATR1Func(std::tr1::bind(&GameLevel::health, currentLevel, std::tr1::placeholders::_1));
	gcATR1FMemberCalc->healthValue();

	//���ú���������ʵ��
	std::cout << std::endl;
	GameCharacterATR1Func* gcATR1FuncObj =
		new GameCharacterATR1Func((*gcATR1FMemberCalc)());
	(*gcATR1FuncObj)();


	StandardStrategy *pSS = new RealStandardStrategy();
	Calculator *cal = new Calculator(pSS);
	cal->calculate();

	return 0;
}