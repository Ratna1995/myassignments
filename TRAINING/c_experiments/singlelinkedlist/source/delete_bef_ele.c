#include"header.h"                                                              
                                                                                
void delete_bef_node()                                                   
{                                                                               
    int i = 1;	//index
	/*number or node before which the node has to be deleted*/
    char *n = NULL;                                                                 
    int num;                                                                    
    struct node *current = NULL;                                                
                                                                                
    printf("enter the number before which the node has to be deleted:\n");     
    if(NULL == (fgets(n, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if((num = atoint(n)) < 0){
		printf("invalid input\n");
		return;
	}
	/*checks if the given number is present in the list and passes the position
	  as argument to the delete position function*/
	if(head == NULL){
		printf("******list is empty******\n");
		return;
	}
	else {
    	current = head;                                                             
    	while(current -> next != NULL) {                                            
        	if((current -> data) == num)                                            
            	break;                                                              
        	else                                                                    
            	current = current -> next;                                          
        	i++;                                                                    
    	}                                                                           
        if(current -> data != num)
			printf("******number is not found in the list******\n");
		else
    		delpos(i - 1);//function call to delete node before a given number
	}
} 
