#include "textbox.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<vector>
#include<iostream>
#include<sstream>

namespace ui {
	std::string create_textbox(std::string textbox_s, int x, int y)
	{
		std::stringstream sf;

		std::string f;
		if (!str_empty(textbox_s)) {
			std::string border = "o" + repeat_str("=", textbox_s.length() + 2) + "o";
			std::vector<std::string> vec_s = {
				border,
				"\n| ", textbox_s, " |\n",
				border,
			};
			f = ret_vector_s(vec_s);
		}

		sf << ui::set_pos(x, y) << f;

		return sf.str();
	}

	void set_textbox(TextBox *textbox, std::string textbox_s, int x, int y) {
		textbox->data = create_textbox(textbox_s, x, y);
	}

	void put_textbox(TextBox *textbox) {
		std::cout << textbox->data;
	}
}
