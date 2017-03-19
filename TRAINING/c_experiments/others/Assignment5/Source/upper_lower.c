
#include<stdio.h>
#include<stdlib.h>
void upper_to_lower(char *);

void upper_to_lower(char *file_name)
{
	char ch;
	FILE *fp;
	FILE *f;
	
	if(NULL == (fp = fopen(file_name, "r+"))) {
		perror("fopen(fp) failed\n");
	}
	
	f = fopen(file_name, "r+");
	if(f == NULL) {
		perror("fopen(fp) failed\n");
		exit(1);
	}
	
	while((ch = fgetc(fp)) != EOF) {
			if(ch >= 65 && ch <=90) {
				fputc((ch + 32), f);
			} else {
				fputc(ch, f);
			}
	}

	if(fclose(f) == 0) {
		return;
	} else {
		perror("fclose failed\n");
	}

	return;	
}
