#ifndef _RATIONAL_H_
#define _RATIONAL_H_

class Rational
{
	friend const Rational operator*(const Rational& multiplicator1, const Rational& multiplicator2);
public:
	Rational(const int numerator, const int denominator = 1);
	~Rational();
	int numerator() const;
	int denominator() const;
	//const Rational operator*(const Rational& rhs) const;   //常量成员函数，最后一个const代表该函数不能修改任何成员变量
private:
	int m_Numerator;
	int m_Denominator;
};



#endif // !_RATIONAL_H_
