#include"header.h"

st del_aft_no(st head,int num)
{
	st cur_node = NULL;//temporary node
	cur_node = MEM;//allocate memory
	
	cur_node=head;
	if(head == NULL)
		printf("list empty\n");

	else
	{
	
		while(cur_node != NULL) {
			if(cur_node->data==num)
				break;
			cur_node=cur_node->next;
		}
		if(cur_node->next == NULL){
			printf("number not found\n");
			return head;
		}
		cur_node->next=(cur_node->next)->next;
		(cur_node->next)->prev=cur_node;
	}
	printf("node deleted\n");
	return head;
}
