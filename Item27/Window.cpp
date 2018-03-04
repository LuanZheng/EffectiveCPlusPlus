#include "Window.h"
#include <iostream>

void Window::onResize()
{
	std::cout << "Window::onResize() called." << std::endl;
	m_Height = 8;
}