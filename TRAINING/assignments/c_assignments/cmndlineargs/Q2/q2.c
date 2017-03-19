#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i = 1;
	int count = 0;

	if(argc > 1){
		while(i <= argc) {
			if(strtok(argv[i],".c"))
				count ++;
		i++;
		}
	printf("the number of .c files are %d\n", count);
	}
	else
		printf("no sufficient arguments");

	return 0;
}
