#ifndef _AB_ENTRY_H_
#define _AB_ENTRY_H_
#include <iostream>
#include <list>

class ABEntry
{
public:
	ABEntry(const std::string& name, const std::string& address, const std::list<std::string>& thePhones);
private:
	std::string m_Address;
	std::string m_Name;
	std::list<std::string> m_ThePhones;
	int m_NumTimesConsulted;
	const int m_Const;
};

#endif // !_AB_ENTRY_H_

