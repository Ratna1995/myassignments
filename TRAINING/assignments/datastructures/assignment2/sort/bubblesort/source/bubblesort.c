#include"header.h"

void bubble_sort(int arr[], int n)
{
	int i, j;	//indexes
	int temp;	//holds a temporary value

	/*checks if the element next to it is smaller or greater*/
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n - i - 1; j++) {
			if(arr[j] > arr[j+1] ) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n");	
	/*the sorted array*/
	printf("the sorted array is:\n");
	for(i = 0; i < n; i++)
		printf("%d\t", arr[i]);
} 
