#include"header.h"

int main()
{
	char *str1 = NULL;	//string1
	char *str2 = NULL;	//string2
	char *strappend;	// stores the appended string

	/* allocates memory for string 1*/
	if(NULL == (str1 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/* allocates memory for string 2*/
	if(NULL == (str2 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
 
	printf("enter string1:\n");
	if(NULL == fgets(str1,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
		

	printf("enter a string2:\n");                             
    if(NULL == fgets(str2,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	strappend = sappend(str1, str2);	//function call for string append
	
	printf("the final string :%s", strappend);
	return 0;
}
