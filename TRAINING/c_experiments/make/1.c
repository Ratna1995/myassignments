#include<stdio.h>

extern int func(int a);

int main()
{
	int a = 2;
	a = func(a);
	printf("%d\n", a);
	return 0;
}
