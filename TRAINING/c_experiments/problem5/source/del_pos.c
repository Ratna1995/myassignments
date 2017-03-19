#include"header.h"
st del_pos(st head, int pos) 
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//previous node
    int count = 1;//iteration                                                  
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory                                                                                                             
    cur_node = head;     
                                                        
    if(pos == 1){//insert at 1st position                                                             
          head=cur_node->next;
	  head->prev=NULL;
     }
                                                                                
       else                                                                     
    {                                                                                                                                     
        while(count != pos){//traverse till position
		if(cur_node->next == NULL){
			printf("position not found\n");
			return head;
		}
  
		  new_node=cur_node;                                         
	          cur_node=cur_node->next;
		  count++;
	}
	new_node->next=cur_node->next;
	(cur_node->next)->prev=new_node;
       	cur_node->next=NULL;
	cur_node->prev=NULL;
    }                                                                           
    free(cur_node);//free node                                                                           
    printf("node deleted\n");                                                   
    return head;                                                                
}                                                                               
     
