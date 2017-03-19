#include"header.h"

void display_rev(dll *head)
{
	if(head == NULL)
		printf("no list\n");
	else{
		display_rev(head -> next);
		printf("%s\t",head -> data);
	}
}
