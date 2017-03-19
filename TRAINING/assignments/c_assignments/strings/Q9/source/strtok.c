#include"header.h"

/*function definition to parse the until it finds a delimiter*/
char* str_tok(const char *str1, const char *delim)
{
	char *str2 = NULL;	//string 2
	
	/*allocates memory for string 2*/
	str2 = (char *) malloc (100 * sizeof(char));
	
	int i = 0; //index
	int j = 0;
	int k = 0;

	while(*(delim+j) != '\0'){
		while((*(str1+i) != *(delim+j))){
			*(str2+k) = *(str1+i);
			i++;
			k++;
		}
		j++;

	}
	return str2;
}
