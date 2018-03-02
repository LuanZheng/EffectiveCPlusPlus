#include "Widget.h"
#include "Widget.cpp"

//namespace std
//{
//	template<>        //函数模板的特化，在参数符合特化版本时，调用特化版本，不符合特化版本时，仍调用模板版本。
//	void swap(Widget& a, Widget& b)
//	{
//		a.swap(b);
//	}
//}

//namespace std
//{
//	template<typename T>               //企图偏特化函数模板，那不合法
//	void swap<Widget<T>>(Widget<T>& a, Widget<T>& b)
//	{
//		a.swap(b);
//	}
//}


int main()
{
	//非模板版本
	//Widget w1;
	//Widget w2;
	//std::swap(w1, w2);

	//模板版本
	WidgetStuff::Widget<int> w1;
	WidgetStuff::Widget<int> w2;
	using namespace WidgetStuff;
	using namespace std;
	swap(w1, w2);       //调用的是WidgetStuff里面的swap

	return 0;
}