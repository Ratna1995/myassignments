//bestcase O(n^2)
//worstcase O(n^2)
#include"header.h"

int main()
{
	/* declaration of array*/	
	char selection_arr[MAX];
	int selection_array[MAX];
	
	/* number of elements in the array*/
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
		if(NULL == (fgets(selection_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(selection_array[i] = atoint(selection_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}

	/*prints the elements entered on stdout*/	
	printf("elements before sorting:\n");
	for(i = 0 ;i < num; i++)
		printf("%d\t", selection_array[i]);

	selection_sort(selection_array, num);//function call for selection sort
	
	return 0;
}
