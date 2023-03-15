#include "dialoguebox.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../limstd/limio/limioutils.h"
#include<vector>
#include<iostream>
#include<sstream>

namespace ui {
	std::string create_dialoguebox(std::string main_s, std::string dia_s, int x, int y)
	{
		std::stringstream sf;

		std::string f;
		if (!str_empty(main_s) && !str_empty(dia_s)) {
			std::vector<std::string> s = {
				"> " + wrap_str(main_s, "[", "]") + ": ",
				quote_str(dia_s)
			};
			f = ret_vector_s(s);
		}

		sf << ui::set_pos(x, y) << f;

		return sf.str();
	}

	void set_dialoguebox(DialogueBox *dbptr, std::string main_string, std::string dialogue_string, int x, int y) {
		dbptr->data = create_dialoguebox(
			main_string,
			dialogue_string,
			x,
			y
		);
	}

	void put_dialoguebox(DialogueBox *dialoguebox) {
		std::cout << dialoguebox->data;
	}

	void typer_dialoguebox(DialogueBox *dialoguebox, unsigned int delay) {
		lstd::typer(dialoguebox->data,
			dialoguebox->data.length(), 
			delay
		);
	}
}
