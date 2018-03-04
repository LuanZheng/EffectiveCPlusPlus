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

	//Item 27,有时候下面指针值并不相同，这种情况下会有个偏移量在运行期被施行与Derived身上。请注意，是有时候。
	//且不同编译器的行为可能不同。
	Derived d2;
	Base* pb = &d2;

	return 0;
}