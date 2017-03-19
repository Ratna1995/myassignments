#include"header.h"

void push(int element)
{
	if(top >= MAX) //if top of stack is greater than MAX 
		printf("STACK IS FULL\n");	//if greater pritn stack is full
	else {
		stack[++top] = element;	//if not, element will be pushed to stack
		printf("element entered successfully\n"); 
	}
}
