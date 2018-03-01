#ifndef _DATE_H_
#define _DATE_H_

class Month
{
public:
	static Month Jan() { return Month(1); }
	static Month Feb() { return Month(2); }
	static Month Mar() { return Month(3); }
	static Month Apr() { return Month(4); }
	static Month May() { return Month(5); }
	static Month Jun() { return Month(6); }
	static Month Jul() { return Month(7); }
	static Month Aug() { return Month(8); }
	static Month Sep() { return Month(9); }
	static Month Oct() { return Month(10); }
	static Month Nov() { return Month(11); }
	static Month Dec() { return Month(12); }
private:
	explicit Month(int m);
	int m_Month;
};

class Day
{
public:
	explicit Day(int day);
private:
	int m_Day;
};

class Year
{
public:
	explicit Year(int year);
private:
	int m_Year;
};

class Date
{
public:
	Date(Month m, Day day, Year year);
private:
	Month m_Month;
	Day m_Day;
	Year m_Year;
};

#endif // !_DATE_H_

