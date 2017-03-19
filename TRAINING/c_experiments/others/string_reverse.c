#include<stdio.h>
#include<stdlib.h>
void str_rev(char *str);

int main()
{
	char *s = NULL;

	s = (char *) malloc (sizeof(char) * 30);

	str_rev(s);

	return 0;
}

void str_rev(char *str)
{
	if(*str)
	{
		str_rev(str+1);
		printf("%c", *str);
	}
}
