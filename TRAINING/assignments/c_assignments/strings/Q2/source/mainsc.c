#include"header.h" 

int main()                                                                      
{                                                                               
    char *sbuf = NULL;	//source buffer
    char *dbuf = NULL;  // destination buffer                                        
	char n[10];  // character array
	int number;		// number of characters to be copied
                                                                              
    printf("enter a string:\n");                        
	/* allocates memory for source buffer*/                        
    if(NULL == (sbuf = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/*allocates memory for destination buffer*/
    if(NULL == (dbuf = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
    
	if(NULL == fgets(sbuf, 50, stdin)) {
		perror("fgets failed");
		exit(0);
	}
		
	printf("enter the number of characters to be copied :\n");
	fgets(n,50,stdin);
	
	number = atoint(n);	// converts alphabets to integer
	 	
    strn_cpy(sbuf, dbuf, number);	//finction call to string copy
    return 0;                                                                   
}      
