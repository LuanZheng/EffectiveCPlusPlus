#include "Person.h"
#include "PersonImpl.h"

Person::Person(const std::string & name, const Date & birthday) : pImpl(new PersonImpl(name, birthday))
{

}

const std::string Person::name() const
{
	return pImpl->name();
}

const std::string Person::birthDate() const
{
	return pImpl->birthday();
}


