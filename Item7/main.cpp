#include "AtomicClock.h"
#include "WaterClock.h"

int main()
{
	TimeKeeper* timeKeeperClock = new AtomicClock("Atomic");
	timeKeeperClock->pureVirtualFuncTest();
	if (0 != timeKeeperClock)
	{
		delete timeKeeperClock;
		timeKeeperClock = 0;
	}
	return 0;
}