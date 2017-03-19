#include "header.h"

/* function definition to rotate a string*/
int rotstr(char *str1,char *str2)
{
	int length; //length
	int result;	//result
	char *str3;	//string 3

	/* allocates memory for string 3*/
	str3 = (char *) malloc (sizeof(char));	
	length = strl(str1);	//string length of string 1
	
	strcopy(str1,str3);	// copies string 1 to string 3
	strcopy(str1,(str3+length));	// copies string 1 to string 3
	*(str3+length+length) = '\0';
	result = strspn(str2,str3);

	if ( result == strl(str2) )
		return 1;
	else
		return 0;
}
	
	
	
