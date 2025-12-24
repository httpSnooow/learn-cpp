#include <iostream>

class Log
{
public:
	const int logLevelError{ 0 };
	const int logLevelWarning{ 1 };
	const int logLevelInfo{ 2 };

private:
	int m_LogLevel{ logLevelInfo };

public:
	void setLevel(int level)
	{
		m_LogLevel = level;
	}

	void warn(const char* message)
	{
		if (m_LogLevel >= logLevelWarning)
			std::cout << "[WARNING]: " << message << '\n';
	}

	void info(const char* message)
	{
		if (m_LogLevel >= logLevelInfo)
			std::cout << "[INFO]: " << message << '\n';
	}

	void error(const char* message)
	{
		if (m_LogLevel >= logLevelError)
			std::cout << "[ERROR]: " << message << '\n';
	}

};

int main()
{
	Log log;

	log.setLevel(log.logLevelWarning);

	log.warn("Hello!");
	log.error("Hello!");
	log.info("Hello!");

	std::cin.get();
}
