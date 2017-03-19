#include"header.h"

int linear_search(int arr[], int n)
{
	/*element to be searched*/
	int element;
	char ele[10];

	int i;	//index
	int flag;	//stores the count
	
	/* enter the element to be searched*/
	printf("enter a element to be searched\n");
	if(NULL == (fgets(ele, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
		
	if(!(element = atoint(ele))) {
		printf("check your input\n");
		exit(0);
	}

	/* checks for the element in the array*/
	for(i = 0; i < n; i++) {
		if(element == arr[i])
			flag = 1;
	}
	return flag;
}
