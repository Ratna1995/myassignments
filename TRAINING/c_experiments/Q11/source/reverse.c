#include"header.h"

char* reverse(char *str1)
{
	char *str2;
	str2 = (char *) malloc (100 * sizeof(char));

	int i;
	int j = 0;
	
	i = strlen(str1) - 1;

	while(i > 0) {
		*(str2 + j) = *(str1 + (i - 1));
		j++;
		i--;
	}

	return str2;
}
	
