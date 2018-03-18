#ifndef _TEMPLATEBASE_H_
#define _TEMPLATEBASE_H_
#include <iostream>

//类模板函数和隐式内联函数的区分
//隐式内联函数是在类定义中同时被声明和实现
//类模板函数只是在头文件中被声明和实现，实现不是放在类的定义中

template <typename T>
class TemplateBase
{
public:
	TemplateBase();
	template<typename U>
	/*explicit */TemplateBase(const TemplateBase<U>& other); //不声明explicit,让泛化拷贝构造函数支持隐式转换
	void sendClear();
	T* get() const 
	{
		std::cout << "T* get() const called." << std::endl;
		return heldPtr;
	}
private:
	T* heldPtr;
};

template<>
class TemplateBase<std::string>
{
public:
	void nothing();
};

#endif // !_TEMPLATEBASE_H_

template<typename T>
TemplateBase<T>::TemplateBase()
{
	std::cout << "TemplateBase<T>::TemplateBase() called." << std::endl;
}

template<typename T>
void TemplateBase<T>::sendClear()
{
	std::cout << "TemplateBase<T>::sendClear() called." << std::endl;
}

void TemplateBase<std::string>::nothing()
{
	std::cout << "TemplateBase<int>::nothing() called." << std::endl;
}

template<typename T>
template<typename U>
TemplateBase<T>::TemplateBase(const TemplateBase<U>& other) : heldPtr(other.get())
{
	std::cout << "TemplateBase<T>::TemplateBase(const TemplateBase<U>& other) called." << std::endl;
	std::cout << "This function could use type U to constructure type T." << std::endl;
}
