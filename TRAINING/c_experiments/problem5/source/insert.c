#include"header.h"

st insert(st head)
{
	st cur_node = NULL;//temporary node
	st new_node = NULL;//new node
	cur_node = MEM;//allocate memory 
	new_node = MEM;//allocate memory
	char len[10];//char array
	
	printf("enter the data to be inserted\n");
	if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
    	new_node->data = validate( len );
          
	if(head == NULL){//create the list
		head=new_node;
		new_node->next=NULL;
		new_node->prev=NULL;
	}

	else
	{//traverse till end
		cur_node=head;
		while(cur_node->next != NULL) {
			cur_node=cur_node->next;
		}
		cur_node->next=new_node;
		new_node->next=NULL;
		new_node->prev=cur_node;
	}

	printf("node created\n");
	return head;
}


