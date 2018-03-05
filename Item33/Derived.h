#ifndef _DERIVED_H_
#define _DERIVED_H_
#include "Base.h"

class Derived : public Base
{
public:
	using Base::mf1;               //使用using之后，可以使得基类中被遮盖的函数在派生类中重见光明
	using Base::mf3;
	void mf1();                    //纯虚函数在派生类中需要有具体实现
	void mf1(int i, int j);        //派生类中的mf1遮盖了基类的所有mf1，不论参数是否匹配
	void mf3();                    //派生类中的mf3遮盖了基类的所有mf3，不论参数是否匹配
	void mf5();
};

//class Derived2 : private Base
//{
//public:
//	virtual void mf1();
//};

#endif // !_DERIVED_H_

