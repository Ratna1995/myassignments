#include "header.h"

void display(dll *head)
{
	dll *temp;
	
	if(NULL == (temp = dms(temp))){
		printf("malloc failed\n");
		exit(0);
	}
	
	temp = head;

	if( temp == NULL )
	printf("no elements in list\n");
	
	else {
		printf("the elements in list are\n");
	
	while ( temp != NULL ){
		printf("%s\t",temp -> data );
		temp = temp -> next;
	}
	}
	
//	printf("\n");
}
