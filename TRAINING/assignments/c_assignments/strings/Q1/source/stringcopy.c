#include"header.h"
void str_cpy(char *sbuf, char *dbuf)
{
	int i = 0;		//index
	while(*(sbuf + i) != '\0'){
		*(dbuf+i) = *(sbuf+i);	//assigns the character from sbuf to dbuf
		i++;		//increment i by 1
	}
	
	printf("dbuf = %s", dbuf);
} 
