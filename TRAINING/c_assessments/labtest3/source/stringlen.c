#include"header.h"

int strleng(char *str)
{
	int count = 0;
	int i = 0;

	while(*(str + i) != '\0') {
		count++;
 		i++;
	}
	return count;
}
