#include"header.h"

int casecmp(char *str1, char *str2)
{
	int i = 0;	//index value
	int flag;   // to sore a value

	str1 = to_lower(str1); //convert string 1 to lower case
	str2 = to_lower(str2); //convert string 2 to lower case
 
	while(*(str1 + i) != '\0' && *(str2 + i) != '\0') { /* check strings until 
	the end of it*/
		if(*(str1 + i) == *(str2 + i)) // check if both strings are equal
			flag = 0;					// if equal, assign 0 to flag
		else if(*(str1 + i) > *(str2 + i)) /*check if string1 is greater than 
											string2*/
			return 1;		// if greater, return 1
		else if(*(str1 + i) < *(str2 + i)) /* check if string1 is less than 
											stirng2*/
			return -1;			// if lesser, return -1
		i++;					//increment index by 1
	}
	return flag;				//retrun flag, when the stirngs are equal
}
