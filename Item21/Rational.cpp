#include "Rational.h"

Rational::Rational(const int numerator, const int denominator) : m_Numerator(numerator), m_Denominator(denominator)
{

}

Rational::~Rational()
{

}


Rational operator*(const Rational& multiplicator1, const Rational& multiplicator2)
{
	return Rational(multiplicator1.m_Numerator * multiplicator2.m_Numerator, 
		multiplicator1.m_Denominator * multiplicator2.m_Denominator);
}