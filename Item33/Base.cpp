#include "Base.h"
#include <iostream>

Base::Base()
{
	std::cout << "Base::Base() called." << std::endl;
}

Base::~Base()
{
	std::cout << "Base::~Base() called." << std::endl;
}

void Base::mf1()
{
	std::cout << "Base::mf1() called." << std::endl;
}

void Base::mf1(int i)
{
	std::cout << "Base::mf1(int i) called." << std::endl;
}

void Base::mf2()
{
	std::cout << "Base::mf2() called." << std::endl;
}

void Base::mf3()
{
	std::cout << "Base::mf3() called." << std::endl;
}

void Base::mf3(int i, int j)
{
	std::cout << "Base::mf3(int i, int j) called." << std::endl;
}
