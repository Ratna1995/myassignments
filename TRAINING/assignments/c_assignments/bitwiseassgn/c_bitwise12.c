#include<stdio.h>
#define getbits(x, p, n) ( x & ((~( (~0) << n) ) << p) ); // macro for getbits

extern int showbit(int num); //calling showbit from other file

int main()
{
	int x;	// to enter a number
	int p;	// the position in the number
	int n;	// number of bits to copy
	int getbits;
 
	printf("enter a number\n");
	scanf("%d", &x);
	showbit(x);
	
	printf("\nenter the position p\n");
	scanf("%d", &p);
	
	printf("enter the no of bits to copy from position p\n");
	scanf("%d", &n);
	
	getbits = getbits(x, p ,n); //calling the macro getbits
	showbit(getbits);	// shows the number in 32 bit format
	return 0;	
}
