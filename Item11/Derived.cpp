#include "Derived.h"

Derived::Derived()
{

}

void Derived::setY(int y)
{
	m_Y = y;
}

int Derived::getY()
{
	return m_Y;
}

Derived::Derived(const Derived& derived) : Base(derived), m_Y(derived.m_Y)
{

}