#include "textbox.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<vector>
#include<iostream>

std::string create_textbox(std::string textbox_s)
{
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
	return f;
}

void set_textbox(TextBox *textbox, std::string textbox_s) {
	textbox->data = create_textbox(textbox_s);
}

void put_textbox(TextBox *textbox) {
	std::cout << textbox->data;
}
