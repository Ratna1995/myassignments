#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strn_cpy(char *, char *, int n);

int main()
{
	char *sbuf = NULL;
	char *dbuf = NULL; 
	int n;
	
	printf("enter a string:\n");
	sbuf = (char *) malloc (100 * sizeof(char));
	dbuf = (char *) malloc (100 * sizeof(char)); 
	fgets(sbuf, 100, stdin);
	
	printf("enter the number of characters to be copied:\n");
	scanf("%d", &n);
	
	strn_cpy(sbuf, dbuf, n);
	free(sbuf);
	return 0;
}
	
void strn_cpy(char *s, char *d, int n)
{
	int i = 0;
	while( i < n && *(s + i) != '\0') {
		*(d + i) = *(s + i);
		i++;
	}
	//for(;i<n; i++)
		d[n] = '\0';
	printf("dbuf = %s\n", d);
}
