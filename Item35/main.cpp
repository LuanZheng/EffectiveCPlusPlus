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
	gc->healthValue();                //healthValue是个成员函数，调用了另一个doHealthValue的虚函数。
	                                  //该虚函数在基类中是个private,但仍然可以体现出多态。
	delete gc;


	//Function points
	//弹性：同一类型可以有不用的健康计算函数
	//弹性：健康计算函数可在运行期动态变更
	GameCharacterFP* gcFPQ = new GameCharacterFPA(loseHealthQuickly);   
	GameCharacterFP* gcFPS = new GameCharacterFPA(loseHealthSlowly);

	gcFPQ->healthValue();
	gcFPS->healthValue();

	//TR1::function
	GameCharacterATR1Func* gcATR1F = new GameCharacterATR1Func(loseHealthQuicklyTR1);  //与FP方法使用起来相同，short会自动转int
	gcATR1F->healthValue();
	
	//利用成员函数来计算的方法
	GameLevel currentLevel;
	GameCharacterATR1Func* gcATR1FMemberCalc = 
		new GameCharacterATR1Func(std::tr1::bind(&GameLevel::health, currentLevel, std::tr1::placeholders::_1));
	gcATR1FMemberCalc->healthValue();

	//利用函数对象来实现
	std::cout << std::endl;
	GameCharacterATR1Func* gcATR1FuncObj =
		new GameCharacterATR1Func((*gcATR1FMemberCalc)());
	(*gcATR1FuncObj)();


	StandardStrategy *pSS = new RealStandardStrategy();
	Calculator *cal = new Calculator(pSS);
	cal->calculate();

	return 0;
}