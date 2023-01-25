#ifndef WARN_H_
#define WARN_H_

#include "stringutils.h"
#include<string>
#include<iostream>

#define WARN_HEADER "[WARNING]"

static inline std::string warncreate(std::string warnmsg)
{
	std::string f_warn_msg;
	if (!str_empty(warnmsg))
		f_warn_msg = WARN_HEADER + ": " + warnmsg;
	return f_warn_msg;
}

static inline std::string typedwarn(std::string warnmsg, std::string warntype)
{
	std::string f_warn_msg;
	if (!str_empty(warnmsg) && !str_empty(warntype)) {i
		if (compare_str(warntype, "default"))
			f_warn_msg = warncreate(warnmsg);
	}
	return f_warn_msg;
}

static inline void warnput(std::string warnmsg, std::string warntype = "default")
{
	std::cout << typedwarn(warnmsg, warntype);
}

#endif // WARN_H_
