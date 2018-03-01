#include "A.h"
#include <iostream>

A::A(int a)
{
	std::cout << "Default construction function A called." << std::endl;
	m_a = a;
	std::cout << m_a << std::endl;
}