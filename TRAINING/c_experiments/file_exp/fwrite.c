#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int main()
{
	FILE *fp;
	char *buf = NULL;
	int res;

	if(NULL == (buf = (char *)malloc(MAX * sizeof(char)))){
		printf("malloc failed\n");
		exit(1);
	}

	if(NULL == (fp = fopen("count.txt", "a+"))){
		perror("fopen failed");
		exit(1);
	}

	fread(buf, 10, 1, fp);
/*	if(NULL == (fgets(buf, 10, stdin))){
		perror("fgets failed");
		exit(1);
	}
	printf("buf =%s\n", buf);*/

	res = fwrite(buf, MAX*sizeof(char), 1, stdout);
	printf("res = %d\n", res);

	close(fp);
	free(buf);

	return 0;
}
