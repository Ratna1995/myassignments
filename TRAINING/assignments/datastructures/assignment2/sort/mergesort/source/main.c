//worst case : O(nlogn)
//best case : O(nlogn)
#include"header.h"

int main()
{
	/* declaration of array*/
	char merge_arr[MAX];
	int merge_array[MAX];
	
	/* number of elements to be entered into the array*/
	char num[10];
	int n;
	int i;//index
	
	/* enter the number of elements in an array*/
	printf("enter the number of elements in an array:\n");
	if(NULL == (fgets(num, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if(!(n = atoint(num))) {
		printf("check your input\n");
		exit(0);
	}
	
	/*enter the elements in an array*/
	printf("enter the elements in an array:\n");
	for(i = 0; i < n; i++) {
		if(NULL == (fgets(merge_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(merge_array[i] = atoint(merge_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}
	
	/* prints the unsorted elements*/	
	printf("elements before sorting:\n");
	for(i = 0 ;i < n; i++)
		printf("%d\t", merge_array[i]);

	merge_sort(merge_array,0, n-1);	//function call for merge sort
	
	printf("\n");
	printf("the sorted list :\n");
	for(i = 0; i<n ;i++)
		printf("%d\t", merge_array[i]);
	printf("\n");
	
	return 0;
}
