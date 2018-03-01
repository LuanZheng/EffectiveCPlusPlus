#include <memory>
#include <iostream>
#include "SimpleFactory.h"

void AutoPtrVersion()
{
	//Investment *pInv = SimpleFactory::getInstance()->createInv();  //这种做法将导致可能的内存泄露
	std::auto_ptr<Investment> pInv(SimpleFactory::getInstance()->createInv());  //以对象管理资源（智能指针），在对象析构时，会自动释放资源

	std::auto_ptr<Investment> pInv1(SimpleFactory::getInstance()->createInv());  //以对象管理资源（智能指针），在对象析构时，会自动释放资源
	std::auto_ptr<Investment> pInv2(pInv1);  //拷贝构造函数，会导致pInv1变成null,pInv2变成所指的对象
	pInv1 = pInv2;                           //赋值运算符，会导致pInv2变成null,pInv1变成所指的对象

	std::cout << "Auto Ptr will be finished." << std::endl;
}

//void daysHeld(Investment* pi);  //前置声明

void daysHeld(Investment* pi)     //或者函数定义在被调用之前
{
	std::cout << "Days Held called." << std::endl;
	pi->print();
}

void RCSPVersion()
{
	std::tr1::shared_ptr<Investment> pInv1(SimpleFactory::getInstance()->createInv());
	std::tr1::shared_ptr<Investment> pInv2(SimpleFactory::getInstance()->createInv());
	pInv1 = pInv2;              //不会有auto_ptr的奇怪行为，pInv1,pInv2均指向同一内存（pInv2），pInv1的原来内存会被释放
	
	daysHeld(pInv1.get());

	std::tr1::shared_ptr<Investment> pInv3(SimpleFactory::getInstance()->createInvReturnSmartPtr());
	pInv3->print();
	daysHeld(pInv3.get());

	std::cout << "RCSP will be finished." << std::endl;
}





int main()
{
	if (true)
	{
		AutoPtrVersion();
		RCSPVersion();
	}
	else
	{

	}
	std::cout << "Finished." << std::endl;
	return 0;
}