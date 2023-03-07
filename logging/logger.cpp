#include "./logger.h"
#include "./consolemsg.h"
#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../fs/file.h"
#include "../fs/fileutils.h"
#include<vector>

namespace logger {
	void log_message(std::string msg, std::string logfile_path)
	{
		std::string f_msg;
		if (!str_empty(msg))
			f_msg = lconsole::create_console_msg(msg, true);
		if (lvfs::file_exists(logfile_path))
			lvfs::write_to_file(logfile_path, f_msg);
	}

	void advanced_log(std::string msg,
					std::string msg_code,
					std::string addinfo,
					std::string logfile_path)
	{
		std::string f_msg;
		std::vector<std::string> vec_s = {
			lconsole::create_console_msg(msg, true), " "
		};

		if (!str_empty(msg)) {
			if (str_empty(msg_code))
				f_msg = ret_vector_s(vec_s);
			else
				vec_s.push_back(wrap_str(msg_code, "(", ")"));

			if (!str_empty(addinfo))
				vec_s.push_back("\nAdditional Info: " + quote_str(addinfo));
			f_msg = ret_vector_s(vec_s);
		}

		lvfs::write_to_file(logfile_path, f_msg);
	}

	void clear_logfile(std::string path)
	{
		lvfs::clear_file(path);
	}
}
