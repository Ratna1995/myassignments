#include"header.h"

int main()
{
	char *str1 = NULL; //string 1
	char *str2 = NULL;	//string 2
	char n[10];	//
	int number;	//number of characters to be appended
	char *strnappend;	//strores the appended string

	/* allocates memory for string 1*/
	if(NULL == (str1 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/* allocates memory for string2*/
	if(NULL == (str2 = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	printf("enter string 1:\n");
	if(NULL == fgets(str1,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	printf("enter a string2:\n");                              
    if(NULL == fgets(str2,100,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);	
	}
	
	printf("enter the number of character to be appended:\n");
	fgets(n, MAX, stdin);
	
	number = atoi(n);	//converts alphabets to integer

	/* function call to string append*/
	strnappend = snappend(str1, str2, number);
	
	printf("the final string :%s\n", strnappend);
	return 0;
}
