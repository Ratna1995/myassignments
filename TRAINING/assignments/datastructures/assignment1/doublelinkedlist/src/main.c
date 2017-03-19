#include "header.h" 

int main() 
{
	dll *head = NULL; //starting node address

	char *str = NULL; //string to get input from user for option
	
	int option; //option variable to get option from user

	if(NULL == (str = dmc(str))) { //dynamic memory allocation
		printf("can't allocate memory\n");
		exit(0);
	}

	while (1) {
		printf("enter the option\n");
		printf("enter a option to insert a element into the list\n");
		printf("1.insert at begining\n");
		printf("2.insert at end\n");
		printf("3.insert at middle\n");
		printf("enter a option to delete a element from the list\n");
		printf("4.delete at begining\n");                                           
		printf("5.delete at end\n");                                                
		printf("6.delete at middle\n");  
		printf("7.display\n");
		printf("8.reverse display\n");

		if(NULL == (str = get(str))){ //get input from user   
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		if((option = atoint(str))<0){ //converting from string to integer
			printf("invalid input\n");
			exit(0);
		}

		switch (option) {

			case 1:
				head = insert_begin(head);
				break;

			case 2:
				head = insert_end(head);
				break;

			case 3:
				insert_mid(head);
				break;

			case 4: 
				if ( head == NULL ) {
					printf("the list is empty\n");
					break;
				}

				head = delete_begin(head);
				break;

			case 5:
				if ( head == NULL ) {
					printf("the list is empty\n");
					break;
				}

				head = delete_end(head);
				break;

			case 6:
				if ( head == NULL ) {
					printf("the list is empty\n");
					break;
				}

				delete_mid(head);
				break;


			case 7:
				display(head);
				break;
			case 8:
				display_rev(head);
				break;
/*			case 9: if(head == NULL){
						printf("list empty\n");
						break;
					}
					insert_pos(head);
					break;*/
				
			default :
				printf("enter correct option\n");

		}
	}

	return 0;
}


