#include<stdio.h>

int main()
{
	int n;
	int i;
	int fibo[100];
	
	printf("enter the number\n");
	scanf("%d", &n);
		fibo[0] = 0;
		fibo[1] = 1;
	printf("fiboancci series:\n");
	for(i = 2; i < n; i++)
		fibo[i] = fibo[i-1] + fibo[i-2];
	for(i = 0; i < n; i++){	
		printf("fibo:%d\n",fibo[i]);
	}
	return 0;
}
