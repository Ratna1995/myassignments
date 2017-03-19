#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int res;

	fp = fopen("count.txt","a");
	res = fprintf(stdout, "i'm fine, Thank you");

	printf("res = %d\n", res);

	return 0;
}

