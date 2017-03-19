#include"header.h"

char* to_lower(char *str)
{
	int i = 0;		//index value
	
	while(*(str + i)) { 	//check for end of string
		if(*(str + i) >= 65 && *(str + i) <= 90) /*check if character is in 
															uppercase*/
			*(str + i) = *(str + i) + 32;	//if uppercase,convert to lowercase
		
		i++;			//increment index by 1
	}
	return str;			// retrun string after converting it to lowercase
}
