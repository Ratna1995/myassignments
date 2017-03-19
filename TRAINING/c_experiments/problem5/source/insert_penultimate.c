#include"header.h"

st insert_penultimate(st head)
{
	st cur_node = NULL;//temporary node
	st new_node = NULL;//new node
	cur_node = MEM;//allocate memory
	new_node = MEM;//allocate memory
	char len[10];//character array

	cur_node = head;
	printf("enter data to be inserted\n");
	if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
	new_node->data = validate( len );
	while(cur_node != NULL){//traverse till the end
		if((cur_node->next)->next == NULL)
			break;
		cur_node = cur_node->next;
		
	}
	new_node->next = cur_node->next;
	new_node->prev = cur_node;
	cur_node->next = new_node;
	printf("node created\n");
	
	return head;
}

