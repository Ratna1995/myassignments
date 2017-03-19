#include<stdio.h>

int pos(int num, int i);

int main()
{
	int num;
	int res, i;
	
	printf("enter a number\n");
	scanf("%d", &num);
	
	i = sizeof(int) * 8;
	res = pos(num, i);
	if(res)
		printf("negative\n");		
	else
		printf("positive\n");
	return 0;
}

int pos(int num, int i)
{
	num = ((num >> (i-1)) & 1);
	return num;
}
