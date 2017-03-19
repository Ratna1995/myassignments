#include"header.h"

void display2(st head)
{
	st cur_node=NULL;

	cur_node=head;
	
	if(head == NULL)//empty condition
		printf("empty\n");
	
	else{//traverse and print

		while(cur_node->next != NULL)
			cur_node = cur_node->next;

		while(cur_node != NULL){
			printf("%d=>\t",cur_node->data);
			cur_node=cur_node->prev;
		}
	}
	printf("\n");

}


