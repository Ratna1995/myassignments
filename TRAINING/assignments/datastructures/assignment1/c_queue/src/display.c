#include "header.h"                                                             
                                                                                
void display()                                                                  
{                                                                               
    int i = front;	//index initialized to front
	int temp;	//temporary variable
	temp = count;//count is assigned to temp
	                                                                      
    if(count == 0) {
		printf("the queue is empty\n");
	} 
	else {      
		/*displays the elements int the queue*/
   		printf("the elements in the queue are\n");                                  
    	while(temp) {   
			if(i == MAX - 1)
				i = -1;
			i ++;                                     
        	printf("%d\t",queue[i]); 
			temp --;  
		}                                             
        	printf("\n");                                                           
	}
}   
