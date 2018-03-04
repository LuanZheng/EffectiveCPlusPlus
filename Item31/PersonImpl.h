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
	//Date* dateP;           //��ȷ������ʹ��Dateָ�룬ֻ��Ҫ����Date
	//Date date;             //���󣬲���ʹ��Date���󣬳���include"date.h"
};

#endif // !_PERSONIMPL_H_

