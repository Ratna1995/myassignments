#include "header1.h"

/* function definition to find the length of string*/
int str_len (char *str)
{
	int i=0;
	while(*str++ ){
		i++;
	}
	return (i-1);
}
