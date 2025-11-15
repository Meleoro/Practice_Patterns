#include "FileSystem.h"
#include <iostream>


FileSystem* FileSystem::instance = nullptr;

void FileSystem::CreateFile()
{
	std::cout << "Created File" << std::endl;
}