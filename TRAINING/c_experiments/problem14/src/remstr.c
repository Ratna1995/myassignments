#include"header.h"

char *remstr(char *str1, const char *sstr)
{
	int i=0;
	int j=0;
	int k=0;
	
	while(*(str1+i+1)!='\0') {
		while ((*(str1+i) == *(sstr+j)) && (*(sstr+j)!='\0')) {
			i++;
			j++;
		}
		*(str1+k) = *(str1+i);
		i++;
		k++;
	}

	*(str1+k) = '\0';	
	return str1;
}
			
