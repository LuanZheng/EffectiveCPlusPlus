#include "Shape.h"
#include <iostream>

void Shape::draw(Color color)
{
	std::cout << "Shape::draw(Color color) called." << std::endl;
	doDraw(color);
}

void Shape::doDraw(Color color)
{
	std::cout << "Shape::doDraw(Color color) called." << std::endl;
	std::cout << "The color is" << color << std::endl;
}
