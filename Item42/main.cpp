#include <iostream>
#include <list>
#include <string>



template <typename IterT>
void workWithIterator(IterT iter)
{
	typedef typename std::iterator_traits<IterT>::value_type value_type;
	std::cout << "workWithIterator(IterT iter) called." << std::endl;
	//typename std::iterator_traits<IterT>::value_type 表示iter对象所指物类型；
	//typename用来这里指明value_type是一个类型,如果不使用typename会不能编译通过
	//typename std::iterator_traits<IterT>::value_type temp(*iter);     //使用typedef定义的简略表达方式
	value_type temp(*iter);
	std::cout << temp << std::endl;
}

int main()
{
	std::list<std::string> strList;
	strList.push_back("AAA");
	strList.push_back("BBB");
	strList.push_back("CCC");

	std::list<std::string>::iterator iter;
	for (iter = strList.begin(); iter != strList.end(); iter++)
	{
		workWithIterator(iter);
	}

	return 0;
}