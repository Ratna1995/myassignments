#include "header.h" //include header

dll *insert_end(dll *head) //function to insert at end
{
	dll *temp = NULL; //temporary pointer to traverse the list
	if(NULL == (temp = dms(temp))){ //dynamic memory allocation of temp
		printf("malloc failed\n");
		exit(0);
	}
	
	dll *new = NULL; //pointer of type dll to create new node
	if(NULL == (new = dms(new))){ //dynamic memory allocation of new
		printf("malloc failed\n");
		exit(0);
	}
	
	char *str = NULL; //string to get input from user 
	if(NULL == (str = dmc(str))){ //dynamic memory allocation of str
		printf("malloc failed\n");
		exit(0);
	}

	//int element; //element the user asked to insert

	temp = head; //assigning head to temp
	
	printf("enter the element\n"); 
	if(NULL == (str = get(str))){ //getting input from user
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
/*	if((element = atoint(str))){ //converting string to integer
		printf("invalid input\n");
		exit(0);
	}*/
	
	if ( temp == NULL ) { //if the list is empty insert at begining
		new -> data = str;
		new -> next = NULL;
		new -> previous = NULL;
		head = new;
		return head;
	}
		
		
	while ( temp -> next != NULL ) { //if the list is not empty insert at end
		temp = temp -> next;
	}
	
	new -> data = str;
	new -> next = NULL;
	new -> previous = temp;
	temp -> next = new;

	return head;
}
	
