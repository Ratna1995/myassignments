#include"header.h"

char* squeeze_char(char *str)
{
	int i = 0;	//index
	int j = 0;	//index
	
	while(*(str + i) != '\0') { //iterates until end of string
	/* checks for consecutive similar characters*/
		while(*(str + i) == *(str + i + 1) && *(str + i) != '\0'){
			i++;
		}
		/* squeezes the consective similar characters into one character*/
		*(str + j) = *(str + i);
		i++;
		j++;
	}	
	*(str + j) = '\0';
	return str;
}	
