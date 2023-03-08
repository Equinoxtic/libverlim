#ifndef PERCENTAGE_H_
#define PERCENTAGE_H_

#include<string>

namespace lvmath {
	template<typename N>
	static inline N to_percentage(N x) {
		return (x * 100);
	}

	template<typename N>
	static inline N find_percentage(N x) {
		return (x / 100);
	}
}

#endif // PERCENTAGE_H_
