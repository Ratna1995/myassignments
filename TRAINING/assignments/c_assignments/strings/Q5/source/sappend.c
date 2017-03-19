#include"header.h"

char* snappend(char *str1, char *str2, int n)
{
	int i = strleng(str2);	//index value
	int j = 1;	// index value
	while(j <= n) {		//iterates until j is greater than n
		*(str2 + i) = *(str1 ++);	// appends n characters of str1 to str2
		i++;	// increments i by 1
		j++;	// increments j by 1
	}
	return str2; 
}
