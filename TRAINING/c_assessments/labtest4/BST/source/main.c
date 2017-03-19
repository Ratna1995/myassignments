#include"header.h"

struct node *root = NULL;

int main()
{
	char *ch; 	//choose a case 
	int n;		// number
	
	/* allocates memory for ch*/
	if(NULL == (ch = (char *) malloc (100 * sizeof(char)))) {
		printf("malloc failed");
		exit(0);
	}
	
	do{
		printf("enter your choice\n 1.insert\n2.display\n3.delete\n4.exit \n");
		if(NULL == (fgets(ch, 10, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		if(!(n = atoint(ch))){	//alphabet to integer conversion
			printf("check your input\n");
			exit(0);
		}

		switch(n) 
		{
			case 1:
				insert(val);//function call for inserting nodes
				break;
			case 2:	
				display(root);//function call to display
				break;
			case 3:
				deletion(val);
				break;
			case 4:
				exit(0);
			default: 
				printf("enter valid input\n");
				break;
		}
	} while(1);
	
}
		
		
