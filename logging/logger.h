#ifndef LOGGER_H_
#define LOGGER_H_

#include<string>

namespace logger {
	void log_message(std::string msg, std::string logfile_path = "logs/log.txt");
	void advanced_log(std::string msg,
					  std::string msg_code,
					  std::string addinfo,
					  std::string logfile_path = "logs/log.txt");
	void clear_logfile(std::string path = "logs/log.txt");
}

#endif // LOGGER_H_
