#include"header.h"                                                              
st insert_aft_pos(st head,int pos)                                                  
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//new node                                                           
    int count = 1;//iteration                                                          
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory                                                               
    char len[10];//character array
                                                                           
    printf("enter the data to be inserted\n");                                  
    if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    new_node->data = validate( len );                                                     
        
        cur_node=head;                                                          
        while(count != pos){//traverse till position                                                    
          cur_node = cur_node->next;                                              
          count++;                                                              
        }          
	if(cur_node->next == NULL){
		printf("position not found\n");
		return head;
	}                                                             
        new_node->next = cur_node->next;
	new_node->prev = cur_node;
        cur_node->next = new_node;                                                                                
                                                                                
    printf("node created\n");                                                   
    return head;                                                                
}                    
