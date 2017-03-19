#include"header.h"

/* function definition to enter a character at a given position in the string*/
char* insertchar(char *str, const char ch, int pos)
{
	int i;	//index
	int l1;	//length
	
	l1 = strleng(str);//string length of string
	i = l1 - 1;	//i is assigned to length  -1

	/* checks for the position in the string*/
	while(i >= pos - 1) {	
		*(str + i +1) = *(str + i);	
		i--;
	}
	*(str + pos) = ch;	//placing character in tje posiiton
	return str;
}
