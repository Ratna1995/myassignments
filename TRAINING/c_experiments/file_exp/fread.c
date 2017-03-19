#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int main()
{
	FILE *fp;
	char *buf = NULL;
	int res;

	buf = malloc(MAX*sizeof(char));

	fp = fopen("count.txt", "r+");

	printf("%p\n", fp);
	
	res = fread(buf, 10, 1, stdin);
	printf("res = %d\n", res);

	if(EOF == res){
		ferror(fp);
		exit(0);
	}

	printf("%s\n", buf);
	fclose(fp);
	free(buf);
	return 0;
}
