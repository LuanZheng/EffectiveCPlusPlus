#ifndef _TIMEKEEPER_H_
#define _TIMEKEEPER_H_
#include <iostream>

class TimeKeeper
{
public:
	TimeKeeper();
	virtual void pureVirtualFuncTest() = 0;
	virtual ~TimeKeeper() = 0 { std::cout << "TimeKeeper::~TimeKeeper() called." << std::endl; }; //隐式内联函数
};

#endif // !_TIMEKEEPER_H_

