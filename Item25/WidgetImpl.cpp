#include "WidgetImpl.h"
#include <iostream>

template <typename T>
WidgetImpl<T>::WidgetImpl()
{
	std::cout << "WidgetImpl::WidgetImpl() called." << std::endl;
}

template <typename T>
WidgetImpl<T>::~WidgetImpl()
{
	std::cout << "WidgetImpl::~WidgetImpl() called." << std::endl;
}