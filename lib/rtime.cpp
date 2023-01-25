#include "./rtime.h"

std::string get_time() {
	return std::string(__TIME__);
}

std::string get_date() {
	return std::string(__DATE__);
}

std::string get_time_and_date()
{
	std::string s = std::string(__TIME__) + " - " + std::string(__DATE__); return s;
}
