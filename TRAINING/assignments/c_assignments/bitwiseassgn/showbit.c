#include<stdio.h>

void showbit(int num)
{
	int i;
//	i = (sizeof(int))*8;
	for(i=31;i>=0;i--)
	{
		if(!((i+1) % 8))
			printf(" ");
		printf("%d", (num >> i) & 1);
	}

}

