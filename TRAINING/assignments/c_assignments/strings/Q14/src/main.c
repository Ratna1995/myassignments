#include"header1.h"

void main()
{
    char *sbuf=NULL;	//source buffer
	char *dbuf=NULL;	//destination buffer
	char *n=NULL;	//number 
	int num;	//number
	
	printf("enter string1 :\n");	
	/* allocates memory for sbuf*/
	if (NULL == (sbuf = (char *)malloc(MAX*sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}
	if ((NULL == (fgets (sbuf, MAX, stdin))) || (*sbuf == 10)){
		printf("enter input\n");
    	exit(0);
	}	

	/* allocates memory for dbuf*/
	if (NULL == (dbuf = (char *)malloc(MAX*sizeof(char)))){                                                                           
    	printf("malloc failed\n");                                                  
    	exit(0);  
	}
	printf("enter string 2:\n");   
	if ((NULL == (fgets (dbuf, MAX, stdin))) || (*dbuf == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
        } 
	
	/* function call to find initial set of characters of sbuf are in dbuf*/
	num = strsp(dbuf,sbuf);	
     
	/* checks if num value is equal to string length of dbuf*/
	if(num != str_len(dbuf))
        printf("string is :%s",sbuf);   
   	else
	{
	/* function call for removing the characters givrn by dbuf from sbuf*/
        n = rmstr(sbuf,dbuf); 
	printf("string is:%s\n",n);
        }
}

