#ifndef _RATIONAL_H_
#define _RATIONAL_H_

class Rational
{
	friend const Rational operator*(const Rational& multiplicator1, const Rational& multiplicator2);
public:
	Rational(const int numerator, const int denominator);
	~Rational();
private:
	int m_Numerator;
	int m_Denominator;
};



#endif // !_RATIONAL_H_
