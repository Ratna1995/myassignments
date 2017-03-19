#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;	//file pointer
	char *buf = NULL;	//character
	int count = 0;	//count
	
	buf = malloc(100);
	/*opens a file for reading*/
	if(NULL == (fp = fopen("count.txt","r"))) {
		perror("fopen failed\n");
		exit(EXIT_FAILURE);
	}
	
	/* counts the number of words in a file*/
	while((fscanf(fp, "%s", buf) != EOF)) {
//		if((ch == ' ') || (ch == '\n') || (ch == '\t'))
		count++;
	}
	printf("%d words in a given file",count);
	return 0;
}
	
