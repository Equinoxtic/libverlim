#include "optionbox.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../limstd/limio/limioutils.h"
#include<vector>
#include<sstream>

namespace ui {
	std::string default_optionbox(std::string base_s, int x, int y)
	{
		std::stringstream sf;
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

		sf << ui::set_pos(x, y) << f;

		return f;
	}

	std::string inputbox(std::string base_s, int x, int y)
	{
		std::stringstream sf;

		std::string f;
		if (!str_empty(base_s)) {
			std::vector<std::string> vec_s = {
				wrap_str(base_s, "[", "]"), " > "
			};
			f = ret_vector_s(vec_s);
		} else {
			f = "[Input] > ";
		}

		sf << set_pos(x, y) << f;

		return f;
	}

	std::string create_optionbox(std::string s, int posx, int posy, std::string y, std::string x)
	{
		std::stringstream sf;

		std::string f;
		if (!str_empty(s)) {
			std::vector<std::string> vec_s = {
				"> ", quote_str(s), " ", wrap_str(std::string(y) + "/" + std::string(x), "(", ")"), " : "
			};
			f = ret_vector_s(vec_s);
		} else {
			f = "> \"Continue?\" (Y/N) : ";
		}

		sf << set_pos(posx, posy) << f;

		return f;
	}

	void set_optionbox(OptionBox *optionbox, int posx, int posy, std::string s, std::string y, std::string x) {
		optionbox->data = create_optionbox(s, posx, posy, y, x);
	}

	std::string formatted_optionbox(std::string s, int x, int y, std::string type)
	{
		std::string f;
		if (!str_empty(s) && !str_empty(type)) {
			if (compare_str(type, "default"))
				f = default_optionbox(s, x, y);
			else if (compare_str(type, "input"))
				f = inputbox(s, x, y);
		}
		return f;
	}

	void set_formattedoptionbox(OptionBox *optionbox, int x, int y, std::string s, std::string type) {
		optionbox->data = formatted_optionbox(s, x, y, type);
	}

	void put_optionbox(OptionBox *optionbox) {
		std::cout << optionbox->data;
	}

	void typer_optionbox(OptionBox *optionbox, unsigned int delay) {
		lstd::typer(optionbox->data, optionbox->data.length(), delay);
	}
}
