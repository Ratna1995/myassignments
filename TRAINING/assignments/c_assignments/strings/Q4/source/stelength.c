#include"header.h"

int strleng(char *ch)
{

	int count = 0;	//stores the count
	int i;	//index value
	
	for(i = 0; ch[i] != '\0'; i++){ //checks until the end of the string
		++count;		//increments count by 1
	}	
	return count;
}
