#include"header.h"

int binary_search(int arr[], int n)
{
	/* element to be searched*/	
	char ele[10];
	int element;
	
	int low;	//lowest position in array
	int high;	//highest position in array
	int mid;	//middle position in array
	
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

	low = 0;	//low assigned to 0
	high = n - 1;	//high assigned to n-1

	/* checks if the element is in array*/
	while(low <= high) {
		mid = (low + high)/2;
		if(element == arr[mid]) 
			return 1;
		else if(element > arr[mid])
				low = mid + 1;
		else if(element  < arr[mid])
				high = mid - 1;
	}
}
