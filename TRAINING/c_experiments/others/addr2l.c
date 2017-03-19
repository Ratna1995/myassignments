#include<stdio.h>
#include<stdlib.h>
int *p= NULL;
int main()
{
	p = (int *)malloc(sizeof(char));
	*p = 10;
	printf("%p\n",p+1);

	printf("%d\n",*(p+5));

	return 0;
}
