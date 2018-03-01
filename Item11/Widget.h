#ifndef _WIDGET_H_
#define _WIDGET_H_
#include "Bitmap.h"

class Widget
{
public:
	Widget();
	~Widget();
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs);
private:
	void initPb(const Widget& rhs);       //�ú���Ϊ�˱����ظ����룬����Ĺ��ô���
	int m_Flag;        //ע�⣬�����Ա��������Ҫ��copy���캯����copy��ֵ�������н���ͬ���ı�
	Bitmap *pb;
};

#endif // !_WIDGET_H_
