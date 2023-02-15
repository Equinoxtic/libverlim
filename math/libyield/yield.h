#ifndef YIELD_H_
#define YIELD_H_

#include "./percentage.h"
#include<iostream>

static inline float yield_r(float o, float i) {
	return (to_percentage(o/i));
}

static inline void yield_o(float o, float i) {
	std::cout << to_percentage(o/i) << "%";
}

#endif // YIELD_H_