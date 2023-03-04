#ifndef TEXTBOX_H_
#define TEXTBOX_H_

#include<string>

typedef struct {
	std::string data;
} TextBox;

std::string create_textbox(std::string textbox_s);
void set_textbox(TextBox *textbox, std::string textbox_s);
void put_textbox(TextBox *textbox);

#endif // TEXTBOX_H_