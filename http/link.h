#ifndef LINK_H_
#define LINK_H_

#include<string>

namespace http {
	std::string create_link(std::string link_s);
	std::string create_typed_link(std::string link_s, std::string type_s);
	void open_link(std::string link);
	#ifndef _WIN32
	void curl_link(std::string link);
	#endif
}

#endif // LINK_H_