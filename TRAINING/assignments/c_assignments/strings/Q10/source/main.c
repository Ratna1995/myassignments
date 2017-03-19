#include"header.h"

int main()
{
	char *str1;	//string 1
	int result;	//stores the result if the string is a palindrome or not

	printf("enter a string to check if it a palindrome or not:\n");
	str1 = (char *) malloc (100 * sizeof(char));
	fgets(str1, MAX, stdin);

	result = palindrome(str1);//function call to find if a string is palindrome

	if(!result) 	
		printf("%s is a palindrome", str1);
	else
		printf("%s is not a palindrome", str1);
	return 0;
}
