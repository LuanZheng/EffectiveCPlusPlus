#ifndef _SHAPE_H_
#define _SHAPE_H_

enum Color{RED, GREEN, BLUE, YELLOW};

class Shape
{
public:
	void draw(Color color = RED);
	virtual void doDraw(Color color);
};

#endif // !_SHAPE_H_
