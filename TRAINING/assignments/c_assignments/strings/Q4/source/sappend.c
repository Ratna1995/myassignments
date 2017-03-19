#include"header.h"

char* sappend(char *str1, char *str2)
{
	int i = strleng(str2) - 1;	//index value
	
	while(*str1 != '\0') {	//checks until the end of string
		*(str2 + i) = *(str1 ++);	//appends string 1 to string 2
		i++;	//increments i by 1
	}
	return str2; 
}
