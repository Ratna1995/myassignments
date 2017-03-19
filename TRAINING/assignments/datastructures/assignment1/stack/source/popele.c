#include"header.h"

void pop()
{
	if(top <= -1) //check if top is equal to -1
		printf("stack is empty");	//if true, prints stack is empty
	else { 
 		printf("the deleted element: %d\n",stack[top--]);	/* the element in top is decremented by 1 and stored in ele*/
	}
} 
