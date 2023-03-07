#ifndef VECTORUTILS_H_
#define VECTORUTILS_H_

#include<string>
#include<vector>
#include<iostream>

template<typename V>
static inline void put_vector_s(std::vector<V> vec_s, bool newline = false) {
	for (size_t i = 0; i < vec_s.size(); ++i) {
		std::cout << vec_s[i] << ((newline) ? "\n" : "");
	}
}

template<typename V>
static inline std::string ret_vector_s(std::vector<V> vec_s) {
	std::string f;
	for (size_t i = 0; i < vec_s.size(); ++i) {
		f.append(vec_s[i]);
	}
	return f;
}

template<typename V>
static inline void setstring_vector(std::vector<V> vec_s, std::string ts) {
	// for (size_t i = 0; i < vec_s.size(); ++i) {
	// 	ts.append(vec_s[i]);
	// }
	ts = ret_vector_s(vec_s);
}

#endif // VECTORUTILS_H_
