#include "header.h"                                                             
                                                                                
int main()                                                                      
{                                                                               
    int option;	//to enter a option                                                                  
    int element; //element to be inserted                                                               
    char *str;
	count = 0; //counter                                                                 
    front = -1;//front is at -1 position                                                        
    rear = -1; //rear is at -1 position

	/*memory allocation for str*/
    if(NULL == (str = (char *)malloc(sizeof(char)*MAX))){
		printf("can't allocate memory\n");
		exit(0);
	}

    while(option < 4) {                                                                        
	    /*select an option for enqueue, dequeue and display operations*/
		printf("enter 1 for enqueue\nenter 2 for dequeue\n");         
    	printf("enter 3 for display\nenter 4 to exit\n");                                                
                                                                                
		if(NULL == (fgets(str,MAX,stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		if((option = atoi(str)) < 0) {
			printf("invalid input\n");
			return;
		}

		switch(option) {                                                            

			case 1:                                                                 
				printf("enter the element to be enqueued\n");                   
				if(NULL == (fgets(str,MAX,stdin))){
					perror("fgets failed");
					exit(EXIT_FAILURE);
				}
				if((element = atoi(str))<0){
					printf("invalid input\n");
					return;
				}
				/*function call to enqueue an element*/
				enqueue(element);                                               
				break;              

			case 2:                                                                 
				element = dequeue();//function call for dequeuing                         
				printf("the element dequeued is: %d\n",element);                
				break;

			case 3:
				display();//function call to display the elements in the queue               
				break; 

			case 4:       
				return 0;                                                       
			default :                                                               
				printf("entered wrong option\nplease enter correct option\n");  

		} 
	}
	return 0;
}
