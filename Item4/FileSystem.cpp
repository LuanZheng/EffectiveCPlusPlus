#include "FileSystem.h"

std::size_t FileSystem::numDisks() const
{
	return 5;
}

FileSystem& tfs()
{
	static FileSystem fs;
	return fs;
}