#include "Derived.h"
#include <iostream>

void Derived::mf1()
{
	std::cout << "Derived::mf1() called." << std::endl;
}

void Derived::mf1(int i, int j)
{
	std::cout << "Derived::mf1(int i, int j) called." << std::endl;
}

void Derived::mf3()
{
	std::cout << "Derived::mf3() called." << std::endl;
}

void Derived::mf5()
{
	std::cout << "Derived::mf5() called." << std::endl;
	//Base::mf1(2);               //��������Ҳ�����������ַ�ʽ���û��෽��
}

//void Derived2::mf1()
//{
//
//}
