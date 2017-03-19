#include"header.h"

st del_at_beg(st head)
{
	st cur_node = NULL;//temporary node
	cur_node = MEM;//allocate memory

	if(head == NULL)//empty condition
		printf("list empty\n");

	else
	{//delete at end
		cur_node=head;
		head=cur_node->next;
		cur_node->next=NULL;
		head->prev=NULL;
	}
	free(cur_node);//free pointer
	printf("node deleted\n");
	return head;
}


