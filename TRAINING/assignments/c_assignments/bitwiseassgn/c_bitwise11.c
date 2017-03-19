#include<stdio.h>

int invert(int x, int p, int n);//declaration of invert
extern int showbit(int num);

int main()
{
	int x;  		// number to be given
	int p;			// position p in x
	int n;			// number of bits in x
	int result; 	//stores the result
	
	printf("enter a number\n");
	scanf("%d", &x);
	showbit(x);
	
	printf("\n enter the position from where the bits should be inverted:\n");
	scanf("%d", &p);
	
	printf("enter the number of bits to be inverted:\n");
	scanf("%d", &n);
	
	result = invert(x, p, n); //function call to invert bits
	printf("bits after inverting:\n");
	showbit(result);	// shows the 32bit formst of the result
	return 0;
}

int invert(int x, int p, int n)
{
	int result;
	
	result = (~((~0) << n) << (p - n + 1)) ^ x;
	return result;
}

	
