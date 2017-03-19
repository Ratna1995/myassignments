#include"header.h"                                                              
                                                                                
void delete_bef()                                                        
{ 
	/*position before which the node has to be deleted*/
    char *p = NULL;                                                                 
    int pos;                                                                    
                                                                                
    printf("enter the position before which the node has to be deleted:\n");          
    if(NULL == (fgets(p, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(!(pos = atoint(p))){
		printf("invalid input\n");
		return;
	}
                                                                                
    delpos((pos-1));//function call to delete a node before a guven position                 
}
