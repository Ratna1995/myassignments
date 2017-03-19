#include<stdio.h>

int main()
{
	char *p = "hello";

//	p++;

	printf("%d\n", *(p+1));
	return 0;
}
