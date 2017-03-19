#include"header.h"                                                              
int main()                                                                      
{                                                                               
    char *str1;	//string 1                                                                
    char *str2; // string 2                                                      
    int res; // stores the result                                     
                                 
	/*allocates memory for string1*/                                               
    if (NULL == (str1 = (char *)malloc(sizeof(char)))) {                        
        printf("Malloc failed \n");                                             
        exit(0);                                                                
    }                                                                           
                                    
	/* allocates memory for string 2*/                                            
    if (NULL == (str2 = (char *)malloc(sizeof(char)))) {                        
        printf("Malloc failed \n");                                             
        exit(0);                                                                
    }                                                                                                                                      

    printf("enter the first string\n");                                                                                   
    if (NULL == (fgets(str1, MAX, stdin)) || (*str1 == 10) ){                  
        printf("You haven't entered any input\nplease ");                       
        exit(0);                                                                
    }                                                                           
                                                                                
     printf("enter the string2 to check if it is rotated string of string1\n");                                       
     if (NULL == (fgets(str2, MAX, stdin)) || (*str2 == 10) ){                  
        printf("You haven't entered any input\n ");                             
        exit(0);                                                                
    }                                                                           
  
	res = rotstr(str1,str2);//function call to find str2 is rotated str of str1
	
	if ( res == 1 )
		printf("the string2 is the rotated string of string1\n");
	else
		printf("the string2 is not rotated string of string1\n");

	return 0;
}
