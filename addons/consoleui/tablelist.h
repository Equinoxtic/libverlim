#ifndef TABLELIST_H_
#define TABLELIST_H_

#include<string>
#include<vector>

typedef struct TableList {
	std::string data;
} TableList;

namespace ui {
	std::string create_stringlist(std::vector<std::string> s, int per = 3);
	void set_stringlist(TableList *tablelist, std::vector<std::string> vec_s, int per = 3);
	std::string create_tablelist_object(std::string s, int x, int y);
	void set_tablelist_object(TableList *tablelist, std::string s, int x, int y);
	std::string create_tablelist_vec(std::vector<std::string> vec_s, int x, int y, int per = 3);
	void set_tablelist_vec(TableList *tablelist, std::vector<std::string> vec_s, int x, int y, int per = 3);
	void push_tablelist(TableList *tablelist);
}

#endif // TABLELIST_H_