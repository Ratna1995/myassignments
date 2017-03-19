#include<stdio.h>
#define MAX 64
int main()
{
	int num;
	int i;
	int a[MAX];
	
	for(i = 1; i <= 50; i++)
		a[i] = 1;
	for(num = 2; num <= 50; num++){
		for(i =1; i <= 50; i=i*2){
			if(i % num == 0){
				if(a[i] == 0){
					a[i] = 1;
				}
				else {
					a[i] = 0;
				}
			}	
		}
	}

	for(i = 1; i <= 50; i++)
		printf("a[%d] = %d\n", i, a[i]);
	for(i = 1; i<= 50; i++){
		if(a[i] == 1)
			printf("%d door is open\n", i);
	}

	return 0;
}

