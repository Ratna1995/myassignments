#include"header.h"

int main()                                                                      
{                                                                               
    char *sbuf = NULL;	//source buffer
    char *dbuf = NULL;  //destination buffer           

	/* allocation of memory to source buffer*/                                      if(NULL == (sbuf = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/* allocation of memory to dbuf*/
    if(NULL == (dbuf = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	printf("enter a string:\n");
    if(NULL == fgets(sbuf, MAX, stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
		
	str_cpy(sbuf, dbuf);

	free(sbuf);	//frees sbuf
	free(dbuf); // frees dbuf
    return 0;                                                                   
}      
