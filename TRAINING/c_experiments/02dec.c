#include<stdio.h>

int main()
{
	int a = 4, b = 3;
	
	if(a > b || a++)
		printf("a = %d\n", a);
	return 0;
}
