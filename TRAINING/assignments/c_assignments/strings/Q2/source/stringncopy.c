#include"header.h"
void strn_cpy(char *s, char *d, int n)
{
	int i = 0;	//index
	while(i < n && *(s + i) != '\0') {	//checks until the end of string
		*(d + i) = *(s + i);	//copies n number of characters to d
		i++;
	}
	d[n] = '\0';
	printf("dbuf = %s\n", d);
}
