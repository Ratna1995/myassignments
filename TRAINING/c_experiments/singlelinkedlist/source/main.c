#include"header.h"

int main()
{
	char *ch; 	//choose a case 
	int n;		// number
	head = NULL;

	/* allocates memory for ch*/
	if(NULL == (ch = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
	
	do{
		printf("enter your choice\n1.insert\n2.delete\n3.display\n4.exit\n");
		if(NULL == (fgets(ch, 10, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		if(!(n = atoint(ch))) {	//convert character to integer
			printf("invalid input\n");
			exit(0);
		}

		switch(n) 
		{
			case 1:
				insert();//function call to create a node
				break;	
			case 2: 
				delete();	//function call to delete a node
				break;
			case 3:
				display();	//function call to display the list
				break;
			case 4: 
				exit(0);
		}
	}while(n < 4);
	
	return 0;
}
