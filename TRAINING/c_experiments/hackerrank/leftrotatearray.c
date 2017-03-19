#include<stdio.h>

int main()
{
	int i, j;
	int d;
	int n;
	int temp;
	int arr[10];

	printf("enter the number of elements in an array and the number of rotations:\n");
	scanf("%d %d", &n, &d);

	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for(i = 0;i < d; i++){
			temp = arr[0];
		for(j = 0; j < n; j++){
			arr[j] = arr[j+1];
		}
		arr[n-1] = temp;
	}

	for(i = 0; i < n; i++)
		printf("%d\t", arr[i]);

	return 0;
}
