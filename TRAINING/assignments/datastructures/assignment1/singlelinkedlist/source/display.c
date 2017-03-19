#include"header.h"

void display()
{
	struct node *current = NULL;
	
	current = (struct node *) malloc (sizeof(struct node));
	current = head;
	if (head == NULL)
		printf("******no list present******\n");
	else {
		printf("elements in the list are:\n");	
		while((current) != NULL) {
			printf("%d\t", current -> data);
			current = current -> next;
		}
	}
	printf("\n");
}
