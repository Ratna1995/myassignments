#include"header.h"
int atoint(char *ch)
{
	int i; 	//index
	int integer = 0;//stores the integer value

	for(i = 0; *(ch + i) != '\0'; ++i)	{
		if(*(ch + i) >= '0' && *(ch + i) <= '9') /* checks if the value is in 
										between o and 9*/
			integer = 10 * integer + (*(ch + i) - '0'); //stores the integer
	}
	return integer;
}
