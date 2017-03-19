#include"header.h"

sl* d_begin()
{
	sl *current = head;                                                                   
                                                                                
   // if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
     //   perror("MAlloc fails");                                                 
      //  exit(EXIT_FAILURE);                                                     
    //}  
	sl *highest_node = NULL;
	if(head == NULL)
		printf("no list\n");
	else{
		while(current -> link != head)
			current = current -> link;
		highest_node =current;
		head = head -> link;
		highest_node -> link = head;
		free(current);
	}
	return head;
}
