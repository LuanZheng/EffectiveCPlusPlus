#include "Widget.h"
#include "Derived.h"

int main()
{
	Widget w1;
	w1 = w1;       //ʵ�������ڴ�������һ�ν������·����ڴ�ռ���W1,֮��ɾ��ԭ����W1
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

	//Item 27,��ʱ������ָ��ֵ������ͬ����������»��и�ƫ�����������ڱ�ʩ����Derived���ϡ���ע�⣬����ʱ��
	//�Ҳ�ͬ����������Ϊ���ܲ�ͬ��
	Derived d2;
	Base* pb = &d2;

	return 0;
}