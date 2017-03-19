#include"header.h"

void delete_begin()
{
	/*current is pointer variable of type struct node*/
	struct node *current = NULL;
	
	/*deletes a node at the beginning of the list*/
	current = head;
	if(head == NULL)
		printf("no list\n");
	else
		head = current -> next;
}
