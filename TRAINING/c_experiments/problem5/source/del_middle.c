#include"header.h"                                                              
st del_middle(st head,int pos)                                                  
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//new node                                                           
    int len = 1;//iteration                                                                
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory                                                               

    cur_node = head; 
                                                               
    if(pos == 1){//delete at first                                                                 
          cur_node->next = NULL;                                                  
                  free(cur_node);                                                
        }
                                                                                
       else                                                                     
    {                                                                           
        
	while(len != (pos/2)) {//traverse till position
		if(cur_node->next == NULL){
			printf("position not found\n");
			return head;
		}
		len++;
		cur_node = cur_node->next;
			
	}
		cur_node->next = (cur_node->next)-> next;
		(cur_node->next)->prev=cur_node;
                                                            
    }                                                                               
    printf("node created\n");                                                   
    return head;                                                                
}                                                 
