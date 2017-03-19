//worst case : O(n^2)
//best case : O(n)
#include"header.h"

int main()
{
	/* declaration of array*/
	char insert_arr[MAX];
	int insertion_array[MAX];

	/* number of elements in the array*/
	char n[10];
	int num;

	int i;	//index

	/*enter the number of elements to be entered in the array*/
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
		if(NULL == (fgets(insert_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(insertion_array[i] = atoint(insert_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}

	/* prints the unsorted elements*/	
	printf("elements before sorting:\n");
	for(i = 0 ;i < num; i++)
		printf("%d\t", insertion_array[i]);

	insertion_sort(insertion_array, num);//function call for insertion sort
	
	return 0;
}
	
