#include "header.h"                                                             
                                                                                
int dequeue()                                                                   
{                                                                               
    int element;	//element that is deleted

	/*deletes the element from the queue*/
    if (count == 0)                                                       
        printf("the queue is empty\n");                                         
    else {         
		if (front == MAX-1)
			front = -1;                                                             
        front = front + 1;                                                      
        element = queue[front];
		count --;                                                 
    }                                                                           
    return element;                                                             
}    
