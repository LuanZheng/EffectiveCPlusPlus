#include "Circle.h"

int main()
{
	Circle c;
	c.draw();

	Shape *s = new Circle();
	s->draw();

	return 0;
}