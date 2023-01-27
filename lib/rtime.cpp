#include "./rtime.h"

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define DEF_TIME TOSTRING(__TIME__)
#define DEF_DATE TOSTRING(__DATE__)
#define DEF_TIME_AND_DATE TOSTRING(__TIME__) " : " TOSTRING(__DATE__) 

std::string get_time() {
	std::string tm = DEF_TIME; return tm;
}

std::string get_date() {
	std::string dt = DEF_DATE; return dt;
}

std::string get_time_and_date()
{
	std::string ftmdt = DEF_TIME_AND_DATE; return ftmdt;
}
