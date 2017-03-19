#include"header.h"

int strleng(char *ch)
{

	int count = 0;	//to count the number of characters in the string
	int i = 0;		//index
	
	while(ch[i] != '\0'){	//until the end of string
		++count;		//increment count by 1
		i++;			//increment i by 1
	}	
	return count;
}
