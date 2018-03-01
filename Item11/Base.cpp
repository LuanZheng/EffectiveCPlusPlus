#include "Base.h"

void Base::setX(int x)
{
	m_X = x;
}

int Base::getX()
{
	return m_X;
}

Base::Base(const Base& base) : m_X(base.m_X)
{

}

Base::Base()
{

}