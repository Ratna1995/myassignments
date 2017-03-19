#include"header.h"

int main()
{
	char *str1 = NULL;	//string 1
	char *str2 = NULL;	//string 2
	int result;	//stores the result when the comparision is done
		
	/* allocates memory for string1*/
	if(NULL == (str1 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
	
	/* allocates memory for string2*/
	if(NULL == (str2 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/* gets a string from stdin*/
	printf("enter string 1:\n");
	if(NULL == fgets(str1, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	/* gets second string from stdin*/
	printf("enter string 2:\n");
	if(NULL == fgets(str2, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	result = strgcmp(str1, str2);//function call to campare two strings
	
	/* if 0, strings are equal. if 1, str1 is greater and if -1 str2 is 
				greater*/
	if(result == 0)
		printf("strings are equal\n");
	else if(result == 1)
		printf("string 1 is greater\n");
	else if(result == -1)
		printf("string 2 is greater\n");
	
	free(str1);//frees the allocated memory of str1
	free(str2);	// frees the allocated memory of str2
	return 0;
}
