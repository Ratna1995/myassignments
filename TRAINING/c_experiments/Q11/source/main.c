#include"header.h"

int main()
{
	char *str1;
	char *result;

	printf("enter a string:\n");
	str1 = (char *) malloc (100 * sizeof(char));
	fgets(str1, MAX, stdin);

	result = reverse(str1);

	printf("the reverse of the given string is:%s\n", result);
	return 0;
}
