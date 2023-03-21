#include "tablelist.h"
#include "uipos.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<iostream>
#include<sstream>

namespace ui {
	std::string create_stringlist(std::vector<std::string> vec_s, int per) {
		std::stringstream _s;
		for (size_t i = 0; i < vec_s.size(); ++i) {
			_s << wrap_str(vec_s[i], "[", "]") << "\t";
			if ((i % per) == 0) _s << "\n";
		}
		return _s.str();
	}

	void set_stringlist(TableList *tablelist, std::vector<std::string> vec_s, int per) {
		tablelist->data = create_stringlist(vec_s, per);
	}

	std::string create_tablelist_object(std::string s, int x, int y) {
		std::string _pos = ui::set_pos(x, y);
		std::string _s;
		std::stringstream sf;
		if (!str_empty(s)) {
			std::vector<std::string> vs = {
				_pos, s, "\n", 
				_pos, repeat_str("-", 45)
			};
			_s = ret_vector_s(vs);
		}
		sf << _s;
		return sf.str();
	}

	void set_tablelist_object(TableList *tablelist, std::string s, int x, int y) {
		tablelist->data = create_tablelist_object(s, x, y);
	}

	std::string create_tablelist_vec(std::vector<std::string> vec_s, int x, int y, int per) {
		std::stringstream sf;
		std::string _pos = ui::set_pos(x, y);
		for (int i = 0; i < vec_s.size(); ++i) {
			sf << _pos << vec_s[i] << (((i % per) == 0) ?"\n" + _pos + repeat_str("-", 45) : "");
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
