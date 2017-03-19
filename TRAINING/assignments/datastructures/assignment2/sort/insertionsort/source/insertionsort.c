#include"header.h"

void insertion_sort(int arr[], int n)
{
	int i, j;	//indexes
	int temp;	//hold a temporary value
	
/*checks if the element next to it and sorted elements are greater than it*/
	for( i = 0; i < n; i++){
		j = i + 1;
		while(j > 0 && arr[j - 1] > arr[j]) {
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}

	printf("\n");
	/* the sorted list */
	printf("array after sorting:\n");
	for(i = 0; i < n; i++)
		printf("%d\t", arr[i]);
}
