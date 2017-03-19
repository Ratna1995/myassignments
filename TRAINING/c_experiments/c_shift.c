#include<stdio.h>
int main()
{
	int num;
	int b[7], a[7];
	int rem;
	int shift;
	int i , j;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the num of left shifts\n");
	scanf("%d",&shift);0
	while(shift>0)
	{
		for(j=7,i=1;j>=0,i<=7;j--,i++)
		{
			b[j] = a[7-i];
			b[0] = 0;
		}
		shift--;
	}
	
