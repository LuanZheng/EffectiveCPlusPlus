#include "AirplaneModelA.h"
#include <iostream>

void AirplaneModelA::fly()
{
	std::cout << "AirplaneModelA::fly() called." << std::endl;
	defaultFly();
}