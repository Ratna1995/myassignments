#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *src = NULL;
	char *dest = NULL;;

	src = (char *) malloc (sizeof(char));
	dest = (char *) malloc (sizeof(char));

	printf("source = %p\n", src);
	printf("dest = %p\n", dest);

	printf("enter the source\n");
	fgets(src, 50, stdin);

	memcpy(dest, src, 50);

	printf("%s\n", dest);

	return 0;
}
