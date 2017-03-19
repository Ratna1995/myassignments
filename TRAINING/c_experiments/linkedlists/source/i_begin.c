#include"header.h"

void i_begin()
{
	sl *temp = NULL;
	char *buff = NULL;
	int ele;
	
	if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }  
	printf("Enter a element:");                                                   
    if(NULL == fgets(buff,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    ele = atoi(buff);                                                                                                                                
	if(ele == 0) {
		printf("\ncheck your input");
		return;
	}

	if(head == NULL) {
		head = create_node(ele,NULL);
		head -> link = head;
		size++;
	} else {
		temp = head;
		head = create_node(ele,temp);
		size++;
	}
}
		
