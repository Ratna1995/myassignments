#include<stdio.h>
int showbit(int num)
{
	int i;
	
	for(i = 31; i >= 0; i--) {
		if((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", ((num >> i) & 1));
	}
}
