#include"header.h"

/* function definition for string copy*/
void strcopy(char *sbuf,char *dbuf)
{	
	int i = 0;	//index
	while( *(sbuf + i) ) {	//iterates until end of string
		*(dbuf+ i) = *(sbuf + i);
		i++;
	}
	
	*(dbuf + i) = '\0';
}
