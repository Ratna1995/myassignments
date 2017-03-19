#include"header.h"

int main()
{
	int n;	//enter a number to choose enqueue, dequeue and display operations
	char *ch;	//to enter an using fgets
	int element;	//a value to enter into queue
	char *buff;	//value stored in buff
//	int ele;	//stores the dequeued value
	front = -1;	// front end of queue
	rear = -1;	//rear end of queue

	/* allocates memory for ch*/
	if(NULL == (ch = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}

	/*allocates memory for buff */
	if(NULL == (buff = (char *) malloc (100 * sizeof(char)))) {
		perror("malloc failed");
		exit(0);
	}

	do{
	printf("enter\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit \n");
	if(NULL == (fgets(ch, 10, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	n = atoint(ch);	//converts character or string to number

	switch(n) 
	{
		case 1: 
				printf("enter element:\n");
				if(NULL == (fgets(buff, 50, stdin))) {
					perror("fgets failed");
					exit(EXIT_FAILURE);
				}
				if(!(element = atoint(buff))) {
					perror("check your input\n");
					exit(0);
				}
				enqueue(element);	//function call for enqueuing
				break;
		case 2: 
				dequeue();	// function call for dequeuing
				//printf("the dequeued element is :%d\n", ele);
				break;
		case 3: 
				display();	//function call to display the queue
				break;
		case 4:
				exit(0);
		default: 
				printf("enter correct value\n");
				break;
	}
	}while(1);

	
	return 0;
}
				
	
