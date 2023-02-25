#ifndef FILE_H_
#define FILE_H_

#include<string>
#include<iostream>
#include<sstream>
#include<fstream>

void write_to_file(std::string _path, std::string c, bool newline = true);
void override_file(std::string _path, std::string c);
std::string read_file(std::string _path);
void file_out(std::string _path);

#endif // FILE_H_
