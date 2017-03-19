#include<stdio.h>
#define bit_ts(num, pos) ((1 << pos) | num) //macro for setting a bit

extern int showbit(int num);

int main()
{
	int num;
	int pos;
	int bitset;
	
	printf("enter the number\n");
	scanf("%d", &num);
	showbit(num);
	
	printf("\nenter the position\n");
	scanf("%d", &pos);
	
	bitset = bit_ts(num, pos); //macro has been called

	printf("\nafter setting a bit position in a number:\n");
	showbit(bitset);
	return 0;
}
