#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;	
//	char *ptr;// = (char *) malloc (sizeof(char) * 10);
	char **ptr = (char **) malloc (sizeof(char *) * 5);	
	for(i = 0;i < 5; i++)
		*(ptr+i) = (char *) malloc ((sizeof(char *) *5)+ i);
	
//	*(*(ptr+5)+5) = 20;
//	printf("*(*(ptr+5)+5) = %d\n", *(*(ptr+5)+5));
	printf("ptr = %p\n", ptr);
	printf("*ptr = %p\n", *ptr);
	printf("*ptr+1 = %p\n", *ptr+1);
	printf("*ptr+2 = %p\n", *ptr+2);
	printf("*ptr+3 = %p\n", *ptr+3);
	printf("*ptr+4 = %p\n", *ptr+4);
	printf("*ptr + 5 = %p\n", *ptr+5);
	printf("*(ptr + 1) = %p\n", *(ptr+1));
	printf("*(ptr + 1) = %p\n", *(ptr+1)+1);
	printf("*(ptr + 1) = %p\n", *(ptr+1)+2);
	printf("*(ptr + 2) = %p\n", *(ptr+2));

	
}
