#include "dialoguebox.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../limstd/limio/limioutils.h"
#include<vector>
#include<iostream>

std::string create_dialoguebox(std::string main_s, std::string dia_s)
{
	std::string f;
	if (!str_empty(main_s) && !str_empty(dia_s)) {
		std::vector<std::string> s = {
			"> " + wrap_str(main_s, "[", "]") + ": ",
			quote_str(dia_s)
		};
		f = ret_vector_s(s);
	}
	return f;
}

void set_dialoguebox(DialogueBox *dbptr, std::string main_string, std::string dialogue_string) {
	dbptr->data = create_dialoguebox(
		main_string,
		dialogue_string
	);
}

void put_dialoguebox(DialogueBox *dialoguebox) {
	std::cout << dialoguebox->data;
}

void typer_dialoguebox(DialogueBox *dialoguebox, unsigned int delay) {
	typer(dialoguebox->data,
		  dialoguebox->data.length(), 
		  delay
	);
}
