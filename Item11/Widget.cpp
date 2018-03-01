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

Widget::Widget(const Widget& rhs) : m_Flag(rhs.m_Flag)  // : pb(rhs.pb)  //���ڶ�̬������ڴ棬����������Copy���캯����ʹ�ã�
                                                        //�ᵼ�����������ظ��ͷŵ�����
{
	std::cout << "Copy construction funcation called." << std::endl;
	initPb(rhs);
}

Widget& Widget::operator=(const Widget& rhs)
{
	//if (0 != pb)
	//{
	//	delete pb;              //��δ���������⣬��rhs��thisָ����ͬһ����������delete pbʱ��ͬʱҲdelete��rhs
	//	pb = 0;                 //����copy���캯�����оͻᱨ����Ϊrhs.pbΪ��ָ��
	//}

	initPb(rhs);

	m_Flag = rhs.m_Flag;

	return *this;
}


void Widget::initPb(const Widget& rhs)
{
	Bitmap* pOrig = pb;        //������Ĵ��룬�ȱ���һ��this->pb,Ȼ��������ڴ棬���ɾ����ԭ�ڴ�

	pb = new Bitmap(*rhs.pb);  //��������ȼ���������.Ȼ����*,�൱��(*(rhs.pb))
							   //�൱������Bitmap��copy���캯��������rhs.pb�������ǵ�this->pbָ���������

	if (0 != pOrig)
	{
		delete pOrig;
		pOrig = 0;
	}
}
