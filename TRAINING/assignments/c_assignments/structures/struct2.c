#include<stdio.h>

/*union for sample in which all members have bit fields except e*/
union sample
{
	int a : 5;
	int b : 10;
	int c : 5;
	int d : 21;
	int e;
};
	
int main()
{
	union sample s;	//declared a variable of type union sample

	printf("size of union :%d\n", sizeof(union sample));	
	printf("value of a = %d\n", s.a);
	printf("value of b = %d\n", s.b);
	printf("value of c = %d\n", s.c);
	printf("value of d = %d\n", s.d);

	printf("enter value for e:");                                             
    s.e = 20; // e is initialized to 20                  
    printf("%d\n", s.e); 
	return 0;
}
