#include "time.hpp"

	std::string myTime::nowStr() {
		std::time_t now = std::time(NULL);
		std::tm* ptm = std::localtime(&now);
		char buffer[32];
		std::strftime(buffer, 32, "%d.%m.%Y %H:%M:%S", ptm);
		return buffer;
	}
