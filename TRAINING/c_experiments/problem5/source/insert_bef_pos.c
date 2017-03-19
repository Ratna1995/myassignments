#include"header.h"                                                              
st insert_bef_pos(st head,int pos)                                                  
{                                                                               
    st cur_node = NULL;//temporary node                                                           
    st new_node = NULL;//new node                                                           
    int count=1;//iteration                                                                                                                         
    cur_node = MEM;//allocate memory                                                               
    new_node = MEM;//allocate memory                                                               
    char len[10];//char array
                                                                       
    printf("enter the data to be inserted\n");                                  
    if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    new_node->data = validate( len );                                                    
                                                                                
    if(pos == 1 || pos == 2){   //for starting positions                                                              
          	new_node->next = head;
		 new_node->prev = NULL;
                 head = new_node;                                                
        }
                                                                                
       else                                                                     
    {                                                                           
        cur_node = head;//traverse till position                                                          
        while(count != pos-2){
		if(cur_node == NULL){
			printf("not found\n");
			return head;
		}                                                   
          	cur_node = cur_node->next;                                              
          	count++;                                                              
        }                                                                       
                new_node->next = cur_node->next;
		new_node->prev = cur_node;
                cur_node->next = new_node;                                        
    }                                                                           
                                                                                
    printf("node created\n");                                                   
    return head;                                                                
}                                                 
