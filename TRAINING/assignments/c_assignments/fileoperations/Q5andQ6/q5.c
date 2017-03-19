#include<stdio.h>
#include<stdlib.h>

/*structure of EH*/
struct EH
{
	unsigned char e_ident[16];
	short e_type;
	short e_machine;	
	int e_version;
	unsigned int e_entry;
};

int main()
{
	FILE *fp;	//file pointer
	struct EH eh[10];	//array eh of type struct EH
	int i;	//index
		
	/* enter values for elements in struct Eh*/
	printf("enter 10 values for EH:\n");
	for(i = 0; i < 10; i++) {
		scanf("%s", eh[i].e_ident);
		scanf("%hi", &eh[i].e_type);
		scanf("%hi", &eh[i].e_machine);
		scanf("%d", &eh[i].e_version);
		scanf("%u", &eh[i].e_entry);
	}
	
	/* open a file for reading and writing into a file*/
	if(NULL == (fp = (fopen("info.db", "w+")))) {
		perror("fopen failed");
		exit(0);
	}
	
	//write the array of struture into the file*/
	if(0 == (fwrite(&eh, 10, sizeof(struct EH), fp))) {
		printf("can't write");
		exit(0);
	}	
	return 0;
}
	
		
