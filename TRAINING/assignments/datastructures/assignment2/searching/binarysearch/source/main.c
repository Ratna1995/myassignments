#include"header.h"
 
int main()
{
	/* declaration of array*/
	char bin_arr[MAX];
	int binary_array[MAX];

	/* number of elements to be entered*/
	char num[10];
	int n;
	
	int i;	//index
	int result;	//stores the returned result

	/* enter the number of the elements to entered*/
	printf("enter the number of elements to be entered in the array\n");
	if(NULL == (fgets(num, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	/*checks if the entered data is an integer*/
	if(!(n = atoint(num))) {
		printf("check your input\n");
		exit(0);
	}

	/*enters the elements in an array*/
	printf("enter the elements in an array\n");
	for(i = 0; i < n; i++) {
		if(NULL == (fgets(bin_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(binary_array[i] = atoint(bin_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}

	result = binary_search(binary_array, n);//function call for searching
	
	if(result == 1)
		printf("element found\n");
	else
		printf("element not found\n");
	
	return 0;
}
