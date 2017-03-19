#include "header.h"

void delete_mid(dll *head)
{
	dll *current = head;
	/*if(NULL == (temp = dms(temp))){
		printf("malloc failed\n");
		exit(0);
	}
	
	dll *temp2 = NULL;
	if(NULL == (temp2 = dms(temp2))){
		printf("malloc failed\n");
		exit(0);*/
	int pos;
	int count = 1;

	int i =1;

	while(current -> next != NULL){
		current = current -> next;
		count ++;
	}
	pos = (count/2)+1;

	current = head;
	while(current -> next !=NULL){
		if((pos - 1) != i)
			current = current -> next;
		else
			break;
		i++;
	}
	current -> next = (current -> next)->next;
	(current -> next)->previous = current;
	
} 
		

