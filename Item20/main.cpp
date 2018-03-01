#include "SchoolPerson.h"
#include <iostream>

void testPerson(Person p)
{
	p.print();
}

void testPersonByRef(Person& p)
{
	p.print();
}

void validateSchoolPerson(const SchoolPerson p)
{
	std::cout << "validateSchoolPerson(const SchoolPerson p) called." << std::endl;
}

void validateSchoolPersonByRef(const SchoolPerson& p)
{
	std::cout << "validateSchoolPerson(const SchoolPerson& p) called." << std::endl;
}

int main()
{
	SchoolPerson plato;
	std::cout << "Benchmark start pass by value..." << std::endl;
	validateSchoolPerson(plato);

	std::cout << "Benchmark start pass by ref..." << std::endl;
	validateSchoolPersonByRef(plato);

	SchoolPerson p;
	std::cout << "Benchmark start pass by value test slice..." << std::endl;
	testPerson(p);
	std::cout << "Benchmark start pass by ref test slice..." << std::endl;
	testPersonByRef(p);

	return 0;
}