#include<stdio.h>

extern int showbit(int num);
void bit_swap(int n, int s, int d);/*function declaration for swapping bits in 
									between positions s and d*/

int main()
{
	int num;
    int s, d;	// s and d are positions of a bit

    printf("enter a number\n");
    scanf("%d", &num);
	showbit(num);

    printf("enter the s and dth positions\n");
    scanf("%d%d", &s, &d);
	
	bit_swap(num, s, d);    // function call for bit swap
	return 0;
}

void bit_swap(int num, int s, int d)
{
	if(((num >> s) & 1) == ((num >> d) & 1)){ /* check for equality between the
												bits*/
    	printf("same bits:\n");
		showbit(num);
	}
    else {
		num = (1 << d) ^ num; //toggle the bits
        num = (1 << s) ^ num;
		printf("swapped bits:\n");		
        showbit(num);
    }

}

