#include "Widget.h"
#include "Derived.h"

int main()
{
	Widget w1;
	w1 = w1;       //实际上在内存中做了一次交换，新分配内存空间存放W1,之后删除原来的W1
	Widget w2(w1);

	Base b;

	Derived d;
	d.setX(12);
	d.setY(7);
	int x = d.getX();
	int y = d.getY();

	Derived e(d);

	unsigned int bsize = sizeof(b);   //bsize is 4

	unsigned int dsize = sizeof(d);   //dsize is 8

	return 0;
}