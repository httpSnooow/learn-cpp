#include <iostream>

class Log
{
public:
	enum level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	level m_LogLevel = LevelInfo;

public:
	void setLevel(level level)
	{
		m_LogLevel = level;
	}

	void warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << '\n';
	}

	void info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << '\n';
	}

	void error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << '\n';
	}

};

int main()
{
	Log log;

	log.setLevel(Log::LevelWarning);

	log.warn("Hello!");
	log.error("Hello!");
	log.info("Hello!");

	std::cin.get();
}
