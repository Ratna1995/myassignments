#include"header.h"

int main()
{
	char *str = NULL; 	//string
	char ch;	//character
	int pos;	//position
	char n[10];	//n is a array of type char of 10 elements
	char *result;	//stores the result
	
	printf("enter a string:\n");
	str = (char *) malloc (100 * sizeof(char)); 
	fgets(str, MAX, stdin);

	printf("enter a character to be inserted a given position in string:\n");
	ch = getchar();
	getchar();
	
	printf("enter a position where the character is to be inserted:\n");
	fgets(n, 50, stdin);

	pos = my_atoi(n);	//converts alphabets to integer
	printf("position is %d\n",pos);

	result = insertchar(str, ch, pos);//function call to insert char into string

	printf("string after character is inserted :%s\n", result);
	return 0;
}
