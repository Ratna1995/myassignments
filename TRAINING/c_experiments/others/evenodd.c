#include<stdio.h>

int even_odd(int number);

int main()
{
	int number;
	int result;

	printf("enter a number\n");
	scanf("%d", &number);
	
	result = even_odd(number);
	if(result)
		printf("odd\n");
	else
		printf("even\n");
	
	return 0;
}
	
int even_odd(int number)
{
	number = (number & 1);
	return number;
}
