#include<stdio.h>

#if 0 
int a[1];
int main()
{
	a[2] = 10;
	return 0;
}
#endif

#if 1 
int main()
{
	int a[0];
//	int d =5;
//	int b = 30;
	a[3] = 10;
	printf("%d \n %d\n ", a[0], a[1]);
	return 0;
}
#endif
