#ifndef TIMELIB_H_
#define TIMELIB_H_

#include<string>
#include "vtime.h"

static inline std::string get_time() {
	std::string tm = DEF_TIME; return tm;
}

static inline std::string get_date() {
	std::string dt = DEF_DATE; return dt;
}

std::string get_time_and_date() {
	std::string tmdt = DEF_TIME_AND_DATE; return tmdt;
}

#endif // TIMELIB_H_
