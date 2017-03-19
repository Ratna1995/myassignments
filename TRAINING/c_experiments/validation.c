#include<stdio.h>
extern void showbit(int num);
int main()
{
	int num;
	
	printf("enter a number\n");
	scanf("%d", &num);
	
	if(isdigit(num)){
		
		showbit(num);
	}
	else {
		printf("number is not decimal, enter a decimal number\n");
	}
	return 0;
}
