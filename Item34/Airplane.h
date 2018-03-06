#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

class Airplane
{
public:
	virtual void fly() = 0;        //纯虚函数，意味着Airplane是一个接口，派生类要重新定义和实现该纯虚函数
protected:
	void defaultFly();
};

#endif // !_AIRPLANE_H_

