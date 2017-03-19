#include"header.h"

int main()
{
	int n; 	//enter a number to select a case push, pop, display
	char *ch;	//variable used to enter a number using fgets
	int element;	//element to be pushed into the stack
	char *buff;	//element is stored in buffer
	top = -1;	// tells where the element has to be inserted

	/* allocates memory for ch*/
	if(NULL == (ch = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
	
	/*allocates memory for buff*/
	if(NULL == (buff = (char *) malloc (100 * sizeof(char)))) {
		perror("malloc failed");
		exit(0);
	}

	do{
		printf("enter\n 1.push\n 2.pop\n 3.display\n 4.exit \n");
		if(NULL == (fgets(ch, 10, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		n = atoint(ch);	//convert character to integer

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
				push(element);	//function call for pushing element into stack
				break;
			case 2: 
				pop();	//function call for popping element from stack
				break;
			case 3: 
				display();	//displays elements of the stack
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
				
	
