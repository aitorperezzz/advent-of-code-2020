#include <iostream>

#include "logger.hpp"

void Logger::log(const std::string& message, LogLevel level)
{
	std::string begin;
	switch (level)
	{
		case INFO:
			begin = "Info: ";
			break;
		case ERROR:
			begin = "Error: ";
			break;
		case DEBUG:
			begin = "Debug: ";
			break;
	}

	std::cout << begin + message << std::endl;
}