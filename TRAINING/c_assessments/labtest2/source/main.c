#include"header.h"

int main()
{
	char *str1 = NULL;	//string 1
	char *str2 = NULL;	//string 2
	int result;			//result
	
	if(NULL == (str1 = (char *) malloc (100 * sizeof(char)))){	/*allocation of
						           					 memory for str1*/
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	if(NULL == (str2 = (char *) malloc (100 * sizeof(char)))){ /* allocation of
													memory for string2*/
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	printf("enter string 1 for case comparing\n");
	if(NULL == fgets(str1, MAX, stdin)) { // input str1 and check if it is null
		perror("fgets failed"); //if null print error message
		exit(EXIT_FAILURE);
	}


	printf("enter string 2 for comparing with string1:\n");
	if(NULL == fgets(str2, MAX, stdin)) { // input str2 and check if it is null
		perror("fgets failed"); //if null print error message
		exit(EXIT_FAILURE);
	}
	
	result = casecmp(str1, str2); //function call for casecmp
	
	if(result == 0) //if 0 strings are equal
		printf("strings are equal");
	else if(result == 1) // if 1 str1 is greater
		printf("string 1 is greater");
	else if(result == -1) // if -1 string 2 is greater
		printf("string 2 is greater than str1");
	
	free(str1); //free memory allocated to str1
	free(str2); // free memory allocated to str2
	return 0;
}
