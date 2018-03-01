#include "Directory.h"
#include "FileSystem.h"

Directory::Directory(std::string& param)
{
	std::size_t disks = tfs().numDisks();
}

Directory& tempDir(std::string& param)
{
	static Directory td(param);
	return td;
}