#include "chtools.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool ch_empty(char* chptr) {
	return (chptr && !chptr[0]);
}

bool ch_compare(char* ch_a, char* ch_b) {
	return (strcmp(ch_a, ch_b) == 0);
}
