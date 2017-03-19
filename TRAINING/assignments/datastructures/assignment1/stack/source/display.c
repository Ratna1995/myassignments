#include"header.h"

void display()
{
	int i;	// index
	if(top == -1) 
		printf("stack is empty\n");
	else
		for(i = 0; i <= top; i++) {	
			printf("stack[%d]:%d\n", i, stack[i]); //prints elements of stack
	}
}
