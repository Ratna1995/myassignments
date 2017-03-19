#include"header.h"

void selection_sort(int arr[], int n)
{
	
	int i, j;	//indexes
	int temp;	//to hold a temporary value
	int min;	//to hold a mimimum value 

	/*finds the minimum value and swaps it with the 1st element*/
	for(i = 0; i < n; i++) {
		min = i;
		for(j = i; j < n - 1; j++) {
			if(arr[min] > arr[j+1] ) {
				min = j + 1;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	printf("\n");	
	/*prints the sorted array*/
	printf("the sorted array is:\n");
	for(i = 0; i < n; i++)
		printf("%d\t", arr[i]);
}
