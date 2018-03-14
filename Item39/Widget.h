#ifndef _WIDGET_H_
#define _WIDGET_H_
#include "MyTimer.h"

//ʹ��private�̳б���is-implement-in-terms-of
class Widget : private MyTimer
{
public:
	Widget();
	void lookTheTick();
private:
	virtual void onTick() const;
};

//ʹ�ø��ϱ���is-implement-in-terms-of
class WidgetViaCom
{
public:
	void lookTheTick();
private:
	class WidgetTimer : public MyTimer
	{
	public:
		WidgetTimer();
		virtual void onTick() const;
	};
	WidgetTimer timer;
};

#endif // !_WIDGET_H_

