#include "header.h"

int main()
{
	char *s = NULL;
	double val;

	if(NULL == (s = (char *)malloc(sizeof(char) * 32))){
		printf("malloc failed\n");
		exit(1);
	}

	printf("enter a value\n");
	if(NULL == (fgets(s, MAX, stdin))){
		perror("fgets failed");
		exit(1);
	}

	val = atofloat(s);

	printf("val = %f\n", val);

	return 0;
}
