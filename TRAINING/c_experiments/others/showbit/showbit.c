#include<stdio.h>

void showbit(int num)
{
	int i;
	i = (sizeof(int))*8;
	for(;i>0;i--)
	{
		if(!((i) % 8))
			printf(" ");
		printf("%d", (num >> (i-1)) & 1);
	}
}

