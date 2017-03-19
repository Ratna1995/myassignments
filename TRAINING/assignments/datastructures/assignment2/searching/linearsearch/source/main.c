#include"header.h"

int main()
{
	/* declaration of an array*/                                                
    char linear_array[MAX];                                                       
    int lin_arr[MAX];	

	/* to enter the number of elements in an array*/
	int n;
	char num[10]; 

	int result;	// stores the returned result
	int i;	//index
	
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
		if(NULL == (fgets(linear_array, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(lin_arr[i] = atoint(linear_array))) {
			printf("check your input\n");
			exit(0);
		}
	}
	
	result = linear_search(lin_arr, n);//function call for searching an element
	
	if(result == 1)
		printf("element found");
	else
		printf("element not found");
	
	return 0;
}
