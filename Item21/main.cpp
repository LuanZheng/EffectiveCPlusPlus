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
	int c = a * b;   //���ز���Ӱ��������*�����
	

	//Rational r5 = r2 * 2;      //��ȷ��r2��operator*��Ա������2����Ϊ����������ͨ�����캯��������ʽת����
	                           //��intת����Rational
	//Rational r6 = 2 * r2;      //����2����Ϊ�����ߣ���û��operator*��Ա������Ҳ�޷��Լ����Լ�����ת��

	return 0;
}