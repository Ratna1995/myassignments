#include "header.h"

void creat_node(ST **head)
{

	ST *new;

	if((new = (ST *)malloc(sizeof(ST))) == NULL){
		
		printf("malloc is failed to allocate memory\n");
		exit(1);
		}
	
		printf("enter the data \n");
		fgets(new->data, 90, stdin);
		*(new->data + strlen(new->data) - 1) = '\0';
		nodes++;
		new->prev = NULL;
		new->next = *head;
		*head = new;
}
		
