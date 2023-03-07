#ifndef ERROR_H_
#define ERROR_H_

#include "../../lib/stringutils.h"
#include "../../lib/sys/limbuiltin.h"
#include<string>
#include<iostream>

static inline std::string errcreate(std::string errmsg)
{
	std::string f_err_msg;
	if (!str_empty(errmsg))
		f_err_msg = "[ERROR]: " + errmsg;
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

	f_err_msg.append("[ ! ERROR ! ]\n> ");
 
	if (!str_empty(errmsg)) {
		std::string newerrmsg;
		if (is_quoted)
			newerrmsg = quote_str(errmsg);
		else
			newerrmsg = errmsg;
		f_err_msg.append(newerrmsg);
	} else {
		f_err_msg.append("ERROR_STRING");
	}

	f_err_msg.append("\n(Reason): ");

	if (!str_empty(reason)) {
		std::string newreason;
		if (is_quoted)
			newreason = quote_str(reason);
		else
			newreason = reason;
		f_err_msg.append(newreason);
	} else {
		f_err_msg.append("REASON_STRING");
	}

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
