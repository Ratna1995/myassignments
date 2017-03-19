#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("count.txt", "r+");
	while((ch = fgetc(fp)) != EOF){
		ch = (ch | 32);
		fseek(fp, -1, SEEK_CUR);
		fputc(ch, fp);
	}

	return 0;
}
