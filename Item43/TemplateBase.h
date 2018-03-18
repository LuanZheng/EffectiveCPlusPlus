#ifndef _TEMPLATEBASE_H_
#define _TEMPLATEBASE_H_
#include <iostream>

//��ģ�庯������ʽ��������������
//��ʽ�������������ඨ����ͬʱ��������ʵ��
//��ģ�庯��ֻ����ͷ�ļ��б�������ʵ�֣�ʵ�ֲ��Ƿ�����Ķ�����

template <typename T>
class TemplateBase
{
public:
	TemplateBase();
	template<typename U>
	/*explicit */TemplateBase(const TemplateBase<U>& other); //������explicit,�÷����������캯��֧����ʽת��
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
