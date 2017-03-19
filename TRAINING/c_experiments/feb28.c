#include<stdio.h>
#define MAX 10
int main()
{
	int arr[10] = {2,5,0,1,10,8,6,3,4,7};
	int sum, i;
	int add = 0;
	int diff;

	sum = (MAX * (MAX + 1)) / 2;

	printf("sum = %d\n", sum);

	for(i = 0; i < MAX; i++){
		add = add + arr[i];
	}

	diff = sum - add;

	printf(" the missing number is ;%d\n", diff);

	return 0;
}
