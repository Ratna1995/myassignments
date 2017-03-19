#include"header.h"

st insert_bef_no(st head, int num)
{
	st cur_node = NULL;//temporary node
	st new_node = NULL;//new node
	cur_node = MEM;//allocate memory
	new_node = MEM;//allocate memory
	char len[10];//char array

	printf("enter the data to be inserted\n");
	if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    	new_node->data = validate( len );          

	cur_node = head;
	while(cur_node->next != NULL) {//traverse till number
	if((cur_node->next)->data == num)
		break;
		cur_node = cur_node->next;
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

