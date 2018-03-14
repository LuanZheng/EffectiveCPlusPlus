#include "Widget.h"
#include <iostream>

int main()
{
	Widget widget;
	widget.lookTheTick();

	std::cout << "-----------------------------" << std::endl;

	WidgetViaCom widgetViaCom;
	widgetViaCom.lookTheTick();
	return 0;
}