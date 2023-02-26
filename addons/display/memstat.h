#ifndef MEMSTAT_H_
#define MEMSTAT_H_

#include<string>

void display_virtmem(char *fmt[]);
void display_ram(char *fmt[]);
#ifndef _WIN32
void display_unimem(char *fmt[]);
#endif

#endif // MEMSTAT_H_