#include"header.h"

void insert_begin(int val)
{         
    struct node *temp = NULL;//stores the address of node                                                
                                                                                
    /*allocates memory for element*/
	if(NULL == (temp = (struct node *) malloc (sizeof(struct node)))) {         
        printf("can't allocate memory\n");                                      
        exit(0);                                                                
    }      
	
	/*inserts a node at the beginning*/
	if(head == NULL) {
		head = temp;
		temp -> data = val;
		temp -> next = NULL;
	}
	else {
		temp -> data = val;
		temp -> next =head;
		head = temp;
	}
}
