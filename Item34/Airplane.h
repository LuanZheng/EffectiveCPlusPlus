#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

class Airplane
{
public:
	virtual void fly() = 0;        //���麯������ζ��Airplane��һ���ӿڣ�������Ҫ���¶����ʵ�ָô��麯��
protected:
	void defaultFly();
};

#endif // !_AIRPLANE_H_

