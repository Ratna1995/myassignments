#include"header.h"

st del_penultimate(st head)
{
	st cur_node = NULL;//temporary node
	st temp_node = NULL;//new node
	cur_node = MEM;//allocate memory
	temp_node = MEM;//allocate memory
	
	cur_node = head;
	
	if(head == NULL){//empty condition
		printf("list is empty\n");
		return head;
	}
	else{//traverse till last
		while(((cur_node->next)->next)->next != NULL){
			cur_node=cur_node->next;
		}
		cur_node->next=(cur_node->next)->next;
		(cur_node->next)->prev=cur_node;
	}
	printf("\n");
	
	return head;
}

