#include"header.h"

int main()
{
	char *str1;	//string 1
	char *result;//stores the squeezed string

	printf("enter a string to squeeze the consecutive similar characters:\n");
	if(NULL == (str1 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed"); 
		exit(0);
	}

	if(NULL == fgets(str1, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	result = squeeze_char(str1);// function call to squeeze similar chracters

	printf("the squeezed string is : %s\n", result);
	return 0;
}
