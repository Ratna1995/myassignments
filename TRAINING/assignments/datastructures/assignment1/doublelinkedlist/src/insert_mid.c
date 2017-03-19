#include "header.h" //include header

void insert_mid(dll *head) //function to insert at end
{	
	int pos;
	char *position = NULL;
	dll *temp = NULL; //temporary pointer to traverse the list
	/*if(NULL == (temp = dms(temp))){ //dynamic memory allocation of temp
		printf("malloc failed\n");
		exit(0);
	}*/

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

//	int element; //element the user asked to insert
	
	int i = 0;
	temp = head; //assigning head to temp
	
	printf("enter the position\n");
	if(NULL == (fgets(position, MAX, stdin))){
		perror("failed\n");
		exit(0);
	}
	pos = atoint(position);

	printf("enter the element\n"); 
	if(NULL == (str = get(str))){ //getting input from user
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
/*	if((element = atoint(str)) <0){ //converting string to integer
		printf("invalid input\n");
		exit(0);
	}*/
	
	if ( head == NULL)
		printf("no list\n");
	else{
		while(temp -> next != NULL){
			if((pos-1) != i)
				temp = temp -> next;
			else
				break;
			i++;
		}
		new -> data = str;
		new -> next = temp -> next;
		new -> previous = temp;
		temp -> next = new;
		(temp -> next)-> previous = new;
	}
}
	
