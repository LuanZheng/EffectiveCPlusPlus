#ifndef _PERSONIMPL_H_
#define _PERSONIMPL_H_
#include <string>
#include "Date.h"

class Date;

class PersonImpl
{
public:
	PersonImpl(const std::string& name, const Date& date);
	const std::string name() const;
	const std::string birthday() const;
private:
	std::string m_Name;
	std::string m_Birthday;
	//Date* dateP;           //正确，可以使用Date指针，只需要声明Date
	//Date date;             //错误，不能使用Date对象，除非include"date.h"
};

#endif // !_PERSONIMPL_H_

