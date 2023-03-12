#ifndef TITLEHEADER_H_
#define TITLEHEADER_H_

#include<string>

typedef struct {
	std::string data;
} TitleHeader;

std::string create_header(
	std::string main_header_string,
	std::string sub_header_string = "none",
	std::string subsub_header_string = "none");
void set_header(
	TitleHeader *headerptr,
	std::string main_header_string,
	std::string sub_header_string = "none",
	std::string subsub_header_string = "none");
void put_header(TitleHeader *header);

#endif // TITLEHEADER_H_