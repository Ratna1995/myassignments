#include<stdio.h>

extern int showbit(int num);//accessing showbit func from another file

int count_bit_set(int num); //declaration to count number of set bits
int count_bit_clear(int num);// declaration to count number of clear bits

int main()
{
	int num;
	int setcount;//declared to store the value of count_bit_set
	int clearcount;//declared to store the value of count_bit_clear

	printf("enter the number\n");
	scanf("%d", &num);

	showbit(num);	//show the given number in 32bits
	setcount = count_bit_set(num);//function to count set bits
	printf("number of bits set:%d\n", setcount);
	
	clearcount = count_bit_clear(num); //function to count clear bits
	printf("number of bits cleared:%d\n", clearcount);

	return 0;
}

int count_bit_set(int num)
{
	int i;
	int count = 0; //to count the number of bits
	i = sizeof(int) * 8;
	
	for(; i>=1; i--) {
		if((num >> (i-1)) & 1) { //check if the bit is set
			count ++; //increment the count
		}
	}
	return count;
}

int count_bit_clear(int num)
{
	int i, count = 0;
	i = sizeof(int) * 8;
	for(;i>=1;i--) {
		if(!((1 << (i-1)) & num)) // check if the bit is clear
			count ++; //increment the count
	}
	return count;
}
	
