#include "link.h"
#include "../lib/stringutils.h"
#include "../lib/sys/limsys.h"
#include<vector>

namespace http {
	std::string create_link(std::string link_s)
	{
		std::string flink_s;
		std::vector<std::string> vec_s = {};
		if (!str_empty(link_s)) {
			flink_s = "https://"; flink_s.append(link_s);
			vec_s.push_back("https://"); 
		} else {
			flink_s = "https://google.com/";
		}
		return flink_s;
	}

	std::string create_typed_link(std::string link_s, std::string type_s)
	{
		std::string prot;
		if (!str_empty(type_s)) {
			if (compare_str(type_s, "https")) {
				prot = "https://";
			} else if (compare_str(type_s, "http")) {
				prot = "http://";
			}
		}
		std::string flink_s;
		if (!str_empty(link_s)) {
			flink_s = prot; flink_s.append(link_s);
		} else {
			flink_s = "https://google.com/";
		}
		return flink_s;
	}

	void open_link(std::string link_s)
	{
		std::string f_link;
		if (!str_empty(link_s)) {
			if (!find_str(link_s, "https://") || !find_str(link_s, "http://"))
				f_link = create_link(link_s);
			else
				f_link = link_s;
		} else {
			f_link = create_link("google.com");
		}
		#ifdef _WIN32
		lsys::sysexec("start " + f_link);
		#else
		lsys::sysexec("xdg-open " + f_link);
		#endif
	}

	#ifndef _WIN32
	void curl_link(std::string link_s)
	{
		std::string f_link;
		if (!str_empty(link_s)) {
			if (!find_str(link_s, "https://") || !find_str(link_s, "http://")) {
				f_link = create_link(link_s);
			} else {
				f_link = link_s;
			}
		} else {
			f_link = create_link("google.com");
		}
		lsys::sysexec("curl " + f_link);
	}
	#endif
}
