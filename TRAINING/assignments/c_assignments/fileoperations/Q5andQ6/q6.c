#include<stdio.h>
#include<stdlib.h>

/* structure EH*/
struct EH
{
	unsigned char e_ident[16];
	short e_type;
	short e_machine;	
	int e_version;
	unsigned int e_entry;
}s[2];

int main()
{
	FILE *fp;	//file pointer	
	int i;	//index
	
	/*opens a file for reading*/
	if(NULL == (fp = (fopen("info.db", "r")))) {
		perror("fopen failed");
		exit(0);
	}
	
	/* reads the contents from the file into s[i]*/
	printf("ident \t type \t machine \t version \t entry\n");
	for(i = 0; i < 10; i++) {
		if(0 == (fread(&s[i], 1, sizeof(struct EH), fp))) {
			printf("can't read");
			exit(0);
		}
	
	/*print the values on standard output*/
	printf("%s\t", s[i].e_ident);
	printf("%hi\t", s[i].e_type);
	printf("%hi\t\t", s[i].e_machine);
	printf("%d\t\t", s[i].e_version);
	printf("%u\n", s[i].e_entry);
	}
	return 0;
}
