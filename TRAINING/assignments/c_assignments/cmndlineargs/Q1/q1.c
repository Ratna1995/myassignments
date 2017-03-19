#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int i;

	for(i = 1; i < argc; i++) {
		if(NULL == (fp = fopen(argv[i], "r"))) {
			perror("fopen failed");
			exit(0);
		}
	}
	
	if(argc > 1)
	printf("the no. of files are %d\n", argc - 1);
	return 0;
}
		
		
		
