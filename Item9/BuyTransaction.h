#ifndef _BUYTRANSACTION_H_
#define _BUYTRANSACTION_H_

#include "Transaction.h"

class BuyTransaction : public Transaction
{
public:
	BuyTransaction(const unsigned int transId);
	//virtual void logTransaction() const;
private:
	//���º�������Ϊstatic��ԭ���ǣ�ʹ�ø÷�������֮ʱ�������������඼��δ��ɳ�ʼ��������ֻ��ʹ�þ�̬������
	//ʹ�ø÷��������������������ϴ�������Ĺ��캯����ʹ�û��๹�캯��֪��ʵ����Ϊ�����ĸ������෢����ͬʱ�����ȷ�����ݡ�
	static const std::string createLogString(const unsigned int parameters);
};

#endif // !_BUYTRANSACTION_H_
