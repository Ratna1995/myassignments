#include"header.h"                                                              
                                                                                
st insert_big(st head)                                                              
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//new node                                                         
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory                                                               
    char len[10];//char array                                                                      
    printf("enter the data to be inserted\n");                                  
    if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    new_node->data = validate( len );                                                       
                                                                                
    if(head == NULL){     //create list                                                       		
		 head=new_node;
		 new_node->next = NULL;
		 new_node->prev = NULL;
	}
                                                                                
	   else                                                                        
    {             //insert at begin                                                              
        	new_node->next = head;
		new_node->prev = NULL;
		head = new_node;                                              
    }                                                                           
                                                                                
    printf("node created\n");                                                   
    return head;                                                                
}           
