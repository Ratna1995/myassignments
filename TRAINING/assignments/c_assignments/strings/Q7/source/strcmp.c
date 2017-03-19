#include"header.h"

char strgcmp(char *str1, char *str2)
{
	int strl1;	//string length of string1
	int strl2;	//string length of string 2
	int i = 0;	//index 
	int flag;	//flag to store the count
	
	str1 = to_lower(str1);	//converts uppercase letters in str1 to lower case
	str2 = to_lower(str2);	//converts uppercase letters in str2 to lowercase

	while(*(str1 + i + 1) != '\0') {	//iterates until the end of string1
	/* checks if string1 is equal to or greater than or less than string2*/
		if(*(str1 + i) == *(str2 + i))
			flag = 0;
		else if(*(str1 + i) > *(str2 + i))
			return 1;
		else if(*(str1 + i) < *(str2 + i))
			return -1;
		i++;	
	}
	return flag;
}
