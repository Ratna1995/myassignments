#include"header.h"

/*finds the length of a string*/
int strleng(char *ch)
{

	int count = 0;
	int i = 0;
	
	for(; ch[i] != '\0'; i++){
		count++;
	}	
	return count;
}
