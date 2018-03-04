#include "Date.h"

const int Month::getMonth() const
{
	return m_Month;
}

Month::Month(int month) : m_Month(month)
{

}

Day::Day(int day) : m_Day(day)
{

}

const int Day::getDay() const
{
	return m_Day;
}

Year::Year(int year) : m_Year(year)
{

}

const int Year::getYear() const
{
	return m_Year;
}


Date::Date(Month m, Day day, Year year) : m_Month(m), m_Day(day), m_Year(year)
{

}

const Month Date::month() const
{
	return m_Month;
}

const Day Date::day() const
{
	return m_Day;
}

const Year Date::year() const
{
	return m_Year;
}
