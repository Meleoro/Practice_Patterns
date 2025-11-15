#include "RandomClass.h"
#include "FileSystem.h"
#include <iostream>

void RandomClass::DoStuff() {
	// Do stuff
	std::cout << "Did stuff" << std::endl;

	FileSystem::Instance().CreateFile();
}