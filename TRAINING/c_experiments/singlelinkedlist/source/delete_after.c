#include"header.h"                                                              
                                                                                
void delete_after()                                                      
{   
	/*position after which the node has to be deleted*/
    char *p = NULL;                                                                
    int pos;                                                                    
                                                                                
    printf("enter the position after which the node has to be deleted:\n");          
    if(NULL == (fgets(p, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if((pos = atoint(p)) < 0){
		printf("invalid input\n");
		return;
	}
                                                                                
    delpos((pos+1));//function call to delete a node after a given position                  
}
