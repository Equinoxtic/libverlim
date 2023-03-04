#ifndef OPTIONBOX_H_
#define OPTIONBOX_H_

#include<string>

typedef struct {
	std::string data;
} OptionBox;

std::string create_optionbox(std::string s, std::string y = "Y", std::string x = "N");
void set_optionbox(OptionBox *optionbox, std::string s, std::string y = "Y", std::string x = "N");
std::string formatted_optionbox(std::string s, std::string type = "default");
void set_formattedoptionbox(OptionBox *optionbox, std::string s, std::string type = "default");
void put_optionbox(OptionBox *optionbox);
void typer_optionbox(OptionBox *optionbox, unsigned int delay = 7);

#endif // OPTIONBOX_H_
