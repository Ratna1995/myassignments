#include "header.h"

void deletion(ST **head)
{

	ST *temp = NULL;

	temp = *head;

	if(temp == NULL) {
		printf("list is empty \n");
		return;
	}

	if(nodes == 1) 
		*head = NULL;
	else
		*head = temp->next;

	free(temp);
	nodes--;
}
		
