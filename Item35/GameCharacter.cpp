#include "GameCharacter.h"
#include <iostream>

//普通成员函数，派生类不重新定义该函数
int GameCharacter::healthValue() const
{
	//做一些事前工作
	int retVal = doHealthValue();    //做真正的工作，依赖虚函数
	//做一些事后工作
	return retVal;
}

int GameCharacter::doHealthValue() const
{
	std::cout << "GameCharacter::doHealthValue() called." << std::endl;
	return 0;
}