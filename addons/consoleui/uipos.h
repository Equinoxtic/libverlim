#ifndef UIPOS_H_
#define UIPOS_H_

#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include "../../lib/vectorutils.h"

namespace ui {
	inline static std::string set_pos_x(int n) {
		std::string s;
		if (n > 0) {
			for (int i = 0; i < n; ++i) {
				s.append("\t");
			}
		}
		return s;
	}

	inline static std::string set_pos_y(int n) {
		std::string s;
		if (n > 0) {
			for (int i = 0; i < n; ++i) {
				s.append("\n");
			}
		}
		return s;
	}

	inline static std::string set_pos(int x, int y) {
		std::stringstream ss;
		std::vector<std::string> vs;
		
		vs.push_back(set_pos_x(x)); vs.push_back(set_pos_y(y));

		ss << ret_vector_s(vs);

		return ss.str();
	}

	inline static void out_pos(int x, int y) {
		std::stringstream ss;
		ss << set_pos(x, y);
		std::cout << ss.str();
	}
}

#endif // UIPOS_H_