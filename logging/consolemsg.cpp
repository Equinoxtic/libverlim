#include "./consolemsg.h"
#include "stringutils.h"
#include "timelib.h"
#include "error.h"
#include "warn.h"
#include<iostream>

std::string create_console_msg(std::string c, bool include_time)
{
	std::string f_cmsg;
	if (!str_empty(c)) {
		if (include_time)
			f_cmsg = wrap_str("CONSOLE @ " + get_time_and_date(), "[", "]") + ": " + quote_str(c);
		else
			f_cmsg = wrap_str("CONSOLE", "[", "]") + ": " + quote_str(c);
	}
	return f_cmsg;
}

void out_console_msg(std::string c, bool includetime)
{
	std::cout << create_console_msg(c, includetime);
}

std::string create_consolemsg_flag(std::string flagtype, std::string target, std::string reason)
{
	std::string msg_flag_s;

	std::string flag_s;
	if (!str_empty(flagtype)) {
		if (compare_str(flagtype, "err") || compare_str(flagtype, "error"))
			flag_s = wrap_str("ERROR", "[", "]");
		else if (compare_str(flagtype, "warn"))
			flag_s = wrap_str("WARN", "[", "]");
	}

	if (!str_empty(target) && !str_empty(reason))
		msg_flag_s = flag_s + " @ " + target + "\nReason: " + reason;

	return msg_flag_s;
}

void out_consolemsg_flag(std::string flagtype, std::string target, std::string reason)
{
	std::cout << create_consolemsg_flag(flagtype, target, reason);
}

