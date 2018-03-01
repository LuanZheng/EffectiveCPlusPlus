#include "Investment.h"
#include <iostream>

Investment::Investment()
{
	std::cout << "Investment::Investment() called." << std::endl;
}

Investment::~Investment()
{
	std::cout << "Investment::~Investment() called." << std::endl;
}

void Investment::invest(const int amount)
{
	std::cout << "Investment::invest called." << amount << "Invest." << std::endl;
}

Investment* Investment::get()
{
	return this;
}

void Investment::print()
{
	std::cout << "Investment::print() called." << std::endl;
}