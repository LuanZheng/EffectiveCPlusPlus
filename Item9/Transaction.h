#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_
#include <string>

class Transaction
{
public:
	explicit Transaction(const std::string& logInfo);
	//���麯������������ʹ��������ľ���ʵ������������Ϊ��������Ϊ�ڻ��๹��ʱ����������δ���죬�麯���޷��½��������ࡣ
	//virtual void logTransaction() const = 0;           
	void logTransaction(const std::string& logInfo) const;
};

#endif // !_TRANSACTION_H_

