#ifndef DIALOGUEBOX_H_
#define DIALOGUEBOX_H_

#include<string>

typedef struct DialogueBox {
	std::string data;
} DialogueBox;

namespace ui {
	std::string create_dialoguebox(std::string main_s, std::string dia_s, int x = 0, int y = 0);
	void set_dialoguebox(DialogueBox *dbptr, std::string main_string, std::string dialogue_string, int x = 0, int y = 0);
	void put_dialoguebox(DialogueBox *dialoguebox);
	void typer_dialoguebox(DialogueBox *dialoguebox, unsigned int delay = 7);
}

#endif // DIALOGUEBOX_H_