#ifndef _GAMECHARACTERTR1FUNC_H_
#define _GAMECHARACTERTR1FUNC_H_
#include <functional>

class GameCharacterTR1Func;
int defaultHealthCalcTR1(const GameCharacterTR1Func& gcFP);
typedef std::tr1::function<int(const GameCharacterTR1Func&)> HealthCalcFuncTR1;

class GameCharacterTR1Func
{
public:
	//typedef int(*HealthCalcFunc)(const GameCharacterTR1Func&);

	//默认参数在函数声明中提供，当又有声明又有定义时，定义中不允许默认参数。如果函数只有定义，则默认参数才可出现在函数定义中。
	explicit GameCharacterTR1Func(HealthCalcFuncTR1 hcf = defaultHealthCalcTR1);
	int healthValue() const;
	HealthCalcFuncTR1 operator()() const;
private:
	//在该例子中，healthFunc变成了指向函数的泛化指针
	HealthCalcFuncTR1 healthFunc; //等价于 int(*HealthCalcFunc) (const GameCharacterFP&);
							   //healthFunc为一个函数指针，可以指向一个返回一个int,带参数为const GameCharacterFP&的函数
};



#endif // !_GAMECHARACTERTR1FUNC_H_
