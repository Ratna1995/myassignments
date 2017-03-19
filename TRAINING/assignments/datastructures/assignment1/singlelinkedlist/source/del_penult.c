#include"header.h"                                                              
                                                                                
void del_penult()                                                
{                                                                               
    int i = 1; //index
	/*current is pointer variable of type struct node*/
    struct node *current = NULL;                       

    if(head == NULL) {
		printf("******list is empty******\n");
		return;
	}
	else{
    	current = head;                                                             
    	while(current -> next != NULL) {                                            
        	current = current -> next;                                              
        	i++;                                                                    
    	}     
		/*function call to delete a node at penultimate position*/
    	delpos(i - 1); 
	}
}
