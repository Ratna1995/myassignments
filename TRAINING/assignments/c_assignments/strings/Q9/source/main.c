#include"header.h"

int main()
{
	char *buf = NULL;	//buferr
	char *delim = NULL;	//delimiter
	char *result;	//stores the result

	printf("enter a string to parse until it finds a delimiter:\n");
	buf = (char *) malloc (100 * sizeof(char));
	if(NULL == fgets(buf, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	printf("enter the delimiter :\n");
	delim = (char *) malloc (100 * sizeof(char));
	if(NULL == fgets(delim, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	result = strtok(buf, delim);/*function call to parse the string to find 
							delimiter*/
	printf("result after parsing the string up to delimiter:%s\n", result);
	
	return 0;
}
	
