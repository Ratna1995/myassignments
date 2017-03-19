#include "header.h"

/*function definition to find the string length of a string*/
int strl(char *str)
{
	int l = 0;
	while ( *(++str) != '\0' )
		l++;
	return l;
}
