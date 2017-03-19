#include"header.h"

int strleng(char *ch)
{

	int count = 0;	//counts the number of characters in the string
	int i = 0;		//index value
	
	for(i = 1; ch[i] != '\0'; i++){ //checks if end of string
		++count;		//increment count by 1
	}	
	return count;
}
