#include<stdio.h>
extern int showbit(int num);

#if 0
/*1. power of 2 */

int main()
{
	int num; 					//number to be given
	int i; 						//index value;
	int count = 0; 				// to count the number of bits
	
	printf(" Enter a number to be checked for a power of 2\n");
	scanf("%d", &num);
	
	printf("the number in binary\n");
	showbit(num);				//displays the number in binary bits
	
	for(i = 0; i <= 31; i++) {
		if((num >> i) & 1) {	//check if the bit is 1
			count ++;			// if the bit is 1, count is incremented by 1
		}
	}
	
	if (count == 1) 			//checks if a number has only one set bit
		printf("\n %d is a power of 2\n", num);
	else 
		printf("\n %d is not a power of 2\n", num);
	
	
	return 0;
}
#endif

#if 0
/* 2. count the number of set bits in a number */

int main()
{
	int num; 					//number to be given
	int i;						//index number
	int count = 0; 				//count the number of bits

	printf("Enter a number to be checked for number of set bits :\n");
	scanf("%d", &num);
	
	printf("the given number in binary:\n");
	showbit(num);				//displays the number in 32 binary bits

	for(i = 0; i <= 31; i++) {
		if((num >> i) & 1)		// checks if the bit is 1
			count ++;			// if bit is 1, count is incremented by 1
	}
	
	printf("\n number of setbits in a given number: %d\n", count);

	return 0;
}
#endif

#if 1

/* 3. to multiply a number by 4 */

int main()
{
	int num, num1; 				// numbers to be given
	
	printf("enter a number that is to be multiplied by 4\n");
	scanf("%d", &num);

	printf(" the given number in binary:\n");
	showbit(num);				//displays the number in binary bits
	
	num1 = num << 2; //if a number is left shifted , it is multiplied by 4
	
	printf("\n%d multiplied by 4 is %d\n", num, num1);
	
	printf("\nbinary representation of %d\n",num1);
	showbit(num1);				// displays the number in binary

	return 0;
}
#endif
