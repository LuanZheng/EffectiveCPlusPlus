#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <memory>

class Date;
class PersonImpl;

class Person
{
public:
	Person(const std::string& name, const Date& birthday);
	const std::string name() const;
	const std::string birthDate() const;
private:
	std::tr1::shared_ptr<PersonImpl> pImpl;
};


#endif
