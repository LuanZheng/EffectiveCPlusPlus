#include <iostream>
#include "Person.h"
#include "Date.h"

int main()
{
	std::string name = "ZhangSan";
	Date birthday(Month::Feb(), Day(1), Year(2000));
	Person p(name, birthday);
	std::cout << p.name() << p.birthDate() << std::endl;
	return 0;
}