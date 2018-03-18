//注意，在模板继承发生时，不可以同时引用基类和派生类的头文件，会发生重定义现象

//#include "TemplateBase.h"
#include "TemplateDerived.h"
#include "NormalDerive.h"

int main()
{
	TemplateBase<char> tb;
	tb.sendClear();

	TemplateDerived<double> td1;
	td1.sendClearDerived();

	//TemplateDerived<std::string> td2;        //这里会编译报错。调用到特化版本，才会报错出来
	//td2.sendClearDerived();

	//double d = 5.2;
	//int i = 1;
	//int* pi = &i;
	//double* pd = &d;
	//std::cout << *pd << std::endl;
	//std::cout << *pi << std::endl;
	//pi = (int *)pd;
	//std::cout << *pd << std::endl;
	//std::cout << *pi << std::endl;

	NormalBase* nb = new NormalBase();
	NormalDerive* nd = new NormalDerive();

	TemplateBase<NormalBase> tbnb;
	TemplateBase<NormalDerive> tbnd;

	//tbnb = tbnd;会报错，因为模板类具现化的对象之间，不存在B-D关系，需要提供泛型拷贝构造函数来解决这一问题
	//但提供了泛型拷贝构造函数之后，可以让任何类型的对象进行相互copy了，这是不安全的，比如上面的double*,int*的例子
	//因此我们要在运用成员初始化列，使得只有能够复合隐式转换类型的类型才可以转换,这样下述tbnd = tbnb;又会报错了，
	//因为无法从“NormalBase *”转换为“NormalDerive *”,没有这样的隐式类型转换存在,实际上也确实应该被禁止掉
	tbnb = tbnd;      //会调用泛化构造函数
	//tbnd = tbnb; //报如下错误，这正式我们想要的
	//e:\gitrepository\effectivecplusplus\effectivecplusplus\item43\templatebase.h(55): error C2440: “初始化”: 无法从“NormalBase *”转换为“NormalDerive *”

	TemplateBase<NormalBase> tbnb2;

	std::cout << std::endl;

	tbnb = tbnb2;      //类型相同，不会调用泛化构造函数
	return 0;
}