#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p = (int *) malloc (10 * sizeof(int));
	
	p = NULL;
	int x;
	{
		x = 6;
		p = &x;
		//printf("%p\n", p);
	}
	x = 12;
	printf("%p",p);
	printf("x = %d\n", *p);
	return 0;
}
