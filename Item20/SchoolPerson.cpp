#include "SchoolPerson.h"
#include <iostream>

SchoolPerson::SchoolPerson()
{
	std::cout << "SchoolPerson::SchoolPerson() called." << std::endl;
}

SchoolPerson::~SchoolPerson()
{
	std::cout << "SchoolPerson::~SchoolPerson() called." << std::endl;
}

SchoolPerson::SchoolPerson(const SchoolPerson& sp)
{
	std::cout << "SchoolPerson::SchoolPerson(const SchoolPerson& sp) called." << std::endl;
	this->m_SchoolPersonAddress = sp.m_SchoolPersonAddress;
	this->m_SchoolPersonName = sp.m_SchoolPersonName;
}

void SchoolPerson::print()
{
	std::cout << "SchoolPerson::print() called." << std::endl;
}