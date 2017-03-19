#include<stdio.h>

extern int showbit(int num);

#if 0
// right rotate

unsigned int right_rotate_bits(unsigned int num);

int main()
{
	int num;
	int right_rotate;
 	
	printf("enter the number\n");
	scanf("%d", &num);
	showbit(num);
	
	right_rotate = right_rotate_bits(num);
	printf("\nnum after right rotate:\n");
	showbit(right_rotate);
	
	return 0;
}

unsigned int right_rotate_bits(unsigned int num)
{
	int i;

	i = sizeof(int) * 8;
	num = ((num & 1) == 1) ? (num >> 1) | (1 << (i-1)) : num << 1;
	return num;
}
#endif	

#if 0
// left rotate
unsigned int left_rotate_bits(unsigned int num);

int main()
{
	int num;
	int left_rotate;
	
	printf("enter the number\n");
	scanf("%d", &num);
	
	showbit(num);
	
	left_rotate = left_rotate_bits(num);
	printf("\n num after left rotate:\n");
	showbit(left_rotate);
	
	return 0;
}


unsigned int left_rotate_bits(unsigned int num)
{
	int i;

	i = sizeof(int) * 8;
	
	num = ((1 << (i-1)) & num) ? (num << 1) | 1 : num << 1;
	return num;
}
#endif

#if 0

// right rotate by n bits

unsigned int right_rotate_n_bits(unsigned int num, int n);

int main()
{
	int num;
	int n;
	int right_rotaten;
	
	printf("enter the number\n");
	scanf("%d", &num);
	
	printf("enter the number of bits to be shifted\n");
	scanf("%d", &n);
	
	right_rotaten = right_rotate_n_bits(num, n);
	printf("after n bit right rotating:\n");
	showbit(right_rotaten);
	return 0;
}

unsigned int right_rotate_n_bits(unsigned int num, int n)
{
	int i;
//	i= sizeof(int) * 8;
	
	for(i=0; i < n; i++) {
		num = ((num & 1) == 1) ? (num >> 1) | (1 << (i-1)) : num << 1;
	}
	return num;
}
#endif	

#if 1
// left rotate n bits

unsigned int left_rotate_n_bits(unsigned int num, int n);

int main()
{
	unsigned int num;
	int n;
	int left_rotaten;
	
	printf("enter the number\n");
    scanf("%d", &num);
   	showbit(num);
	 
    printf("\nenter the number of bits to be shifted\n");
    scanf("%d", &n);
    
    left_rotaten = left_rotate_n_bits(num, n);
    printf("after rotating n bits to left:\n");
    showbit(left_rotaten);
    return 0;
}

unsigned int left_rotate_n_bits(unsigned int num, int n)
{
	int i;
	for(i = 0; i < n; i++) {
 		num = ((1 << (i-1)) & num) ? (num << 1) | 1 : num << 1;
	}
	return num;
}
#endif 




























































