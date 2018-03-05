#ifndef _BASE_H_
#define _BASE_H_

class Base
{
public:
	Base();
	~Base();
	virtual void mf1() = 0;
	void mf1(int i);
	void mf2();
	virtual void mf3();
	void mf3(int i, int j);
};

#endif // !_BASE_H_

