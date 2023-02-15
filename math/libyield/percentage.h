#ifndef PERCENTAGE_H_
#define PERCENTAGE_H_

static inline float to_percentage(float x) {
	return (x * 100);
}

static inline float find_percentage(float x) {
	return (x / 100);
}

#endif // PERCENTAGE_H_