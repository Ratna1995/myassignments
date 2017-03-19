#include"header.h"                                                              
                                                                                
void delpos(int pos)                                                 
{                                                                               
    int i = 1;	//index
	int count = 1;//counter
	/*current, temp and position are pointer variables of type struct node*/
    struct node *current = NULL;                                                
    struct node *temp = NULL;                                                   
    struct node *position = head;                                                                           

	/*deletes node at given position which is passed as argument to function*/
    if(head == NULL){
		printf("******no list is present\n");
		return;
	}
	else {
		while(position -> next != NULL) {                                       
			++count;                                                            
			position = position -> next;                                        
		}
		if(NULL == (temp = (struct node *) malloc (sizeof(struct node)))) {   
        	printf("malloc failed");                                                
        	exit(0);                                                                
    	}
		if((pos == 0) || (pos > (count + 1))){                                  
			printf("******position out of range******\n");                      
			return;
		}
        current = head;
		if(pos == 1){
			head = current -> next;
			return;
		}
		else {                                                                            
    		while(current -> next != NULL) {                                            
        		if((pos - 1) != i)                                                      
            		current = current -> next;                                          
        		else                                                                    
            		break;                                                              
        		i++;                                                                    
    		}                                                                           
    		temp = (current -> next) -> next;
    		current -> next = temp;                                                     
		}
	}
}
