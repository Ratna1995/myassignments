#include<stdio.h>
extern int showbit(int num);
int main()
{
	int num;
	int s, d;

	printf("enter a number\n");
	scanf("%d",&num);

	printf("enter the s and dth positions\n");
	scanf("%d %d",&s,&d);
	
	if((num >> s) & 1 == (num >> d) & 1)
	{
		printf("num:%d",showbit(num));
	}
	else
	{
		num = (1 << d) ^ num;
		num = (1 << s) ^ num;
		printf("swapped: %d",showbit(num));
	}
	
}
