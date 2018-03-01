#include "Transaction.h"
#include <iostream>

Transaction::Transaction(const std::string& logInfo)
{
	std::cout << "Transaction::Transaction called." << std::endl;
	logTransaction(logInfo);            //ԭ����������������ľ���ʵ�֣�ʵ�ʴ����ڻ��๹��ʱ����δ�γ�������
}

void Transaction::logTransaction(const std::string& logInfo) const
{
	std::cout << "Transaction::logTransaction called." << std::endl;
	std::cout << logInfo << std::endl;
}