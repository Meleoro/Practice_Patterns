#pragma once

class LogServiceInterface;

class Locator {
public :
	static LogServiceInterface* GetLogService() { return logService; }
	static void Provide(LogServiceInterface* newLogService);

private :
	static LogServiceInterface* logService;
};