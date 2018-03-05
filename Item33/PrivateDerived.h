#ifndef _PRIVATE_DERIVED_H_
#define _PRIVATE_DERIVED_H_
#include "Base.h"


class PrivateDerived : private Base
{
public:
	//inline转交函数，在此处不用using,因为private继承，目的本在于不要暴露base class全部接口
	void mf1() { Base::mf1(); }
};

#endif // !_PRIVATE_DERIVED_H_

