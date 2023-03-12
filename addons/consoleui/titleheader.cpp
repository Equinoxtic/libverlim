#include "titleheader.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<vector>
#include<iostream>

std::string create_header(
	std::string main_header_string,
	std::string sub_header_string,
	std::string subsub_header_string
) {
	std::string f;
	if (!str_empty(main_header_string)) {
		std::string subheader = (
			(!compare_str(sub_header_string, "none") ? " / " + sub_header_string : "")
		);
		std::string subsubheader = (
			(!compare_str(subsub_header_string, "none") ? " / " + subsub_header_string : "")
		);
		std::vector<std::string> vec_s = {
			"[ ", main_header_string, subheader, subsubheader, " ]"
		};
		f = ret_vector_s(vec_s);
	}
	return f;
}

void set_header(
	TitleHeader *headerptr,
	std::string main_header_string,
	std::string sub_header_string,
	std::string subsub_header_string
) {
	headerptr->data = create_header(main_header_string, sub_header_string, subsub_header_string);
}

void put_header(TitleHeader *header) {
	std::cout << header->data;
}
