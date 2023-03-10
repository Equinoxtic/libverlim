#ifndef WARN_H_
#define WARN_H_

#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<string>
#include<iostream>
#include<vector>

static inline std::string warncreate(std::string warnmsg)
{
	std::string f_warn_msg;
	if (!str_empty(warnmsg)) {
		std::vector<std::string> vec_s = { "[WARNING]: ", warnmsg };
		f_warn_msg = ret_vector_s(vec_s);
	}
	return f_warn_msg;
}

static inline std::string typedwarn(std::string warnmsg, std::string warntype)
{
	std::string f_warn_msg;
	if (!str_empty(warnmsg) && !str_empty(warntype)) {
		if (compare_str(warntype, "default"))
			f_warn_msg = warncreate(warnmsg);
		else if (compare_str(warntype, "quoted"))
			f_warn_msg = warncreate(quote_str(warnmsg));
	}
	return f_warn_msg;
}

static inline void warnput(std::string warnmsg, std::string warntype = "default")
{
	std::cout << typedwarn(warnmsg, warntype);
}

#endif // WARN_H_
