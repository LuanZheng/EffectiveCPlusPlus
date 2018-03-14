#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include "Shape.h"

class Circle : public Shape
{
public:
	//virtual void draw(Color color = GREEN);   //注意，这里对默认值重新赋值GREEN,这会导致分裂现象
	virtual void doDraw(Color color);
};


#endif // !_CIRCLE_H_
