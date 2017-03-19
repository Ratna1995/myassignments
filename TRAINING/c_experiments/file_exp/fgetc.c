#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	int res;
	FILE *fp;

	fp = fopen("fgetc.c", "r");
	printf("fp = %p\n", fp);

	while((ch  = fgetc(fp)) != EOF){
//		ch = ch ^ 32;
//		fseek(fp, -1, SEEK_CUR);
		fputc(ch, stdout);
	}

	return 0;
}

