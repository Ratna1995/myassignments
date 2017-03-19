#include"header.h"

void dequeue()
{
//	int ele;	// stores the dequeued element
	if(rear == -1 || front == rear) //check the rear and front position
		printf("QUEUE IS EMPTY\n");	//if true, prints queue is empty
	else { 
		++front;	//increments front by 1
 		printf("the deleted element is:%d\n",queue[front]);	// stores the value of deleted element in ele
	}
} 
