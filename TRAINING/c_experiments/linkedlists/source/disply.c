#include"header.h"

void display()
{
	sl *curr;
	int i = size;
	
	if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    } 

	if(head == NULL) {                                                          
        printf("linked list not created");                                                                        
        return;                                                                 
    } 	
	curr = head;
	while(i)
	{
		printf("%d\t",(curr -> data));
		curr = curr -> link;
		i--;
	}
}   
