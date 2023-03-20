#include "tablelist.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<iostream>
#include<sstream>

namespace ui {
	std::string create_stringlist(std::vector<std::string> vec_s, int x, int y, int per) {
		std::stringstream _s;
		_s << ui::set_pos(x, y);
		for (size_t i = 0; i < vec_s.size(); ++i) {
			_s << wrap_str(vec_s[i], "[", "]") << "\t";
			if ((i % per) == 0) _s << "\n";
		}
		return _s.str();
	}

	void set_stringlist(TableList *tablelist, std::vector<std::string> vec_s, int x, int y, int per) {
		tablelist->data = create_stringlist(vec_s, x, y, per);
	}

	std::string create_tablelist_object(std::string s, int x, int y) {
		std::string _s;
		std::stringstream sf;
		if (!str_empty(s)) {
			std::vector<std::string> vs = {
				repeat_str("-", 45), "\n", s, "\n", repeat_str("-", 45)
			};
			_s = ret_vector_s(vs);
		}
		sf << ui::set_pos(x, y) << _s;
		return sf.str();
	}

	void set_tablelist_object(TableList *tablelist, std::string s, int x, int y) {
		tablelist->data = create_tablelist_object(s, x, y);
	}

	std::string create_tablelist_vec(std::vector<std::string> vec_s, int x, int y, int per) {
		std::stringstream sf;
		std::cout << repeat_str("-", 45);
		for (size_t i = 0; i < vec_s.size(); ++i) {
			if ((i % per) == 0) sf << "\n";
			sf << vec_s[i] << "\t";
			if ((i % per) == 0) sf << "\n" << repeat_str("-", 45);
		}
		return sf.str();
	}

	void set_tablelist_vec(TableList *tablelist, std::vector<std::string> vec_s, int x, int y, int per) {
		tablelist->data = create_tablelist_vec(vec_s, x, y, per);
	}

	void push_tablelist(TableList *tablelist) {
		std::cout << tablelist->data;
	}
}
