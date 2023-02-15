#ifndef CONVERT_H_
#define CONVERT_H_

#include<string>

static inline std::string numtostri(int x) {
	return std::to_string(x);
}

static inline std::string numtostrf(float x) {
	return std::to_string(x);
}

static inline int strtonumi(std::string s) {
	return std::stoi(s);
}

static inline float strtonumf(std::string s) {
	return std::stof(s);
}

#endif // CONVERT_H_