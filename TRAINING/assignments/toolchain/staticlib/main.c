#include<stdio.h>
//#include<stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	int sum;
	int diff;
	sum = add(a,b);
	diff = sub(a,b);
	printf("sum = %d\n", sum);
	printf("diff = %d\n", diff);
	printf("pid = %d\n", getpid());
	getchar();
	return 0;
}
