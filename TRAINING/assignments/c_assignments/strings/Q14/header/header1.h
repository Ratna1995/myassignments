#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 150	//macro for MAX size 

int str_len(char *str);	//function prototype to find string length

/*function prototype to check if set of characters in sbuf matches dbuf*/
int strsp(char *sbu, char *dbu);

/*function prototype to remove the characters matched and retrieve the string*/
char *rmstr(char *sbu, char *dbu);
