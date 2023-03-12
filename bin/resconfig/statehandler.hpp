#ifndef __STATEHANDLER_HPP_
#define __STATEHANDLER_HPP_

#include<string>
#include<vector>
#include "../../lib/stringutils.h"
#include "state_shell.hpp"
#include "state_loader.hpp"

inline static void _open_state_s(std::string _state_s) {
	if (!str_empty(_state_s)) {
		if (compare_str(_state_s, "loader")) {
			states::loader::create();
		} else if (compare_str(_state_s, "shell")) {
			states::shell::create();
		}
	}
}

#endif // __STATEHANDLER_HPP_