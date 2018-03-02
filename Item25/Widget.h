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
		Widget(const Widget& w);             //深copy,对pWImpl重新分配内存，避免多个对象指向同一块内存，在delete时出错
		Widget& operator=(const Widget& w);  //深copy,对pWImpl重新分配内存，避免多个对象指向同一块内存，在delete时出错
		void swap(Widget& other);
	private:
		void copyAction(const Widget& w);  //避免代码重复，抽提出相同代码
		WidgetImpl<T>* pWImpl;
	};

	template<typename T>               //企图偏特化函数模板，那不合法
	void swap(Widget<T>& a, Widget<T>& b)
	{
		a.swap(b);
	}
}

#endif // !_WIDGET_H_

