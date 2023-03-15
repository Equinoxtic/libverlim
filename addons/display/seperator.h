#ifndef SEPERATOR_H_
#define SEPERATOR_H_

#include<string>

typedef struct Seperator {
	std::string data;
} Seperator;

std::string create_seperator(int length = 65);
std::string formatted_seperator(std::string s, int length = 65);
void set_seperator(Seperator *sepptr, int length = 65);
void set_formatted_seperator(Seperator *sepptr, std::string s, int length = 65);
void display_seperator(Seperator *seperator);

#endif // SEPERATOR_H_