#include"header.h"
/*finds the string length of a string*/
int strleng(char *ch)
{

	int count = 0;
	int i = 1;
	
	for(; ch[i] != '\0'; i++){
		++count;
	}	
	return count;
}
