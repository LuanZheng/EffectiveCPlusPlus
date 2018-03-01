#include "Date.h"

Month::Month(int month) : m_Month(month)
{

}

Day::Day(int day) : m_Day(day)
{

}

Year::Year(int year) : m_Year(year)
{

}


Date::Date(Month m, Day day, Year year) : m_Month(m), m_Day(day), m_Year(year)
{

}