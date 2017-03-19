#include"header.h"                                                              
st insert_middle(st head,int pos)                                                  
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//new node                                                           
    int len = 0;//iteration                                                               
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory
    char length[10];//char array                                                               
                                                                                
    printf("enter the data to be inserted\n");                                  
    if(NULL == ( fgets(length, sizeof(length), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    new_node->data = validate( length );                                                        
                                                                                
    if(pos == 1){//1st position is given                                                                 
          	new_node->next = head;
	  	new_node->prev = NULL;
                head = new_node;                                                
        }
        
    else if(pos == 0){
		printf("empty\n");
		return head;
	}
                                                                        
       else                                                                     
    {                                                                           
        cur_node = head;
	while(cur_node->next != NULL){//traverse till middle                                             
	        if(len == (pos/2)){                                                    
	               	new_node->next = cur_node->next;
			new_node->prev = cur_node;
                	cur_node->next = new_node;
			pos++;
			break;                                                          
        	}                                
		len++;                                       
                cur_node = cur_node->next;                                       
    	}                                                                           
    }                                                                            
    printf("node created\n");                                                   
    return head;                                                                
}                                                 
