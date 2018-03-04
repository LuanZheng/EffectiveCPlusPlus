#include "SpecialWindow.h"
#include <iostream>

void SpecialWindow::onResize()
{
	std::cout << "SpecialWindow::onResize() called." << std::endl;
	//static_cast<Window>(*this).onResize();      //错误，该转型调用的不是当前对象上的函数,会生成当前对象之base class副本
	Window::onResize();                       //正确
	m_Color = 6;
}