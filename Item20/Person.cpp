#include "Person.h"
#include <iostream>

Person::Person()
{
	std::cout << "Person::Person() called." << std::endl;
}

Person::~Person()
{
	std::cout << "Person::~Person() called." << std::endl;
}

Person::Person(const Person& p)
{
	std::cout << "Person::Person(const Person& p) called." << std::endl;
}

void Person::print()
{
	std::cout << "Person::print() called." << std::endl;
}