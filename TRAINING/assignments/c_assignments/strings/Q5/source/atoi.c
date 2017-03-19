#include"header.h"

int atoint(char ch[])
{
	int i;	//index value
	int integer = 0;	//stores the integer value

	for(i = 0; ch[i]; ++i)	{ //iterates until the end of string
		if(ch[i] >= '0' && ch[i] <= '9')// checks if the char is in between 0-9
			integer = 10 * integer + (ch[i] - '0');	//stores the integer value
	}
	return integer;
}
