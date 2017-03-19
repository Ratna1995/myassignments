#include"header.h"                                                              
                                                                                
void delete_pos()                                                        
{                                                                               
    /*position where a node has to be deleted*/
	char *p = NULL;                                                                 
    int pos;                                                                    
                                                                                
    printf("enter the position where the node has to be deleted:\n");          
    if(NULL == (fgets(p, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(!(pos = atoint(p))) {
		printf("invalid input\n");
		return;
	}
                                                                                
    delpos(pos);//function call to delete a node at a given position                          
} 
