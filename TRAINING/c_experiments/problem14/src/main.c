#include"header.h"                                                              
int main()                                                                      
{                                                                               
    char *str1;                                                                 
    char *str2;                                                                 
    char *str;                                                                   
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

    res = strspn(str2,str1);
    if ( res == strl(str2) ) {                                                                          
    str = remstr(str1,str2);
	
	printf("the stribg thus obtained is\n%s\n",str);
    }
     else
        printf("%s\n",str1);

	return 0;
}     
