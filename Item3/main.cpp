#include "TextBlock.h"
#include <iostream>

int main()
{
	TextBlock tb("Hello");
	std::cout << tb[0] << std::endl;
	const TextBlock ctb("World");
	std::cout << ctb[0] << std::endl;
	return 0;
}