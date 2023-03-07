#ifndef ERROR_H_
#define ERROR_H_

#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../lib/sys/limbuiltin.h"
#include<string>
#include<iostream>
#include<vector>

static inline std::string errcreate(std::string errmsg)
{
	std::string f_err_msg;
	if (!str_empty(errmsg)) {
		std::vector<std::string> vec_s = { "[ERROR]: ", errmsg };
		f_err_msg = ret_vector_s(vec_s)
	}
	return f_err_msg;
}

static inline std::string errtyped(std::string errmsg, std::string errtype)
{
	std::string f_err_msg;
	if (!str_empty(errmsg) && !str_empty(errtype)) {
		if (compare_str(errtype, "default"))
			f_err_msg = errcreate(errmsg);
		else if (compare_str(errtype, "quoted"))
			f_err_msg = errcreate(quote_str(errmsg));
	}
	return f_err_msg;
}

static inline std::string errcreate_advanced(std::string errmsg, std::string reason, bool is_quoted = false)
{
	std::string f_err_msg;

	std::vector<std::string> vs = { "[ ! ERROR ! ]\n>" };

	if (!str_empty(errmsg))
		vs.push_back((is_quoted) ? quote_str(errmsg) : errmsg);
	else
		vs.push_back("ERROR_STRING");

	vs.push_back("\n(REASON): ");

	if (!str_empty(reason))
		vs.push_back((is_quoted) ? quote_str(reason) : reason);
	else
		vs.push_back("REASON_STRING");

	f_err_msg = ret_vector_s(vs);

	return f_err_msg;
}

static inline void errput(std::string errmsg, std::string errtype = "default", bool force_exit = false)
{
	std::cout << errtyped(errmsg, errtype);
	if (force_exit) lsys::sysexit();
}

static inline void errput_advanced(std::string errmsg, std::string reason, bool is_quoted = false, bool force_exit = false)
{
	std::cout << errcreate_advanced(errmsg, reason, is_quoted);
	if (force_exit) lsys::sysexit();
}

#endif // ERROR_H_
