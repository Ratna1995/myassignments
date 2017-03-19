#include"header.h"
int main()
{
	char *str = NULL;	//string
	char c;		//character to be checked
	char *address;	//stores the address
		
	printf("enter a string:\n");
	/* allocates memory to string*/
	str = (char *) malloc (100 * sizeof(char));
	if(NULL == fgets(str,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);	
	}

	printf("enter a character :\n");
	c = getchar();

	address = chr_add_instr(str,c);//function call to find address
	printf("the address of character %c:%p\n", c, address);
	return 0;
}
