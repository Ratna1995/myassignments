#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char ch;
	FILE *fp;
	FILE *f;
	
	if(NULL == (fp = fopen(argv[1], "r+"))) {
		perror("fopen(fp) failed\n");
	}
	
	f = fopen(argv[1], "r+");
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
