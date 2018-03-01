#ifndef _DIRECTORY_H_
#define _DIRECTORY_H_
#include <string>

class Directory
{
public:
	Directory(std::string& param);
};

Directory& tempDir(std::string& param);
#endif // !_DIRECTORY_H_
