#include"header.h"                                                              
                                                                                
void insert_penultimate(int val)                                                     
{                                                                               
    int i = 1;//index
	/*current is a pointer variable of type struct node*/
    struct node *current = NULL;                                                
    
	if(head == NULL) {
		printf("******no list present******\n");
		return;
	}
	else {
    	current = head;                                                             
    	while(current -> next != NULL) {                                                                 
        	current = current -> next;                                              
        	i++;                                                                    
		}
		/*function call to insert a element at penultimate position*/
    	position(i, val);
	}
}              
