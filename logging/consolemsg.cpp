#include "./consolemsg.h"
#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../lib/timelib.h"
#include "../include/libverlim/error.h"
#include "../include/libverlim/warn.h"
#include<iostream>
#include<vector>

namespace lconsole {
	std::string create_console_msg(std::string c, bool include_time)
	{
		std::string f_cmsg;
		if (!str_empty(c)) {
			if (include_time) {
				std::vector<std::string> vec_s = {
					wrap_str("CONSOLE @ " + fmt_time(1, 1), "[", "]"), ": ", quote_str(c)
				};
				f_cmsg = ret_vector_s(vec_s);
			} else {
				std::vector<std::string> vec_s = {
					wrap_str("CONSOLE", "[", "]"), ": ", quote_str(c)
				};
				f_cmsg = ret_vector_s(vec_s);
			}
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

		if (!str_empty(target) && !str_empty(reason)) {
			std::vector<std::string> vec_s = {
				flag_s, " @ ", target,
				"\n[REASON]: ", quote_str(reason)
			};
			msg_flag_s = ret_vector_s(vec_s);
		}

		return msg_flag_s;
	}

	void out_consolemsg_flag(std::string flagtype, std::string target, std::string reason)
	{
		std::cout << create_consolemsg_flag(flagtype, target, reason);
	}
}
