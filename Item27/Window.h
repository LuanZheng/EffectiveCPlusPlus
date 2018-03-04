#ifndef _WINDOW_H_
#define _WINDOW_H_

class Window
{
public:
	virtual void onResize();
protected:
	int m_Height;
};

#endif // !_WINDOW_H_

