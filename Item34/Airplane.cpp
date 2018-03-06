#include "Airplane.h"
#include <iostream>

//纯虚函数，可以在基类中有默认实现，也可以没有
//另一种实现方法是提供默认fly实现，则defaultFly就不需要
//令使用默认fly方法的派生类调用基类的fly()方法
//但这样的话基类的fly接口会被开放给外部（public），而使用defaultFly方法，则可以使得该方法只开放给子类
//void Airplane::fly()
//{
//	std::cout << "Airplane::fly() called." << std::endl;
//}


void Airplane::defaultFly()
{
	std::cout << "Airplane::defaultFly() called." << std::endl;
}