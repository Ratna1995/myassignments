#include "header.h"

dll *insert_begin(dll *head) //insert at the begining
{
	dll *temp; //temporary pointer of type dll
	  
	dll *new; //pointer to create new node

	char *str; //string to take input from user

	//int element; //element obtained from input

	if(NULL == (str = dmc(str))){ //dynamic memory allocation of string
		printf("malloc failed\n");
		exit(0);
	}
	
	if(NULL == (temp = dms(temp))){ //memory allocation of structure pointer
		printf("malloc failed\n");
		exit(0);
	}
	
	if(NULL == (new = dms(new))){ //dynamic memory allocation of pointer
		printf("malloc failed\n");
		exit(0);
	}
	
	temp = head; //storing head in temp
	
	printf("enter the element\n");
	if(NULL == (str = get(str))){ //getting input by fgets
		perror("fgets failed\n");
		exit(EXIT_FAILURE);
	}
/*	if((element = atoint(str))<0){//converting to integer from string
		printf("invalid input\n");
		exit(0);
	}*/
	
	if (temp == NULL ) { // if the list is empty add first node
		
		new -> data = str;
		new -> previous = NULL;
		new -> next = NULL;
		head = new;
		
	}
	
	else { //if the list is not empty

		new -> data = str;
		new -> previous = NULL;
		new -> next = temp;
		head -> previous = new;
		head = new;
		
	}
	return head; //return head to the called function
} 		
