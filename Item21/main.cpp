#include "Rational.h"

//const Rational operator*(const Rational& multiplicator1, const Rational& multiplicator2)
//{
//	return Rational(multiplicator1.numerator() * multiplicator2.numerator(), 
//			multiplicator1.denominator() * multiplicator2.denominator());
//}

int main()
{
	Rational r1(2, 3);
	Rational r2(3, 5);
	Rational r3 = r1 * r2;
	Rational r4 = r1 * r2 * r3;

	int a = 6; 
	int b = 7;
	int c = a * b;   //重载不会影响正常的*运算符
	

	//Rational r5 = r2 * 2;      //正确，r2有operator*成员函数，2（作为参数）可以通过构造函数进行隐式转换，
	                           //从int转换成Rational
	//Rational r6 = 2 * r2;      //错误，2（作为调用者）并没有operator*成员函数，也无法自己对自己进行转换

	return 0;
}