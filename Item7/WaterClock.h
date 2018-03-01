#ifndef _WATERCLOCK_H_
#define _WATERCLOCK_H_

#include "TimeKeeper.h"
#include <string>

class WaterClock : public TimeKeeper
{
public:
	WaterClock(std::string clockName);
	~WaterClock();
	void pureVirtualFuncTest();
private:
	std::string waterClockName;
};

#endif // !_WATERCLOCK_H_

