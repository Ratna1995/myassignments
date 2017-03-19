#include"header.h"

void delete_end()
{
	/*current is pointer variable of type struct node*/
	struct node *current = NULL;
	
	current = head;
	
	/*deletes a node at the end of the list*/
	if(head == NULL)
		printf("no list\n");
	else if(current -> next != NULL){	
		while((current -> next)->next != NULL) {
			current = current -> next;
		}
		current -> next = NULL;
	}
	else 
		head = current -> next;;
}
