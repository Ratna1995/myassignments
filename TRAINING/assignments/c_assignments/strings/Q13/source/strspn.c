#include "header.h"

/* function definition to find if string 2 is a rotated string of string 1*/
int strspn (char *buf1, char *buf2)
{
	int i=0;	//index
	int j=0;	//index

	while ( (*(buf1+i+1) != '\0') && (*(buf2+j+1) != '\0') ) {
	/* checks if String 2 is a rotated string of string 1*/
		if ( *(buf1+i) == *(buf2+j) ) {
				i++;
				j++;
		}
		else {
			j++;
			if ( i != 0 )
			i = 0;
		}
	}

	return i;
}
				
