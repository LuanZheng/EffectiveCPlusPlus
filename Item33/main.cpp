#include "Derived.h"
#include "PrivateDerived.h"

int main()
{
	Derived d;
	d.mf1(1, 2);
	d.mf2();
	d.mf3();
	d.mf5();
	d.mf1(1);
	d.mf1();
	d.mf3(1, 1);

	PrivateDerived d2;
	d2.mf1();

	return 0;
}