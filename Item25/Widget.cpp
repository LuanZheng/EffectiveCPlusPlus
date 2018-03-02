#include "Widget.h"
#include <iostream>

template <typename T>
WidgetStuff::Widget<T>::Widget() : pWImpl(0)
{
	std::cout << "Widget::Widget() called." << std::endl;
	pWImpl = new WidgetImpl<T>();
}

template <typename T>
WidgetStuff::Widget<T>::~Widget()
{
	std::cout << "Widget::~Widget() called." << std::endl;
	if (0 != pWImpl)
	{
		delete pWImpl;
		pWImpl = 0;
	}
}

template <typename T>
WidgetStuff::Widget<T>::Widget(const Widget& w)
{
	std::cout << "Widget::Widget(const Widget& w) called." << std::endl;
	copyAction(w);
}

template <typename T>
WidgetStuff::Widget<T>& WidgetStuff::Widget<T>::operator=(const Widget& w)
{
	std::cout << "Widget& Widget::operator=(const Widget& w) called." << std::endl;
	copyAction(w);
	return *this;
}

template <typename T>
void WidgetStuff::Widget<T>::copyAction(const Widget& w)
{
	std::cout << "Widget::copyAction(const Widget& w) called." << std::endl;
	WidgetImpl* pOri = pWImpl;
	pWImpl = new WidgetImpl();
	*pWImpl = *(w.pWImpl);
	if (0 != pOri)
	{
		delete pOri;
		pOri = 0;
	}
}

template <typename T>
void WidgetStuff::Widget<T>::swap(Widget& other)
{
	std::swap(this->pWImpl, other.pWImpl);
}