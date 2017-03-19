#include<stdio.h>
#include<stdlib.h>
#if 1
#define MAX 6000
int a[5000] = {1,2,3};
int main()
{
	printf("pid : %d\n", getpid());
	printf("adr of a =%p\n", a);
	printf("adr of a+%d =%p\n", MAX, a+MAX);

	getchar();
	a[MAX] = 5;
	printf("a[%d] = %d\n", MAX, a[MAX]);
	return 0;
}
#endif

#if 0
#define MAX 10000
int *p;

int main()
{
	p = malloc(sizeof(int));
	printf("adr of p =%p\n", p);
	printf("adr of p+%d =%p\n", MAX, p+MAX);
	 *(p+MAX) = 5;
	 printf("p[%d] = %d\n", MAX, *(p+MAX));
	 return 0;
}
#endif

