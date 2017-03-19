#include"header.h"

st del_at_end(st head)
{
	st cur_node = NULL;//temporary node
	st new_node = NULL;//preious node
	cur_node = MEM;//allocate memory
	new_node = MEM;//allocate memory

	if(head == NULL)//empty condition
		printf("list empty");

	else
	{//traverse till end
		cur_node = head;
		while(cur_node->next != NULL) {
			new_node = cur_node;
			cur_node = cur_node->next;
			
		}
		new_node->next = NULL;
		cur_node->prev = NULL;
	}
	free(cur_node);
	printf("node deleted\n");
	return head;
}


