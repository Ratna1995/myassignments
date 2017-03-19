#include"header.h"

/* function definition to convert uppercase letters to lower case*/
char* to_lower(char *s)
{
	int i = 0;	//index
	while(*(s + i) != '\0') {	//iterates until end of string
	/* checks if the character is in uppercase*/
		if(*(s + i) >= 65 && *(s + i) <= 90)
			*(s + i) = *(s + i) + 32;
		i++;
	}
	return s;	
}
