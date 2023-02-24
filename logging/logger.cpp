#include "./logger.h"
#include "./consolemsg.h"
#include "../lib/stringutils.h"
#include "../fs/file.h"
#include "../fs/fileutils.h"

void log_message(std::string msg, std::string logfile_path)
{
	std::string f_msg;
	if (!str_empty(msg))
		f_msg = create_console_msg(msg, true);
	if (file_exists(logfile_path))
		write_to_file(logfile_path, f_msg);
}

void advanced_log(std::string msg,
				  std::string msg_code,
				  std::string addinfo,
				  std::string logfile_path)
{
	std::string f_msg;
	if (!str_empty(msg)) {
		if (str_empty(msg_code))
			f_msg = create_console_msg(msg, true);
		else
			f_msg = create_console_msg(msg, true) + wrap_str(msg_code, "(", ")");
	}

	std::string f_info;
	if (!str_empty(addinfo))
		f_info = "\nAdditional Info: " + quote_str(addinfo);

	write_to_file(logfile_path, f_msg + f_info);
}

void clear_logfile(std::string path)
{
	clear_file(path);
}
