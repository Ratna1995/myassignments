#include<stdio.h>
extern int showbit(int num);

int cnt_trailing_set_bits(int num);
int cnt_leading_set_bits(int num);
int cnt_trailing_clear_bits(int num);
int cnt_leading_clear_bits(int num);

int main()
{
	int num;				//number to be given
	int count_trailing_set_bits;// to count the number of trailing set bits
	int count_leading_set_bits;	//to count the number of leading set bits
	int count_leading_clear_bits;// to count the number of leading clear bits
	int count_trailing_clear_bits;//to count the number of trailing clear bits
	
	printf("enter a number\n");
	scanf("%d", &num);
	showbit(num);		// displays the number in bianry bits
	
	count_trailing_set_bits = cnt_trailing_set_bits(num);
	printf("no of trailing set bit:%d\n", count_trailing_set_bits);

	count_leading_set_bits = cnt_leading_set_bits(num);
	printf("no of leading set bit:%d\n", count_leading_set_bits);
	
	count_leading_clear_bits = cnt_leading_clear_bits(num);
	printf("no of leading clear bits:%d\n", count_leading_clear_bits);

	count_trailing_clear_bits = cnt_trailing_clear_bits(num);
	printf("no of trailing clear bits:%d\n",count_trailing_clear_bits);

	return 0;
}

int cnt_trailing_set_bits(int num)
{
	int i, count = 0;
	
	for(i=0; i <= 31; i++) {
		if((num >> i) & 1)	//checks if the trailing bit is set
			count ++;		// if trailing bit is set, increment the count by 1
		else
			break;
	}
	return count;
}

int cnt_leading_set_bits(int num)
{	
	int i, count = 0;
	
	for(i = 31; i >= 0; i--) {
	 	if( (num >> i) & 1 )	//checks if the leading bit is set
			count ++;			// if leading bit is set, increment count by 1
		else 
			break;
	}
	return count;
}

int cnt_leading_clear_bits(int num)
{
	int i, count = 0;
	
	for(i = 31; i >= 0; i--) {
		if((num >> i) & 1) 		// checks if the leading bit is set
			break; 		
		else 
			count++;	//if the leading bit is not set, increment count by 1
	}
	return count;
}

int cnt_trailing_clear_bits(int num)
{
	int i, count =0;
	
	for(i = 0; 1 <= 31; i++) {
		if((num >> i) & 1) 		// check if the trailing bit is set
			break;
		else 
			count++;	//if the trailing bit is not set, increment count by 1
	}
	return count;
}
