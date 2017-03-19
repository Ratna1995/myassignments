#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int main()
{
	FILE *fp;
	char *buf = NULL;

	buf = (char *)malloc(MAX * sizeof(char));

	fp = fopen("file.txt", "r+");

	fgets(buf, MAX, fp);

	fputs(buf, stdout);

	return 0;
}
