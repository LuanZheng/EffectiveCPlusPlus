#ifndef _DERIVED_H_
#define _DERIVED_H_
#include "Base.h"

class Derived : public Base
{
public:
	using Base::mf1;               //ʹ��using֮�󣬿���ʹ�û����б��ڸǵĺ��������������ؼ�����
	using Base::mf3;
	void mf1();                    //���麯��������������Ҫ�о���ʵ��
	void mf1(int i, int j);        //�������е�mf1�ڸ��˻��������mf1�����۲����Ƿ�ƥ��
	void mf3();                    //�������е�mf3�ڸ��˻��������mf3�����۲����Ƿ�ƥ��
	void mf5();
};

//class Derived2 : private Base
//{
//public:
//	virtual void mf1();
//};

#endif // !_DERIVED_H_

