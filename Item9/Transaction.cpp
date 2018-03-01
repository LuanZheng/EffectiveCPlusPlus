#include "Transaction.h"
#include <iostream>

Transaction::Transaction(const std::string& logInfo)
{
	std::cout << "Transaction::Transaction called." << std::endl;
	logTransaction(logInfo);            //原本期望利用派生类的具体实现，实际错误，在基类构造时，尚未形成派生类
}

void Transaction::logTransaction(const std::string& logInfo) const
{
	std::cout << "Transaction::logTransaction called." << std::endl;
	std::cout << logInfo << std::endl;
}