#include "HomeForSale.h"
#include "Uncopyable.h"
#include "HomeForSale2.h"

int main()
{
	HomeForSale homeA;
	//HomeForSale homeB(homeA);      //不可访问
	HomeForSale homeB;
	//homeA = homeB;                 //不可访问

	//Uncopyable uncopyable;         //不可访问
	HomeForSale2 homeA2;
	//HomeForSale2 homeB2(homeA2);   //编译器报错，已删除的函数
	return 0;
}