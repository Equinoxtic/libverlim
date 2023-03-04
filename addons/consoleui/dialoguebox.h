#ifndef DIALOGUEBOX_H_
#define DIALOGUEBOX_H_

#include<string>

typedef struct {
	std::string data;
} DialogueBox;

std::string create_dialoguebox(std::string main_s, std::string dia_s);
void set_dialoguebox(DialogueBox *dbptr, std::string main_string, std::string dialogue_string);
void put_dialoguebox(DialogueBox *dialoguebox);
void typer_dialoguebox(DialogueBox *dialoguebox, unsigned int delay = 7);

#endif // DIALOGUEBOX_H_