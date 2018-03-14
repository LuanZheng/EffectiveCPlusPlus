#ifndef _MYTIMER_H_
#define _MYTIMER_H_

class MyTimer
{
public:
	explicit MyTimer(int tickFrequency);
	virtual void onTick() const;
};

#endif // !_MYTIMER_H_

