#ifndef _SIMPLE_FACTORY_H_
#define _SIMPLE_FACTORY_H_
#include "Investment.h"
#include <memory>

class SimpleFactory
{
public:
	static SimpleFactory* getInstance();
	Investment* createInv();
	std::tr1::shared_ptr<Investment> createInvReturnSmartPtr();
private:
	SimpleFactory();
	static SimpleFactory *instance; //ÉùÃ÷
};

#endif // !_SIMPLE_FACTORY_H_

