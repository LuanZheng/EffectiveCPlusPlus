#include "Complex.h"
#include <iostream>

Complex::Complex():m_RealPart(0), m_ImagePart(0)
{

}

Complex::Complex(const double real, const double image) : m_RealPart(real), m_ImagePart(image)
{

}

Complex& Complex::operator=(const Complex& rhs)
{
	m_RealPart = rhs.m_RealPart;
	m_ImagePart = rhs.m_ImagePart;
	return *this;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	m_RealPart += rhs.m_RealPart;
	m_ImagePart += rhs.m_ImagePart;
	return *this;
}

void Complex::print()
{
	std::cout << "Real Part: " << m_RealPart << std::endl;
	std::cout << "Image Part: " << m_ImagePart << std::endl;
}