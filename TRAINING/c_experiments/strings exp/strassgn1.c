#include<stdio.h>
#include<stdlib.h>

void str_cpy(char *, char *);

int main()
{
	char *dbuf = NULL;
 	char *sbuf = NULL;
	
	printf("enter a string:\n");
 	sbuf = (char *) malloc (100 * sizeof(char));
 	dbuf = (char *) malloc (100 * sizeof(char));

	fgets(sbuf, 100, stdin);
	
	if(sbuf == NULL)	
	{
		printf("memory not allocated\n");
	}
		
	str_cpy(dbuf, sbuf);
//	printf("dbuf = %d\n", *dbuf);
	return 0;
}

void str_cpy(char *dbuf, char *sbuf)
{
	int i = 0;
	while(*(sbuf + i) != '\0'){
		*(dbuf + i) = *(sbuf + i);
		i++;
	}
	printf("dbuf=%s\n",dbuf);
}
