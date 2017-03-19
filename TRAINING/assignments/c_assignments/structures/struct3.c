#include<stdio.h>

int main()
{
	unsigned int i;	//declaration of i with type unsigned int
	char (*c) = (char *)&i;	// referencing i to c
	
	printf("enter a value");
	scanf("%d", &i);

	if(*c)	// tells if the system is little endian or big endian
		printf("little endian\n");
	else
		printf("big endian\n");

	return 0;
}
