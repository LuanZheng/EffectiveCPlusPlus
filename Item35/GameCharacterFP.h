#ifndef _GAMECHARACTERFP_H_
#define _GAMECHARACTERFP_H_

class GameCharacterFP;
int defaultHealthCalc(const GameCharacterFP& gcFP);

class GameCharacterFP
{
public:
	typedef int(*HealthCalcFunc)(const GameCharacterFP&);
	//默认参数在函数声明中提供，当又有声明又有定义时，定义中不允许默认参数。如果函数只有定义，则默认参数才可出现在函数定义中。
	explicit GameCharacterFP(HealthCalcFunc hcf = defaultHealthCalc);
	int healthValue() const;
private:
	HealthCalcFunc healthFunc; //等价于 int(*HealthCalcFunc) (const GameCharacterFP&);
	                           //healthFunc为一个函数指针，可以指向一个返回一个int,带参数为const GameCharacterFP&的函数
};

#endif // !_GAMECHARACTERFP_H_

