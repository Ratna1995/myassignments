#include<stdio.h>
int main()
{
	int num;
	int i;
	int count=0;
	printf("enter a num\n");
	scanf("%d",&num);
	i = (sizeof(int))*8;
	for(;i>=1;i--)
	{
		printf("%d",1 & (num >> (i-1)));
		count++;
		if(count % 8 == 0)
		printf(" ");
	}

}

