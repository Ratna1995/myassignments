#include<stdio.h>

int add(int x, int y)
{
	return (x + y);
}
	
int sub(int x, int y)
{
	return (x - y);
}

int main()
{
	int a = 10;
	int b = 5;

	int (*ptr_to_add)(int, int);
	int (*ptr_to_sub)(int, int);

	ptr_to_add = add;
	ptr_to_sub = sub;

	printf("sum = %d\n", ptr_to_add(a, b));
	printf("diff = %d\n", ptr_to_sub(a, b));
	
	return 0;
} 
