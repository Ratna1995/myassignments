#include"header.h"

void insert_end(int val)
{
	/* current and temp variables of struct node type*/
	struct node *current = NULL;
	struct node *temp = NULL;
	
	/* allocates memory for temp*/
	if(NULL == (temp = (struct node *) malloc (MAX * sizeof(struct node)))) {
		printf("malloc failed");
		exit(0);
	}

	/*inserts node at the end of the list*/
	if(head == NULL)
		printf("******list is empty******\n");
	else {
		current = head;
		while((current -> next) != NULL) {
			current = current -> next;
		}
		current -> next = temp;
		temp -> data = val;
		temp -> next = NULL;
	}
}
