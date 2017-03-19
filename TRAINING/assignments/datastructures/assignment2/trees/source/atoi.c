#include"header.h"
int atoint(char *ch)
{
	int i;	//index
	int integer = 0;	//used to store the integer value

	for(i = 0; *(ch + i) != '\0'; ++i)	{
		if(*(ch + i) >= '0' && *(ch + i) <= '9') /*checks if value is in 
						between 0 and 9*/
			integer = 10 * integer + (*(ch + i) - '0');//store the interger value
	}
	return integer; 
}
