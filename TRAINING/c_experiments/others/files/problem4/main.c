#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int count = 0;
	
	if(NULL == (fp = fopen(argv[1],"r"))) {
		perror("fopen failed\n");
		exit(EXIT_FAILURE);
	}
	
	while((ch = fgetc(fp)) != EOF) {
		if((ch == ' ') || (ch == '\n') || (ch = '\t'))
			while((ch == ' ') || (ch == '\n') || (ch == '\t')) {
			}
		count++;
	}
	printf("\n%d words in a given file",count);
	return 0;
}
	
