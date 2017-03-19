#include"header.h"

int str_spn(const char *buf1, const char *buf2)
{
	int i = 0;	//index
	int j = 0;	//index
	int temp = 0;	//index

	while((*(buf1 + i + 1) != '\0') && (*(buf2 + j + 1) != '\0')) {
	/* checks if initial set of character in string 1 are found in string 2*/
		if(*(buf1 + i) == *(buf2 + j)) { 
			temp ++;	//increments temp by 1
			i++;	//increments i by 1
			if(*(buf1  + i) != *(buf2 + j +temp)) //if not found
				break;
		}
		temp = 0; 
		j++;	//increments j by 1
	}
	return i;	//returns how many positions the string is equal
}
