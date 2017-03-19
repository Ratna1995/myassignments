#include<stdio.h>
extern int showbit(int num);
int main()
{
	int n,i;
	i = sizeof(int) * 8;
	printf("enter num\n");
	scanf("%d",&n);
	for(;i>=0;i++)
	{
		n = ((1 << (i-1) ) & n == 1) ? (~(1<< (i-1)) & n) : ((1<<(i-1))|n);
		showbit(n);
	}
}
