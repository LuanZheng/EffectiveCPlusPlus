#include <iostream>
#include "Circle.h"
#include "Rectancle.h"

//ģ�庯��
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

	Draw(pCircle);               //�����ڶ�̬����������Ǹ�draw������ȡ���ڲ��������ͣ������������ڱ�����ȷ����
	Draw(pRectancle);

	return 0;
}