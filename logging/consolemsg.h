#ifndef CONSOLEMSG_H_
#define CONSOLEMSG_H_

#include<string>

std::string create_console_msg(std::string c, bool include_time = true);
void out_console_msg(std::string c, bool includetime = true);
std::string create_consolemsg_flag(std::string flagtype = "err",
								   std::string target = "TARGET", 
								   std::string reason = "REASON");
void out_consolemsg_flag(std::string flagtype = "err", 
						 std::string target = "TARGET", 
						 std::string reason = "REASON");

#endif // CONSOLEMSG_H_
