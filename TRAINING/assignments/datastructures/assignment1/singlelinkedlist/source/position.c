#include"header.h"

void position(int pos, int val)
{
	int i = 1;	//index
	int count = 1;	//count
	/*current, temp and position are pointer variables of struct node type*/
	struct node *current = NULL;
	struct node *temp = NULL;
	struct node *position = head;
	
	/*inserts a node at given position in the list*/
	if(head == NULL){
		printf("******list is empty******\n");
		return;
	}
	else {
		while(position -> next != NULL) {
			++count;
			position = position -> next;
		}
	
		//allocates memory for temp
		if(NULL == (temp = (struct node *) malloc (sizeof(struct node)))) {
			printf("malloc failed");
			exit(0);
		}

		if((pos == 0) || (pos > (count + 1))){ 
			printf("******position out of range******\n");
			return;
		}
		if(pos == 1) {
			temp -> data = val;                                                     
			temp -> next =head;
			head = temp;
		}
		else {
			current = head;
			while(current -> next != NULL) {
				if((pos - 1) != i) 
					current = current -> next;
				else
					break;
				i++;
			}
			temp -> data = val;	
			temp -> next = current -> next;
			current -> next = temp;
		}
	}
}
