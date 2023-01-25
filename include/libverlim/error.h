#ifndef ERROR_H_
#define ERROR_H_

#include "stringutils.h"
#include "sys/limbuiltin.h"
#include<string>
#include<iostream>

#define ERR_HEADER "[ERROR]"

static inline std::string errcreate(std::string errmsg)
{
	std::string f_err_msg;
	if (!str_empty(errmsg))
		f_err_msg = std::string(ERR_HEADER) + ": " + errmsg;
	return f_err_msg;
}

static inline std::string errtyped(std::string errmsg, std::string errtype)
{
	std::string f_err_msg;
	if (!str_empty(errmsg) && !str_empty(errtype)) {
		if (compare_str(errtype, "default"))
			f_err_msg = errcreate(errmsg);
	}
}

static inline void errput(std::string errmsg, std::string errtype = "default", bool force_exit = false)
{
	std::cout << errtyped(errmsg, errtype);
	if (force_exit) sysexit();
}

#endif // ERROR_H_
