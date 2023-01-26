#ifndef LOGGER_H_
#define LOGGER_H_

#include<string>

void log_message(std::string msg, std::string logfile_path);
void advanced_log(std::string msg,
				  std::string msg_code,
				  std::string addinfo,
				  std::string logfile_path);

#endif // LOGGER_H_
