#ifndef _GAMECHARACTERATR1FUNC_H_
#define _GAMECHARACTERATR1FUNC_H_
#include "GameCharacterTR1Func.h"

short loseHealthQuicklyTR1(const GameCharacterTR1Func&);
int loseHealthSlowlyTR1(const GameCharacterTR1Func&);



class GameCharacterATR1Func : public GameCharacterTR1Func
{
public:
	explicit GameCharacterATR1Func(HealthCalcFuncTR1 hcf = defaultHealthCalcTR1);
};

#endif // !_GAMECHARACTERATR1FUNC_H_

