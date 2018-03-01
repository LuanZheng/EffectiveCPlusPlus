#include "BuyTransaction.h"
#include <iostream>

//void BuyTransaction::logTransaction() const
//{
//	std::cout << "BuyTransaction::logTransaction() called." << std::endl;
//}

BuyTransaction::BuyTransaction(const unsigned int transId) : Transaction(createLogString(transId))
{
	std::cout << "BuyTransaction::BuyTransaction called." << std::endl;
}

const std::string BuyTransaction::createLogString(const unsigned int parameters)
{
	std::cout << "BuyTransaction::createLogString called." << std::endl;
	std::string retStr;
	switch (parameters)
	{
	case 0:
		retStr = "BuyTransaction is logging.";
		break;
	case 1:
		retStr = "SellTransaction is logging.";
		break;
	default:
		retStr = "DefaultTransaction is logging.";
		break;
	}
	return retStr;
}