#include "Widget.h"
#include <iostream>

Widget::Widget() : MyTimer(100)
{

}

void Widget::lookTheTick()
{
	std::cout << "Widget::lookTheTick() called." << std::endl;
	onTick();
}

void Widget::onTick() const 
{
	std::cout << "Widget::onTick() const called." << std::endl;
}

WidgetViaCom::WidgetTimer::WidgetTimer() : MyTimer(100)
{
}

void WidgetViaCom::WidgetTimer::onTick() const
{
	std::cout << "WidgetViaCom::WidgetTimer::onTick() const called." << std::endl;
}

void WidgetViaCom::lookTheTick()
{
	std::cout << "WidgetViaCom::lookTheTick() called." << std::endl;
	timer.onTick();
}
