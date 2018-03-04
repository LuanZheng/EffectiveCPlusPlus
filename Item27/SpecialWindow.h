#ifndef _SPECIALWINDOW_H_
#define _SPECIALWINDOW_H_

#include "Window.h"
class SpecialWindow : public Window
{
public:
	virtual void onResize();
private:
	int m_Color;
};

#endif // !_SPECIALWINDOW_H_

