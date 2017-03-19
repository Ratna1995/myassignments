#include<stdio.h>
#if 1
extern int showbit(int num);
int bit_copy(int snum, int dnum, int n, int s, int d);

int main()
{
	int snum;	// source number
	int dnum;	// destination number
	int n;		// number of bits
	int s;		// source position
	int d;		// destination position
	int bc;		// bitcopy
	
	printf("enter the source number\n");
	scanf("%d", &snum);
	showbit(snum);	
	
	printf("\nenter the destination number\n");
	scanf("%d", &dnum);
	showbit(dnum);
	
	printf("\nenter the source bit position\n");
	scanf("%d", &s);
	
	printf("\nenter the no. of the bits to be copied\n");
	scanf("%d", &n);
	
	printf("\nenter the destination bit position\n");
	scanf("%d", &d);

	bc = bit_copy(snum, dnum, n, s, d); // function call for bit copy
	printf("\nthe number with bit copy:\n");
	showbit(bc);

	return 0;
}

int bit_copy(int snum, int dnum, int n, int s, int d)
{
	int i, l, r;
	for(i = 0; i < n; i++) {
		l = (snum >> (s-i)) & 1;
		r = (dnum >> (d-i)) & 1;
		if(l != r) {
			dnum = dnum ^ (1 << (d-i));
		}
	}
	return dnum;
}
#endif

#if 0
int bit_copy(int snum, int dnum, int n, int s, int d);
extern showbit(int);

int main()
{
	int snum;	//source number
	int dnum;	// destination number
	int n;		// number of bits
	int s;		// source position
	int d;		// destination position
	int result;

	printf("Enter a source number");
	scanf("%d", &snum);
	showbit(snum);

	printf("\nEnter a destination number");
	scanf("%d", &dnum);
	showbit(dnum);

	printf("\nEnter number of bits");
	scanf("%d", &n);

	printf("\nEnter a source position");
	scanf("%d", &s);

	printf("\nEnter a destination position");
	scanf("%d", &d);

	bit_copy(snum, dnum, n, s, d); //function call for bitcopy
	
	printf("after copying n bits from position s to position d:\n");
	showbit(result);
	return 0;
}

int bit_copy(int snum, int dnum, int n, int s, int d)
{
	int bit;
	int result;
	int bit1;
	
	bit = (snum >> ( s - n +1 )) & (~( ~0 << n ));

	bit1 = dnum;

	result = (bit1 | (dnum & ~( ~0 << n))) | ( bit <<  (d - n + 1) );
	
	return result;
}
#endif
