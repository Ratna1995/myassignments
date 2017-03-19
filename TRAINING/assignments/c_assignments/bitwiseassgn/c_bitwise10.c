#include<stdio.h>                                                               
                                                                                                              
extern int showbit(int num);                                                    
int setbits(int p, int n, int y);//declaration of setbits
                                                                              
int main()                                                                      
{                                                                               
    int y;				// y is number                                                                    
    int p;             // position in the given number                                         
    int n;             // number of bits                                                          
    int x;             // result is stored                                       
                                                                                
    printf("enter a number\n");                                                 
    scanf("%d", &y);                                                            
    showbit(y);                                                                 
                                                                                
    printf("\n enter the position p from where the bits should be set:\n");  
    scanf("%d", &p);                                                            
                                                                                
    printf("enter the number of bits to be set:\n");                                      
    scanf("%d", &n);                                                            
                                                                                
    x = setbits(p, n, y);     // function call for setbits                                              
    
	printf("bits after setting:\n");                                          
    showbit(x);              // shows the number in 32bit format                                              
    return 0;                                                                   
}        

int setbits(int p, int n, int y)
{
	int x;

	x = (~((~0) << n) << (p - n + 1)) | y;
	return x;
}                                                                       
                                                                                
                        
