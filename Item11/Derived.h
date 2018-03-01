#ifndef _DERIVED_H_
#define _DERIVED_H_
#include "Base.h"

class Derived : public Base
{
public:
	Derived();
	int getY();
	void setY(int y);
	Derived(const Derived& derived);
private:
	int m_Y;
};

#endif // !_DERIVED_H_

