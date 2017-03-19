#include"header.h"                                                              
                                                                                
void del_middle(int val)                                                     
{                                                                               
    int i = 1;	//index
	/*current is pointer variable of type struct node*/
    struct node *current = NULL;                       

    if(head == NULL){
		printf("******list is empty******\n");
		return;
	}
	else{
    	current = head;                                                             
    	while(current -> next != NULL) {                                            
        	current = current -> next;                                              
        	i++;                                                                    
    	}   
		/*function call to delete a node at the middle of the list*/
    	delpos(((i/2) + 1));
	}
}
