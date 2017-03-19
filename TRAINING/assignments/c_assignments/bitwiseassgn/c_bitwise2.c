#include<stdio.h>

void bit_swap(int snum, int dnum, int s, int d);
extern void showbit(int num);

int main()
{
	int snum, dnum; // source number and destination number
	int s, d; //s and d are bit positions in snum and dnum respectively
	
	printf("enter two number\n");
	scanf("%d%d", &snum, &dnum);
	
	showbit(snum);
	printf("\n");
	showbit(dnum);
	
	printf("\nenter the bit positions s and d\n");
	scanf("%d%d", &s, &d);
	
	bit_swap(snum, dnum, s, d); //function call for bitswap;
	return 0;
}

void bit_swap(int snum, int dnum, int s, int d)
{
	if (((snum >> s) & 1) == ((dnum >> d) & 1))	{ /* checking for equality
	between the bits*/ 
		showbit(snum);
		showbit(dnum); // bits are equal, print them
	}
	else {
		snum = (1 << s) ^ snum;		
 		dnum = (1 << d) ^ dnum;
		
		printf("after swapping\n");
		showbit(snum);
		
		printf("\n");
		showbit(dnum);
	}
}

	
