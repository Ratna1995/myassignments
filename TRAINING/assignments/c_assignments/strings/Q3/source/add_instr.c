#include"header.h"

char* chr_add_instr(char *str, char c)
{
	while(*str++ != c && *str ++ != '\0'); /* checks if character equal 
			character in the string*/
	
	if(*str == '\0'){	//if the character is not in the string 
		printf("the character not in the string\n");
		exit(0);
	}
	return str;
}
