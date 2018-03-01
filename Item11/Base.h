#ifndef _BASE_H_
#define _BASE_H_

class Base
{
public:
	Base();
	int getX();
	void setX(int x);
	Base(const Base& base);
private:
	int m_X;
};

#endif // !_BASE_H_
