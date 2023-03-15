#ifndef TITLEHEADER_H_
#define TITLEHEADER_H_

#include<string>

typedef struct TitleHeader {
	std::string data;
} TitleHeader;

namespace ui {
	std::string create_header(
		int x, int y,
		std::string main_header_string,
		std::string sub_header_string = "none",
		std::string subsub_header_string = "none");
	void set_header(
		TitleHeader *headerptr,
		int x, int y,
		std::string main_header_string,
		std::string sub_header_string = "none",
		std::string subsub_header_string = "none");
	void put_header(TitleHeader *header);
}

#endif // TITLEHEADER_H_