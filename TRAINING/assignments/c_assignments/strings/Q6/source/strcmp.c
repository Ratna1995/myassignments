#include"header.h"

/* function definition for string compare*/
char strgcmp(char *str1, char *str2)
{
	int i = 0;	//index
	int flag;	//flag to store the count

	while(*(str1 + i) != '\0') {	//iterates until the end of string 1
		if(*(str1 + i) == *(str2 + i)) //checks if str1 and str2 are equal
			flag = 0;	//if equal, assigns flag to 0
		else if(*(str1 + i) > *(str2 + i)) //if str1 is greater than string2
				return 1;	//returns 1 to main function
		else if(*(str1 + i) < *(str2 + i))	//if string 2 greater than string1
				return -1;	// returns -1 to main function
		i++;	//increments i by 1
	}
	return flag;
}
