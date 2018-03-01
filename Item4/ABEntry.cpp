#include "ABEntry.h"

//该构造函数调用的为赋值操作，并非初始化操作
//ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<std::string>& thePhones)
//{
//	m_Name = name;
//	m_Address = address;
//	m_ThePhones = thePhones;
//	m_NumTimesConsulted = 0;
//}

//该构造函数的写法是初始化，效率通常高
//参数初始化的顺序为其声明的顺序，注意不是下面书写的顺序，而是头文件里面声明的顺序
ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<std::string>& thePhones)
	: m_Name(name),
	  m_Address(address),
	  m_ThePhones(thePhones),
	  m_NumTimesConsulted(0),
	  m_Const(-1)                     //正确，可以为const成员变量初始化，也应该初始化
{
		  //m_Const = -1;             //错误，不能对常量赋值
}