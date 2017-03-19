#include<stdio.h>

int main()
{
	int arr1[5];
	int i, sum = 0;
		
	printf("enter 5 number\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		sum = sum + arr1[i];
	}
	printf("sum = %d", sum);
	return 0;
}
