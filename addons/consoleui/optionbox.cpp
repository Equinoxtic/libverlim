#include "optionbox.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../limstd/limio/limioutils.h"
#include<vector>

std::string default_optionbox(std::string base_s)
{
	std::string f;
	if (!str_empty(base_s)) {
		std::vector<std::string> vec_s = {
			"> " + quote_str(base_s) + " ",
			wrap_str("Y/N", "(", ")") + " : "
		};
		f = ret_vector_s(vec_s);
	} else {
		f = "> \"Continue?\" (Y/N) : ";
	}
	return f;
}

std::string inputbox(std::string base_s)
{
	std::string f;
	if (!str_empty(base_s)) {
		std::vector<std::string> vec_s = {
			wrap_str(base_s, "[", "]"), " > "
		};
		f = ret_vector_s(vec_s);
	} else {
		f = "[Input] > ";
	}
	return f;
}

std::string create_optionbox(std::string s, std::string y, std::string x)
{
	std::string f;
	if (!str_empty(s)) {
		std::vector<std::string> vec_s = {
			"> ", quote_str(s), " ", wrap_str(std::string(y) + "/" + std::string(x), "(", ")"), " : "
		};
		f = ret_vector_s(vec_s);
	} else {
		f = "> \"Continue?\" (Y/N) : ";
	}
	return f;
}

void set_optionbox(OptionBox *optionbox, std::string s, std::string y, std::string x) {
	optionbox->data = create_optionbox(s, y, x);
}

std::string formatted_optionbox(std::string s, std::string type)
{
	std::string f;
	if (!str_empty(s) && !str_empty(type)) {
		if (compare_str(type, "default"))
			f = default_optionbox(s);
		else if (compare_str(type, "input"))
			f = inputbox(s);
	}
	return f;
}

void set_formattedoptionbox(OptionBox *optionbox, std::string s, std::string type) {
	optionbox->data = formatted_optionbox(s, type);
}

void put_optionbox(OptionBox *optionbox) {
	std::cout << optionbox->data;
}

void typer_optionbox(OptionBox *optionbox, unsigned int delay) {
	typer(optionbox->data, optionbox->data.length(), delay);
}
