#ifndef _TEXT_BLOCK_H_
#define _TEXT_BOLCK_H_
#include <string>

class TextBlock
{
public:
	TextBlock(const std::string& text);
	const char& operator[](std::size_t position) const
	{
		return m_Text[position];
	}
	char& operator[](std::size_t position)
	{
		return m_Text[position];
	}
private:
	std::string m_Text;
};

#endif // !_TEXT_BLOCK_H_

