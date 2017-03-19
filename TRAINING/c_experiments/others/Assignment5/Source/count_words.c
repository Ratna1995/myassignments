#include <stdio.h>
#include <stdlib.h>

int count_words(char *filename)
{
	int count = 0;
	char ch;
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL) {
		perror("fopen failed\n");
		exit(1);
	}
	
	while((ch = fgetc(fp)) != EOF) {
		if(ch == 32 || ch == 9 || ch == 10) {
			while((ch = fgetc(fp)) == 32 || ch == 9 || ch == 10) {
			}
			count++;
		}
	}
		return count;
}
