#include<stdio.h>

int main()
{
	int a[20][20];
	int b[20][20];
	int n, i, j;
	int sum[20][20];
	
	printf("enter the value of n:\n");
	scanf("%d", &n);
	
	printf("enter the values for a:\n");
	for(i = 0; i < n; i++)	{
		for(j = 0; j < n; j++)	{
			scanf("%d", &a[i][j]);
		}
	}

	printf("enter the array b:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	printf("the sum of 2 arrays\n");
	for(i = 0; i < n; i++)	{
		for(j = 0; j < n; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i = 0; i < n; i++)	{
		printf("\n");
		for(j = 0; j < n; j++)	{
			printf("%d\t", sum[i][j]);
		}
	}
	
	return 0;
}
