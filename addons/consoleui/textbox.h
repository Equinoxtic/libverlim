#ifndef TEXTBOX_H_
#define TEXTBOX_H_

#include<string>

typedef struct TextBox {
	std::string data;
} TextBox;

namespace ui {
	std::string create_textbox(std::string textbox_s, int x, int y);
	void set_textbox(TextBox *textbox, std::string textbox_s, int x, int y);
	void put_textbox(TextBox *textbox);
}

#endif // TEXTBOX_H_