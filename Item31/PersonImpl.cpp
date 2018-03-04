#include "PersonImpl.h"
#include <iostream>
#include "Date.h"

PersonImpl::PersonImpl(const std::string& name, const Date& date)
{
	m_Name = name;
	//char year[4];
	//_itoa(date.year().getYear(), year, 10);
	//char month[2];
	//_itoa(date.month().getMonth(), month, 10);
	//char day[2];
	//_itoa(date.day().getDay(), day, 10);
	m_Birthday = "2000-02-01";               //¼ò»¯Æð¼û
}

const std::string PersonImpl::name() const
{
	return m_Name;
}


const std::string PersonImpl::birthday() const
{
	return m_Birthday;
}

