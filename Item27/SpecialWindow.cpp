#include "SpecialWindow.h"
#include <iostream>

void SpecialWindow::onResize()
{
	std::cout << "SpecialWindow::onResize() called." << std::endl;
	//static_cast<Window>(*this).onResize();      //���󣬸�ת�͵��õĲ��ǵ�ǰ�����ϵĺ���,�����ɵ�ǰ����֮base class����
	Window::onResize();                       //��ȷ
	m_Color = 6;
}