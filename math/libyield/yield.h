#ifndef YIELD_H_
#define YIELD_H_

#include "./percentage.h"
#include<iostream>

namespace lvmath {
	template<typename N>
	static inline N yield_r(N o, N i) {
		return (to_percentage(o/i));
	}

	template<typename N>
	static inline void yield_o(N o, N i) {
		std::cout << to_percentage(o/i) << "%";
	}
}

#endif // YIELD_H_
