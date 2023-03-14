#ifndef CSTRUTILS_H_
#define CSTRUTILS_H_

#include<cstring>
#include<cstdlib>
#include<ctype.h>

inline static int _cmpstr(char* _a, char* _b) {
	return (
		(strcmp(_a, _b) == 0) ? 0 : 1
	);
}

inline static int _emptystr(char* s) {
	return (
		((s != NULL) && (s[0] == '\0')) ? 0 : 1
	);
}

inline static void _upstr(char* s) {
	char *n = strtok(s, ":");
	char *c = n;
	while (*c) {
		*c = toupper((unsigned char) *c); c++;
	}
}

inline static void _lowstr(char* s) {
	char *n = strtok(s, ":");
	char *c = n;
	while (*c) {
		*c = tolower((unsigned char) *c); c++;
	}
}

#endif // CSTRUTILS_H