#include "SimpleFactory.h"

SimpleFactory* SimpleFactory::instance = 0;  //�ྲ̬��Ա��������

SimpleFactory::SimpleFactory()
{

}

SimpleFactory* SimpleFactory::getInstance()
{
	if (0 == instance)
	{
		instance = new SimpleFactory();
	}
	return instance;
}

Investment* SimpleFactory::createInv()
{
	Investment* pInv = new Investment();
	return pInv;
}

std::tr1::shared_ptr<Investment> SimpleFactory::createInvReturnSmartPtr()
{
	std::tr1::shared_ptr<Investment> pInv(SimpleFactory::getInstance()->createInv());
	return pInv;
}