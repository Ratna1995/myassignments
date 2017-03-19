#include<stdio.h>
int main()
{
	int a, b, c;
	int x;

	printf("enter a, b ,c");
	scanf("%d%d%d", &a, &b, &c);
	
	x = (a > b && a > c)? a : ((b > c) ? b : c);
	printf("%d is grater:\n", x);
	return 0;
}
