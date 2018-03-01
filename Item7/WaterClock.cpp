#include "WaterClock.h"
#include <iostream>

WaterClock::WaterClock(std::string clockName) : waterClockName(clockName)
{
	std::cout << "WaterClock::WaterClock() called." << std::endl;
	std::cout << waterClockName << std::endl;
}

WaterClock::~WaterClock()
{
	std::cout << "WaterClock::~WaterClock() called." << std::endl;
}

void WaterClock::pureVirtualFuncTest()
{
	std::cout << "WaterClock::pureVirtualFuncTest() called." << std::endl;
}