#include<stdio.h>
#include<stdlib.h>
#define MAX 50
#if 0
int main()
{
	//int **p = NULL;
	//allocates memory	
	int **p = (int **) malloc (MAX * sizeof(int *));
		printf("malloc failed");
	//	exit(0);

	return 0;
}
	
#endif

#if 1
int main()
{
	int i;
	char **ptr;
	
	ptr = (char **) malloc (sizeof(10 * 10));
	
	for (i = 1; i< 10; i++)
		*(ptr+i) = *ptr+(10*i);

	printf("ptr = %p\n", ptr);
	printf("*ptr = %p\n", *ptr);
	printf("*ptr+1 = %p\n", *ptr+1);
	printf("*ptr+2 = %p\n", *ptr+2);
	printf("*ptr+3 = %p\n", *ptr+3);
	printf("*ptr+4 = %p\n", *ptr+4);
	printf("*ptr + 5 = %p\n", *ptr+5);
	printf("*ptr + 9 = %p\n", *ptr+9);
	printf("*(ptr + 1) = %p\n", *(ptr+1));
	printf("*(ptr + 1) = %p\n", *(ptr+1)+1);
	printf("*(ptr + 1) = %p\n", *(ptr+1)+2);
	printf("*(ptr + 2) = %p\n", *(ptr+2));

	return 0;
}
#endif
