#include <DX3D/Core/Logger.h>
#include <iostream>

DX3D::Logger::Logger(LogLevel level) : m_logLevel(level) {
	std::clog << "First 3D Game!" << '\n';
	std::clog << "-------------------------------" << '\n';
}

void DX3D::Logger::log(LogLevel level, const char* message) const {
	auto logLevelToString = [](LogLevel level) {
		switch (level) {
		case LogLevel::Info:
			return "Info";

		case LogLevel::Warning:
			return "Warning";

		case LogLevel::Error:
			return "Error";

		default:
			return "Unknown";
		}
	};
	
	if (level > m_logLevel) return;
	std::clog << "[DX3D " << logLevelToString(level) << "]: " << message << '\n';
}


