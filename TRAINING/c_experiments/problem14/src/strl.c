#include "header.h"

int strl( char *str)
{
	int l = 0;
	while ( *(++str) != '\0' )
		l++;
	return l;
}
