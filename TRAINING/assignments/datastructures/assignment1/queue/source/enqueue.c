#include"header.h"

void enqueue(int element)
{
	if(rear >= MAX)	//check the value of rear is greater than MAX 
		printf("QUEUE IS FULL\n"); //if greater, prints queue is full
	else {
		queue[++rear] = element; //if not, enter element into queue
	}
}
