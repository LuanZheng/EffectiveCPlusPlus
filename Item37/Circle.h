#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include "Shape.h"

class Circle : public Shape
{
public:
	//virtual void draw(Color color = GREEN);   //ע�⣬�����Ĭ��ֵ���¸�ֵGREEN,��ᵼ�·�������
	virtual void doDraw(Color color);
};


#endif // !_CIRCLE_H_
