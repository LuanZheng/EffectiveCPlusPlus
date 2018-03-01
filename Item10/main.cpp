#include "Complex.h"

int main()
{
	Complex c1(1.7, 1.6);
	c1.print();
	Complex c2(0.9, 1.2);
	c2.print();
	Complex c3;
	c3.print();
	c3 += c2 += c1;
	c1.print();
	c2.print();
	c3.print();
	c1 = c2 = c3;
	c1.print();
	c2.print();
	c3.print();
	return 0;
}