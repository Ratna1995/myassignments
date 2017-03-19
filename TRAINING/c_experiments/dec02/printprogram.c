#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int str = NULL;

	fp = fopen("printprogram.c", "r");
	
	while(EOF != (str = fgetc(fp)))
		fputc(str, stdout);	
	return 0;
}
