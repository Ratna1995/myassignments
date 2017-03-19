#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* chr_add_instr(char *,char );

int main()
{
	char *str = NULL;
	char c;
	char *address;
	
	printf("enter a string:\n");
	str = (char *) malloc (100 * sizeof(char));
	fgets(str,100,stdin);

	printf("enter a character :\n");
	scanf("%c", &c);
	
	address = chr_add_instr(str,c);
	
	printf("the address of character c:%p\n", address);
	return 0;
}

char* chr_add_instr(char *str, char c)
{
	int i = 0;
	char *pos;
	while(*(str + i) != '\0') {
		if(c == *(str + i)) {
			pos = str + i;
			break;
		}
		i++;
	}
	return pos;
}
			
	
