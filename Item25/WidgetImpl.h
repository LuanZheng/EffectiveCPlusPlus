#ifndef _WIDGETIMPL_H_
#define _WIDGETIMPL_H_
#include <vector>

template<typename T>
class WidgetImpl
{
public:
	WidgetImpl();
	~WidgetImpl();
private:
	int a, b, c;
	std::vector<double> v;  //可能有很多数据，意味复制时间很长
};

#endif
