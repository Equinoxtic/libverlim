#include "optionutils.h"
#include "option.h"

void push_options_list(std::vector<std::string> opt_ls) {
	for (size_t i = 0; i < opt_ls.size(); ++i) {
		std::cout << create_option(i+1, opt_ls[i]) << "\n";
	}
}