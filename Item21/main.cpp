#include "Rational.h"

int main()
{
	Rational r1(2, 3);
	Rational r2(3, 5);
	Rational r3 = r1 * r2;
	Rational r4 = r1 * r2 * r3;
	return 0;
}