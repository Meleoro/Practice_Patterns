#include "Locator.h"

LogServiceInterface* Locator::logService = nullptr;

void Locator::Provide(LogServiceInterface* newLogService)
{
	logService = newLogService;
}