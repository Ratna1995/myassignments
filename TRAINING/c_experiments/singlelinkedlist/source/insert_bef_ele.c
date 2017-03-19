#include"header.h"

void insert_bef_node(int val)
{
	int i = 1;//index
	/*number before which the node has to be inserted*/
	char *n = NULL;                                                                 
    int num;   
	/*current is pointer variable of type struct node*/
	struct node *current = NULL;                                                                 
                                                                                
    printf("enter the number before which the node has to be inserted:\n");          
    if(NULL == (fgets(n, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(!(num = atoint(n))) {
		printf("invalid input\n");
		return;
	}

	if(head == NULL)
		printf("******list is empty******\n");
	else {
		current = head;
		while(current -> next != NULL) {
			if((current -> data) == num)
				break;
			else
				current = current -> next;
			i++;
		}
		if(current -> data != num)
			printf("***number is not found in the list***\n");
   		else                                                                            
    		position(i, val);//function call to insert a node before a number
		}
}
