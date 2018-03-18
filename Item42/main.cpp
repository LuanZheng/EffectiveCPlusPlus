#include <iostream>
#include <list>
#include <string>



template <typename IterT>
void workWithIterator(IterT iter)
{
	typedef typename std::iterator_traits<IterT>::value_type value_type;
	std::cout << "workWithIterator(IterT iter) called." << std::endl;
	//typename std::iterator_traits<IterT>::value_type ��ʾiter������ָ�����ͣ�
	//typename��������ָ��value_type��һ������,�����ʹ��typename�᲻�ܱ���ͨ��
	//typename std::iterator_traits<IterT>::value_type temp(*iter);     //ʹ��typedef����ļ��Ա�﷽ʽ
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