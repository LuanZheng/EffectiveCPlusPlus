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
	std::vector<double> v;  //�����кܶ����ݣ���ζ����ʱ��ܳ�
};

#endif
