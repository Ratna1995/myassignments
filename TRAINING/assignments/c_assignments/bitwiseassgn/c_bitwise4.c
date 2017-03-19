#include<stdio.h>

extern int showbit(int num);

int bit_even_toggle(int num);//declaration of even bit toggle
int bit_odd_toggle(int num); //declaration of odd bit toggle

int main()
{
	int num;
	int even;
	int odd;
	
	printf("enter the number\n");
	scanf("%d", &num);

	printf("original bits:\n");	
	showbit(num);

	even = bit_even_toggle(num);
	printf("\n even bit toggle:\n");
	showbit(even);
	
	odd = bit_odd_toggle(num);
	printf("\n odd bit toggle:\n");
	showbit(odd);

	return 0;
}

int bit_even_toggle(int num)
{
	int i;
	for(i=31; i>=0; i--)	{
		if(i % 2 == 0)	{ //checking if the bit is in even position
			num = ((1 << (i)) ^ num); //if the bit is in even position, toggle
		} 
	}
	return num;
}

int bit_odd_toggle(int num)
{
	int i;
	for(i = 31; i>=0; i--) {                                                                     
        if(i % 2 != 0) {    // checking if the bit is odd position                              
           num = ((1 << (i)) ^ num); // if the bit is in odd posiiton, toggle             
        }                                                                 
    }         
	return num;
}
