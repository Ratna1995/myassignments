#include<stdio.h>

void calc(int *add, int *sub, int *div, int *mod)
{
	int a = 5;
	int b = 10;
	
	*add = a + b;
	*sub = a - b;
	*div = a / b;
	*mod = a % b;
	
	printf("sum = %d\n", *add);
	printf("diff = %d\n", *sub);
	printf("div = %d\n", *div);
	printf("mod = %d\n", *mod);
}
	
int main()
{
	int add;
	int sub;
	int div;
	int mod;
	
	calc(&add, &sub, &div, &mod);
	return 0;
}
