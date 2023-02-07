#include "optionmenu.h"
#include "stringutils.h"
#include "logger.h"

void create_options_menu(OptionMenu *menu, std::string basename, std::string menuname)
{	
	if (!str_empty(basename) && !str_empty(menuname)) {
		menu->base_name = basename; menu->menu_name = menuname;
	} else {
		menu->base_name = "Options"; menu->menu_name = "Sub";
	}

	std::string f_option_str = "< " + menu->base_name;
				f_option_str.append(" / " + menu->menu_name + " >");
	std::string log_msg = "Created Option Menu";
				log_msg.append(f_option_str);
	log_message(log_msg);

	std::cout << f_option_str << "\n";
}