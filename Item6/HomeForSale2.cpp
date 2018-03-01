#include "HomeForSale2.h"

HomeForSale2::HomeForSale2()
{

}

void HomeForSale2::TestCopyInClass()
{
	HomeForSale2 homeA;
	//HomeForSale2 homeB(homeA);              //编译器报错，无法引用，他是已删除的函数,在homeForSale里面，是连接器报错，无法解析的外部符号
}