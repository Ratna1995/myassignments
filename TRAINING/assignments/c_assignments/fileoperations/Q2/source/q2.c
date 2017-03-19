#include"header.h"

int main()
{
	char *str = NULL;	//string 
	int res; //result
	
	/* allocates memory for string*/
	if(NULL == (str = (char *) malloc (MAX * sizeof(char)))) {
		printf("can't allocate memory");
		exit(0);
	}

	printf("Enter string to search : ");
	fgets(str, MAX, stdin);

	res = search_string(str);	//function call for string search

	if(res == 0)
		printf("String not found\n");
	else 
		printf("string found.!!!\nLine no is : %d\n", res);

	return 0;
}

		
