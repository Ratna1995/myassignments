#include"header.h"

/*function definition to find the reverse of a string*/
char* reverse(char *str1)
{
	char *str2;	//string 2
	/* allocates memory for  string2*/
	str2 = (char *) malloc (100 * sizeof(char));

	int i;	//index
	int j = 0;	//index
	int length; //length
	
	length = strlen(str1) - 1;	//finds the string length

	/* reverses a string*/
	for(i = length; i > 0; i--, j++) {
		*(str2 + j) = *(str1 + (i - 1));
	}

	return str2;
}
	
