#include"header.h"

/* function for comparing */
int strgcmp(char * s1buff, char *s2buff)
{
	int flag = NULL;
	
	while( (*(s1buff + 1) != '\0') && (*(s2buff + 1) != '\0'))
	{
		if (*s1buff == *s2buff)
				flag = 0;
		else if(*s1buff > *s2buff)
				return 1;
		else 
			return -1;

		s1buff++;
		s2buff++;
	}
	return flag;
}
