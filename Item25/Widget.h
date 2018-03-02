#ifndef _WIDGET_H_
#define _WIDGET_H_
#include "WidgetImpl.h"
#include "WidgetImpl.cpp"

namespace WidgetStuff
{

	template<typename T>
	class Widget
	{
	public:
		Widget();
		~Widget();
		Widget(const Widget& w);             //��copy,��pWImpl���·����ڴ棬����������ָ��ͬһ���ڴ棬��deleteʱ����
		Widget& operator=(const Widget& w);  //��copy,��pWImpl���·����ڴ棬����������ָ��ͬһ���ڴ棬��deleteʱ����
		void swap(Widget& other);
	private:
		void copyAction(const Widget& w);  //��������ظ����������ͬ����
		WidgetImpl<T>* pWImpl;
	};

	template<typename T>               //��ͼƫ�ػ�����ģ�壬�ǲ��Ϸ�
	void swap(Widget<T>& a, Widget<T>& b)
	{
		a.swap(b);
	}
}

#endif // !_WIDGET_H_

