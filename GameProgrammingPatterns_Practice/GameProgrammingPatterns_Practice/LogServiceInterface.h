#pragma once
#include <string>

class LogServiceInterface {
public :
	virtual ~LogServiceInterface() {}
	virtual void DisplayMessage(std::string message) = 0;
};