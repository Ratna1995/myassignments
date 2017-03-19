#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int i;
	
	printf("enter two numbers\n");
	scanf("%d%d", &num1, &num2);
	
	for(i = 31; i >= 0; i--) {
		if((1 << i) & num1 != (1 << i) & num2) {
			if((1 << i) & num1){ 
				printf("%d is greater\n", num1);
				break;	
			}
			else{
				printf("%d is greater\n", num2);
				break;
			}
		}
	}
}
