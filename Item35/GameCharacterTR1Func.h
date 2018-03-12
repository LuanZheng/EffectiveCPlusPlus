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

	//Ĭ�ϲ����ں����������ṩ���������������ж���ʱ�������в�����Ĭ�ϲ������������ֻ�ж��壬��Ĭ�ϲ����ſɳ����ں��������С�
	explicit GameCharacterTR1Func(HealthCalcFuncTR1 hcf = defaultHealthCalcTR1);
	int healthValue() const;
	HealthCalcFuncTR1 operator()() const;
private:
	//�ڸ������У�healthFunc�����ָ�����ķ���ָ��
	HealthCalcFuncTR1 healthFunc; //�ȼ��� int(*HealthCalcFunc) (const GameCharacterFP&);
							   //healthFuncΪһ������ָ�룬����ָ��һ������һ��int,������Ϊconst GameCharacterFP&�ĺ���
};



#endif // !_GAMECHARACTERTR1FUNC_H_
