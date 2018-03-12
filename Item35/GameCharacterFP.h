#ifndef _GAMECHARACTERFP_H_
#define _GAMECHARACTERFP_H_

class GameCharacterFP;
int defaultHealthCalc(const GameCharacterFP& gcFP);

class GameCharacterFP
{
public:
	typedef int(*HealthCalcFunc)(const GameCharacterFP&);
	//Ĭ�ϲ����ں����������ṩ���������������ж���ʱ�������в�����Ĭ�ϲ������������ֻ�ж��壬��Ĭ�ϲ����ſɳ����ں��������С�
	explicit GameCharacterFP(HealthCalcFunc hcf = defaultHealthCalc);
	int healthValue() const;
private:
	HealthCalcFunc healthFunc; //�ȼ��� int(*HealthCalcFunc) (const GameCharacterFP&);
	                           //healthFuncΪһ������ָ�룬����ָ��һ������һ��int,������Ϊconst GameCharacterFP&�ĺ���
};

#endif // !_GAMECHARACTERFP_H_

