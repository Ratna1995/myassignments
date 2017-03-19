#include<stdio.h>
#include<stdlib.h>
void transpose(int **p, int m);

int main()
{
	int m;
	int a[2][2];
	int i,j;

	printf("enter the size of the matrix:\n");
	scanf("%d", &m);

	printf("enter the members of the matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
		scanf("%d", &a[i][j]);
	}
	
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<m;j++)
		printf("%d\t",a[i][j]);
	}
	printf("a = %p\n", &a);
	printf("a=%p\n",a);

	transpose(&a,m);

	return 0;
}

void transpose(int **p, int m)
{
	int i,j;


	printf("transpose of a matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
			printf("%d\t", *((p+i)+j*m));
		printf("\n");
	}
}

