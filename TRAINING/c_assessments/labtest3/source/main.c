#include"header.h"

int main()
{
	char *str = NULL;	//string
	char *result;		//stores the result
	
	if(NULL == (str = (char *) malloc (MAX * sizeof(char)))) { /* checks if the 
				memory is allocated for string */
		printf("malloc failed");//if no memory is allocated, prints malloc fail
		exit(0);
	}

	printf("enter a string to reverse:");
	if(NULL == fgets(str, MAX, stdin)) { //checks if the value entered is null
		perror("fgets failed");//prints an error message
		exit(EXIT_FAILURE);
	}

	result = str_rev(str); //function call for string reverse

	printf("the reversed string is : %s\n", result);

	free(str);	// frees the memory allocated for string
	return 0;
}
