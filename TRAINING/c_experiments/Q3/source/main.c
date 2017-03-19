#include"header.h"
int main()
{
	char *str = NULL;
	char c;
	char *address;
		
	printf("enter a string:\n");
	str = (char *) malloc (100 * sizeof(char));
	if(NULL == fgets(str,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);	
	}

	printf("enter a character :\n");
	c = getchar();

	address = my_strchr(str,c);
	printf("the address of character %c:%p\n", c, address);
	return 0;
}
