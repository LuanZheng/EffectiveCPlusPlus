#ifndef _WIDGET_H_
#define _WIDGET_H_
#include "Bitmap.h"

class Widget
{
public:
	Widget();
	~Widget();
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs);
private:
	void initPb(const Widget& rhs);       //该函数为了避免重复代码，抽提的共用代码
	int m_Flag;        //注意，增添成员变量后，需要在copy构造函数和copy赋值操作符中进行同步改变
	Bitmap *pb;
};

#endif // !_WIDGET_H_
