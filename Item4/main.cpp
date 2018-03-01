#include "ABEntry.h"
#include <string>
#include <list>
#include <iostream>
#include "Directory.h"

void run()
{
	static int a = 5;
	a++;
	std::cout << a << std::endl;
}

int main()
{
	std::list<std::string> thePhones;
	thePhones.push_back("13816657041");
	thePhones.push_back("13816656491");
	ABEntry abEntry("name", "address", thePhones);

	std::string temp = "ABC";
	Directory tempDir(temp);

	run();
	run();
	run();

	return 0;
}