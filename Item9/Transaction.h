#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_
#include <string>

class Transaction
{
public:
	explicit Transaction(const std::string& logInfo);
	//纯虚函数，本来期望使用派生类的具体实现来表现其行为，错误，因为在基类构造时，派生类尚未构造，虚函数无法下降到派生类。
	//virtual void logTransaction() const = 0;           
	void logTransaction(const std::string& logInfo) const;
};

#endif // !_TRANSACTION_H_

