#include<stdio.h>
#include<stdlib.h>

unsigned int *p;
unsigned int m;
int main()
{
	printf("pid = %d\n", getpid());

	p = malloc(sizeof(int));

	scanf("%x", &m);
	p = m;
	printf("%x\n", *p);
	return 0;
}
