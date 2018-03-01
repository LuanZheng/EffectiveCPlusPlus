#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

class Person
{
public:
	Person();
	~Person();
	Person(const Person& p);
	virtual void print();
private:
	std::string m_PersonName;
	std::string m_PersonAddress;
};

#endif // !_PERSON_H_

