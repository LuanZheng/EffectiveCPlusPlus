#ifndef _GAMECHARACTERFPA_H_
#define _GAMECHARACTERFPA_H_
#include "GameCharacterFP.h"

int loseHealthQuickly(const GameCharacterFP&);
int loseHealthSlowly(const GameCharacterFP&);

class GameCharacterFPA : public GameCharacterFP
{
public:
	explicit GameCharacterFPA(HealthCalcFunc hcf = defaultHealthCalc);
};

#endif // !_GAMECHARACTERFPA_H_

