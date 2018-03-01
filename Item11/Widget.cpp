#include "Widget.h"
#include <iostream>

Widget::Widget()
{
	pb = new Bitmap(1,1);
	m_Flag = 666;
}

Widget::~Widget()
{
	if (0 != pb)
	{
		delete pb;
		pb = 0;
	}
}

Widget::Widget(const Widget& rhs) : m_Flag(rhs.m_Flag)  // : pb(rhs.pb)  //对于动态分配的内存，不能这样在Copy构造函数中使用，
                                                        //会导致析构函数重复释放的问题
{
	std::cout << "Copy construction funcation called." << std::endl;
	initPb(rhs);
}

Widget& Widget::operator=(const Widget& rhs)
{
	//if (0 != pb)
	//{
	//	delete pb;              //这段代码存在问题，若rhs和this指的是同一个对象，则在delete pb时，同时也delete了rhs
	//	pb = 0;                 //后面copy构造函数运行就会报错。因为rhs.pb为空指针
	//}

	initPb(rhs);

	m_Flag = rhs.m_Flag;

	return *this;
}


void Widget::initPb(const Widget& rhs)
{
	Bitmap* pOrig = pb;        //修正后的代码，先保存一下this->pb,然后分配新内存，最后删除掉原内存

	pb = new Bitmap(*rhs.pb);  //运算符优先级，先运算.然后是*,相当于(*(rhs.pb))
							   //相当于利用Bitmap的copy构造函数，利用rhs.pb副本，是的this->pb指向这个副本

	if (0 != pOrig)
	{
		delete pOrig;
		pOrig = 0;
	}
}
