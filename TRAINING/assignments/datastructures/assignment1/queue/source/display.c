#include"header.h"

void display()
{
	int i = 0; 	//index
	if(front == rear) //checks for rear and front positions
		printf("QUEUE IS EMPTY\n");	//if true, prints queue is empty
	else {
		for(i = rear; i > front; i--) {	
			printf("queue[%d]:%d\n", i, queue[i]);//displays queue elements
		}
	}
}
