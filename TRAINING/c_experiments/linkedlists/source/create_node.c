#include"header.h"
	
sl *create_node(int ele, sl *temp)
{
	sl *curr = NULL;
	
	if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }   

	curr -> data = ele;
	curr -> link = temp;
	return curr;
}
