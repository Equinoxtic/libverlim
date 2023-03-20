#ifndef PROMPT_H_
#define PROMPT_H_

#include<string>

typedef struct Prompt {
	std::string data;
} Prompt;

namespace ui {
	std::string create_prompt(std::string main_s, std::string prompt_s, int x, int y);
	void set_prompt(Prompt *prompt, std::string main_s, std::string prompt_s, int x, int y);
	void put_prompt(Prompt *prompt);
}

#endif // PROMPT_H_