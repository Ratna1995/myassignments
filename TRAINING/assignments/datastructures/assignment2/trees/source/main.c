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
		printf("enter your choice\n 1.insert \n 2.inorder \n 3.preorder"
				"\n 4.postorder \n 5.delete \n 6.exit \n");
		if(NULL == (fgets(ch, 10, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		if(!(n = atoint(ch))){	//convert character to integer
			printf("check your input\n");
			exit(0);
		}

		switch(n) 
		{
			case 1:
				create_node(val);
				break;
			case 2:	
				inorder(root);
				break;
			case 3:
 				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				deletion(val);
				break;
			case 6:
				exit(0);
			case 7: 
				printf("enter valid input\n");
		}
	} while(1);
	
}
		
		
