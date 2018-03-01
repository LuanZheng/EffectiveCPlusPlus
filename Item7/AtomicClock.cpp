#include "AtomicClock.h"
#include <iostream>

AtomicClock::AtomicClock(std::string clockName) : atomicClockName(clockName)
{
	std::cout << "AtomicClock::AtomicClock() called." << std::endl;
	std::cout << atomicClockName << std::endl;
}

AtomicClock::~AtomicClock()
{
	std::cout << "AtomicClock::~AtomicClock() called." << std::endl;
}

void AtomicClock::pureVirtualFuncTest()
{
	std::cout << "AtomicClock::pureVirtualFuncTest() called." << std::endl;
}