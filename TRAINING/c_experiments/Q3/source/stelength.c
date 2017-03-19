#include"header.h"

int strleng(char *ch)
{

	int count = 0;
	int i = 0;
	
	for(i = 1; ch[i] != '\0'; i++){
		++count;
	}	
	return count;
}
