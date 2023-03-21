#include "prompt.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<iostream>
#include<sstream>
#include<vector>

namespace ui {
	std::string create_prompt(std::string main_s, std::string prompt_s, int x, int y) {
		std::string _pos = ui::set_pos(x, y);
		std::string s;
		std::stringstream sf;
		if (!str_empty(main_s) && !str_empty(prompt_s)) {
			std::vector<std::string> vs = {
				_pos, wrap_str(main_s, "[", "]"), 
				_pos, "\n\n> ", quote_str(prompt_s)
			};
			s = ret_vector_s(vs);
		}
		sf << s;
		return sf.str();
	}

	void set_prompt(Prompt *prompt, std::string main_s, std::string prompt_s, int x, int y) {
		prompt->data = create_prompt(main_s, prompt_s, x, y);
	}

	void put_prompt(Prompt *prompt) {
		std::cout << prompt->data;
	}
}
