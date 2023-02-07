#ifndef OPTIONMENU_H_
#define OPTIONMENU_H_

#include<string>
#include<iostream>

typedef struct {
	std::string base_name;
	std::string menu_name;
} OptionMenu;

void create_options_menu(OptionMenu* menu, std::string basename, std::string menuname);

#endif // OPTIONMENU_H_