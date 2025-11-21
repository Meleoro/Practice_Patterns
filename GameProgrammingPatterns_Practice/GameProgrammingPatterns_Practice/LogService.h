#pragma once
#include "LogServiceInterface.h"
#include <iostream>

class LogService : public LogServiceInterface {
public :
	virtual void DisplayMessage(std::string message) {
		std::cout << message << std::endl;
	}
};