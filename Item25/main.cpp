#include "Widget.h"
#include "Widget.cpp"

//namespace std
//{
//	template<>        //����ģ����ػ����ڲ��������ػ��汾ʱ�������ػ��汾���������ػ��汾ʱ���Ե���ģ��汾��
//	void swap(Widget& a, Widget& b)
//	{
//		a.swap(b);
//	}
//}

//namespace std
//{
//	template<typename T>               //��ͼƫ�ػ�����ģ�壬�ǲ��Ϸ�
//	void swap<Widget<T>>(Widget<T>& a, Widget<T>& b)
//	{
//		a.swap(b);
//	}
//}


int main()
{
	//��ģ��汾
	//Widget w1;
	//Widget w2;
	//std::swap(w1, w2);

	//ģ��汾
	WidgetStuff::Widget<int> w1;
	WidgetStuff::Widget<int> w2;
	using namespace WidgetStuff;
	using namespace std;
	swap(w1, w2);       //���õ���WidgetStuff�����swap

	return 0;
}