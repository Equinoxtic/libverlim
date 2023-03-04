#ifndef TIMELIB_H_
#define TIMELIB_H_

#include<string>
#include "../include/libverlim/vtime.h"
#include "stringutils.h"

static inline std::string get_time() {
	std::string tm = DEF_TIME; return tm;
}

// static inline std::string get_hour_and_seconds() {
// 	std::string tm = DEF_TIME; return tm.replace(3, 6, "\0").replace(1, 3, "\0").replace(3, 2, "\0");
// }

// static inline std::string get_hour_time() {
// 	std::string tm = DEF_TIME; return tm.replace(3, 6, "\0");
// }

// static inline std::string get_seconds_time() {
// 	std::string tm = DEF_TIME; return tm.replace(1, 3, "\0").replace(3, 2, "\0");
// }

static inline std::string get_date() {
	std::string dt = DEF_DATE; return dt;
}

static inline std::string get_time_and_date() {
	std::string tmdt = DEF_TIME_AND_DATE; return tmdt;
}

static inline std::string fmt_time(int tm = 1, int dt = 0) {
	std::string tm_s,
				dt_s;
	tm_s = (tm==1) ? DEF_TIME : "";
	dt_s = (dt==1) ? DEF_DATE : "";
	
	std::string fmt_s;
	if (!str_empty(tm_s)) {
		if (str_empty(dt_s))
			fmt_s = tm_s;
		else
			fmt_s = tm_s +  " : " + dt_s;
	}

	return fmt_s;
}

#endif // TIMELIB_H_
