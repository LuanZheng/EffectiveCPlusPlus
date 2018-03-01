#ifndef _SCHOOLPERSON_H_
#define _SCHOOLPERSON_H_
#include "Person.h"

class SchoolPerson : public Person
{
public:
	SchoolPerson();
	~SchoolPerson();
	SchoolPerson(const SchoolPerson& sp);
	virtual void print();
private:
	std::string m_SchoolPersonName;
	std::string m_SchoolPersonAddress;
};

#endif // !_SCHOOLPERSON_H_

