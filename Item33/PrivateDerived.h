#ifndef _PRIVATE_DERIVED_H_
#define _PRIVATE_DERIVED_H_
#include "Base.h"


class PrivateDerived : private Base
{
public:
	//inlineת���������ڴ˴�����using,��Ϊprivate�̳У�Ŀ�ı����ڲ�Ҫ��¶base classȫ���ӿ�
	void mf1() { Base::mf1(); }
};

#endif // !_PRIVATE_DERIVED_H_

