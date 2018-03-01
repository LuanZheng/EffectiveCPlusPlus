#ifndef _FILE_SYSTEM_H_
#define _FILE_SYSTEM_H_
#include <iostream>

class FileSystem
{
public:
	std::size_t numDisks() const;
};

FileSystem& tfs();
//extern FileSystem tfs;

#endif // !_FILE_SYSTEM_H_

