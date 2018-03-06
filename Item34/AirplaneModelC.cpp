#include "AirplaneModelC.h"
#include <iostream>

void AirplaneModelC::fly()
{
	std::cout << "AirplaneModelC::fly() called." << std::endl;
	std::cout << "This type Airplane will use its specific fly action. Cound not use default." << std::endl;
}