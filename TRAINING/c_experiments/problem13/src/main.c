#include"header.h"                                                              
int main()                                                                      
{                                                                               
    char *str1;                                                                 
    char *str2;                                                                 
    int res;                                                                   
                                                                                
                                                                                
                                                                                
    if (NULL == (str1 = (char *)malloc(sizeof(char)))) {                        
        printf("Malloc failed \n");                                             
        exit(0);                                                                
    }                                                                           
                                                                                
    if (NULL == (str2 = (char *)malloc(sizeof(char)))) {                        
        printf("Malloc failed \n");                                             
        exit(0);                                                                
    }                                                                                                                                      
    printf("enter the first string\n");                                         
                                                                                
     if (NULL == (fgets(str1, MAX, stdin)) || (*str1 == 10) ){                  
        printf("You haven't entered any input\nplease ");                       
        exit(0);                                                                
    }                                                                           
                                                                                
     printf("enter the second string\n");                                       
                                                                                
     if (NULL == (fgets(str2, MAX, stdin)) || (*str2 == 10) ){                  
        printf("You hAven't entered any input\n ");                             
        exit(0);                                                                
    }                                                                           

//	printf("check\n");	  
	res = rotstr(str1,str2);
	
	if ( res == 1 )
	printf("the second string is the rotated string of the first string\n");
	
	else
	printf("the given string is not rotated string of first string\n");

	return 0;
}
