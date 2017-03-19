#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char c;

	fp = fopen("file.txt", "r");

	c = getc(fp);

	putc(c, stdout);

	return 0;
}
