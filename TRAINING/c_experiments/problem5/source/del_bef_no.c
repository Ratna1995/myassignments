#include"header.h"

st del_bef_no(st head, int num)
{
	st cur_node = NULL;//temporary node
	st new_node = NULL;//previous node
	cur_node = MEM;//allocate memory
	new_node = MEM;//allocate memory
	
	cur_node=head;

	if(head == NULL)//empty condition
		printf("list empty\n");

	else
	{
		//traverse till number
		while(cur_node->next != NULL) {
			
			if((cur_node->next)->data==num)
				break;
			new_node=cur_node;
			cur_node=cur_node->next;
		}
		if(cur_node->next == NULL){
			printf("number not found\n");
			return head;
		}
		new_node->next = cur_node->next;
		(cur_node->next)->prev = new_node;
		cur_node->next = NULL;
		cur_node->next = NULL;
	}

	free(cur_node);
	printf("node deleted\n");
	return head;
}

