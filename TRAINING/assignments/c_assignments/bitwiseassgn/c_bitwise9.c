#include<stdio.h>
extern int showbit(int num);
 
#if 1 
// maximum and minimum of two numbers
#define max(num1, num2)\
int i;\
for(i = 31; i >= 0; i--){\
if(((1 << i) & num1) != ((1 << i) & num2)){\
if((1 << i) & num1){\
printf("\n%d is maximum and %d is minimum\n", num1, num2);\
break;}\
else{\
printf("\n%d is maximum and %d is minimum\n", num2, num1);\
break;\
}}}

int main()
{
	int num1, num2; // two numbers
	
	printf("enter two decimal numbers\n");
	scanf("%d%d", &num1, &num2);
		
	max(num1, num2); //find the maximum and minimum of 2 numbers
	return 0;
}
#endif

#if 0
// to clear the right most set bit
#define clr_rgtmst_set_bit(num)\
int i;\
for(i = 0; i <= 31; i++){\
if(num & (1 << i)){\
showbit(num & (~(1 << i)));\
break;\
}}

int main()
{
	int num; 	//number
	
	printf("enter a decimal number:\n");
	scanf("%d", &num);
	showbit(num);	//displays the number in 32bit format
	
	printf("\nafter clearing the rightmost set bit:\n");
	clr_rgtmst_set_bit(num);	// function to clear the rightmost set bit
	return 0;
}
#endif

#if 0
// clear left most set bit
#define clr_leftmst_set_bit(num)\
int i;\
for(i = 31; i >= 0; i--){\
if((1 << i) & num){\
showbit(num & (~(1 << i)));\
break;\
}}
                                                                                                                                             
int main()                                                                      
{                                                                               
    int num;                                                                    
                                                                                
    printf("enter a decimal number:\n");                                        
    scanf("%d", &num);                                                          
    showbit(num);                                                               
                                                                                
    printf("\nafter clearing the leftmost set bit:\n");                          
    clr_leftmst_set_bit(num);     // function to clear the leftmost set bit                                               
    return 0;                                                                   
}        
#endif

#if 0
// to set rightmost clear bit
#define set_rgtmst_clr_bit(num)\
int i;\
for(i = 0; i <= 31; i++){\
if(!((1 << i) & num)){\
showbit(num | (1 << i));\
break;\
}}

int main()
{
	int num;
	
	printf("enter a number\n");
	scanf("%d", &num);
	showbit(num);
	
	printf("\nafter setting the rightmost clear bit:\n");
	set_rgtmst_clr_bit(num); // function to set rightmost clear bit
	return 0;
}
#endif

#if 0
// to set leftmost clear bit

#define set_lftmst_clr_bit(n) \
int i;\
for(i = 31; i >= 0; i--){\
if(!((1 << i) & n)){\
showbit((1 << i) | n);\
break;\
}}

int main()
{
	int n;
	
	printf("enter a number\n");
	scanf("%d", &n);
	showbit(n);
	
	printf("\nafter setting the leftmost clear bit:\n");
	set_lftmst_clr_bit(n);//function to set leftmost set bit
	return 0;
}
#endif

#if 0 
//To set bits from bit position ‘s’ to bit position ‘d’ clear rest of the bits

#define setbits(n, s, d)   (~((~0) << (s - d + 1))) << d /* macro to set bits
from position s to position d*/

int main()
{
	int n;
	int s;
	int d;
	
	printf("enter a number:\n");
	scanf("%d", &n);
	showbit(n);
	
	printf("\n enter the source position:\n");
	scanf("%d", &s);
	
	printf("enter the destination position\n");
	scanf("%d", &d);
	
	n = setbits(n, s, d); /* function call to set bits from position s to 
position d*/
	
	printf("after setting the bits from s to d in the number:\n");
	showbit(n);
	return 0;
}
#endif
	
#if 0
//To clear bits from bit position ‘s’ to bit position ‘d’set rest of the bits

#define clearbits(n, s, d) ~(~((~0) << (s - d + 1))) << d /* macro to clear bits
from position s to position d*/

int main()
{
	int n;
	int s;
	int d;
	
	printf("enter a number:\n");
	scanf("%d", &n);
	showbit(n);
	
	printf("\n enter the source position:\n");
	scanf("%d", &s);

	printf("enter the destination position\n");
	scanf("%d", &d);

	n = clearbits(n, s, d);/* function call to clear bits between positions s 
	and d */

	printf("\nafter clearing the bits from s to d in the number:\n");
	showbit(n);
	return 0;
}
#endif

#if 0
//To toggle bits from bit position ‘s’ to bit position ‘d’ in a given number

#define togglebits(n, s, d) (n ^ ((~((~0) << (s - d + 1))) << d))/* macro to 
toggle bits from position s to position d*/

int main()                                                                      
{                                                                               
    int n;                                                                      
    int s;                                                                      
    int d;                                                                      
                                                                                
    printf("enter a number:\n");                                                
    scanf("%d", &n);                                                            
    showbit(n);                                                                 
                                                                                
    printf("\n enter the source position:\n");                                  
    scanf("%d", &s);                                                            
                                                                                
    printf("enter the destination position\n");                                 
    scanf("%d", &d);                                                            
                                                                                
    n = togglebits(n, s, d);/*function call to toggle bits from position s and
position d*/                                                     
                                                                                
    printf("\nafter toggling the bits from s to d in the number:\n");             
    showbit(n);                                                                 
    return 0;                                                                   
}            
#endif 
