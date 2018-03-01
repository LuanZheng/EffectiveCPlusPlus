#ifndef _BUYTRANSACTION_H_
#define _BUYTRANSACTION_H_

#include "Transaction.h"

class BuyTransaction : public Transaction
{
public:
	BuyTransaction(const unsigned int transId);
	//virtual void logTransaction() const;
private:
	//以下函数定义为static的原因是，使用该方法调用之时，基类与派生类都尚未完成初始化。所以只能使用静态方法。
	//使用该方法将派生类的相关数据上传到基类的构造函数，使得基类构造函数知道实际行为是由哪个派生类发生，同时获得正确的数据。
	static const std::string createLogString(const unsigned int parameters);
};

#endif // !_BUYTRANSACTION_H_
