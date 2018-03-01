#ifndef _ATOMICCLOCK_H_
#define _ATOMICCLOCK_H_

#include "TimeKeeper.h"
#include <string>

class AtomicClock : public TimeKeeper
{
public:
	AtomicClock(std::string clockName);
	~AtomicClock();
	void pureVirtualFuncTest();
private:
	std::string atomicClockName;
};

#endif // !_ATOMICCLOCK_H_
