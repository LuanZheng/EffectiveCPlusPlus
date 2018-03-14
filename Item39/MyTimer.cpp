#include "MyTimer.h"
#include <iostream>

MyTimer::MyTimer(int tickFrequency)
{
	std::cout << "MyTimer::MyTimer(int tickFrequency) called." << std::endl;
}

void MyTimer::onTick() const
{
	std::cout << "MyTimer::onTick() const called." << std::endl;
}


