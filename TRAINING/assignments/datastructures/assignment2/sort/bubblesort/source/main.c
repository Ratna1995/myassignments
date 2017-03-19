//bestcase = O(n)
//worstcase = O(n^2)
#include"header.h"

int main()
{
	/* declaration of array*/
	char bubble_arr[MAX];
	int bubble_array[MAX];
	
	/*number of elements to be entered in array*/
	char n[10];
	int num;
	
	//int result[MAX];
	int i;

	/* enter the number of the elements to entered*/
	printf("enter the number of elements to be entered in the array\n");
	if(NULL == (fgets(n, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	/*checks if the entered data is an integer*/
	if(!(num = atoint(n))) {
		printf("check your input\n");
		exit(0);
	}

	/*enters the elements in an array*/
	printf("enter the elements in an array\n");
	for(i = 0; i < num; i++) {
		if(NULL == (fgets(bubble_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(bubble_array[i] = atoint(bubble_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}

	/* prints the unsorted elements*/	
	printf("elements before sorting:\n");
	for(i = 0 ;i < num; i++)
		printf("%d\t", bubble_array[i]);

	bubble_sort(bubble_array, num);//function call for bubble sort
	
	return 0;
}
