#include "option.h"
#include "../../lib/stringutils.h"

void set_option(Option *option, std::string name,
				std::string desc, std::string surround_type,
				std::string pointch, bool quoted)
{
	option->_name = name; option->_desc = desc;
	option->_surround_type = surround_type;
	option->_pointch = pointch; option->_quoted = quoted;
}

void c_numoption(Option *option, int num)
{
	std::string new_name = std::to_string(num);
	set_option(option, new_name,
	option->_desc, option->_surround_type,
	option->_pointch, option->_quoted);
}

void add_option(Option *option)
{
	std::string f_option_str;
	std::string ret_name;
	std::string ret_desc;
	std::string ret_sura;
	std::string ret_surb;

	if (str_empty(option->_name) && str_empty(option->_desc)) {
		ret_name = "Option"; ret_desc = "Description";
	} else {
		ret_name = option->_name; ret_desc = option->_desc;
	}

	if (!str_empty(option->_surround_type)) {
		if (compare_str(option->_surround_type, "sqrbr") || compare_str(option->_surround_type, "square_brackets")) {
			ret_sura = "["; ret_surb = "]";
		} else if (compare_str(option->_surround_type, "br") || compare_str(option->_surround_type, "brackets")) {
			ret_sura = "{"; ret_surb = "}";
		} else if (compare_str(option->_surround_type, "paren") || compare_str(option->_surround_type, "parenthesis")) {
			ret_sura = "("; ret_surb = ")";
		}
	}

	f_option_str = wrap_str(ret_name, ret_sura, ret_surb);
	if (option->_quoted)
		f_option_str.append(option->_pointch + quote_str(ret_desc));
	std::cout << f_option_str;
}
