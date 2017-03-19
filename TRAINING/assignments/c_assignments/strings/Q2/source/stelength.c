#include"header.h"

int strleng(char *ch)
{

	int count = 0;	//counts the number of characters in a string
	int i = 0;		//index value
	
	for(i = 1; ch[i] != '\0'; i++){
		++count;	//increments count by 1
	}	
	return count;
}
