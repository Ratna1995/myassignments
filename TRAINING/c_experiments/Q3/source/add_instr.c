#include"header.h"

char* my_strchr(const char *str, char c)
{
	int i =0;
	while(*(str + i) != c) {
		i++;
	}
	return str;
}
