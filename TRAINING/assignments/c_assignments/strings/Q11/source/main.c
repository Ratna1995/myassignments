#include"header.h"

int main()
{
	char *str1;	//string 1
	char *result;	//stores the reversed string

	printf("enter a string to find the reverse of it:\n");
	str1 = (char *) malloc (100 * sizeof(char));
	fgets(str1, MAX, stdin);

	result = reverse(str1);//function call to reverse a string

	printf("the reverse of the given string is:%s\n", result);
	return 0;
}
