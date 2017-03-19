#include "header.h"

int strspn (const char *buf1, const char *buf2)
{
	int i=0;

	int j=0;

	while ( (*(buf1+i+1) != '\0') && (*(buf2+j+1) != '\0') ) {
		if ( *(buf1+i) == *(buf2+j) ) {
				i++;
				j++;
		}
		else {
			j++;
			if ( i != 0 )
			return i;
		}
	}

	return i;
}
				
