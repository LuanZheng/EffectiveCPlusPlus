#include <iostream>
#include "Circle.h"
#include "Rectancle.h"

//模板函数
template<typename T>
void Draw(T& shape)
{
	std::cout << "template function Draw(const T& shape) called. " << std::endl;
	shape.draw();
}

int main()
{
	Circle pCircle;
	Rectancle pRectancle;

	Draw(pCircle);               //编译期多态，具体调用那个draw方法，取决于参数的类型，而该类型是在编译期确定的
	Draw(pRectancle);

	return 0;
}