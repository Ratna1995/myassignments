#include<stdio.h>                                                               
#include<stdlib.h> 
#define MAX 15

typedef struct EH {
	unsigned char e_ident[16];
	short e_type;
	short e_machine;
	int e_version;
	unsigned int e_entry;
}eh;
