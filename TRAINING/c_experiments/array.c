#include<stdio.h>

int main()
{
	int *p;
	int a[5] = {1, 2, 3, 4, 5};
	int (*ptr)[5];
	p = a;
	ptr = &a;
	printf("value of p:%p\n",a);
	printf("%p\n",&ptr);
	printf("value of ptr:%p\n", *ptr);
//	printf("value of p:%p\n", p+4);
	printf("value of ptr:%p\n", *ptr+1);
//	printf("value of a[2]:%d\n",*(p+2));
	printf("%p\n", &ptr + 1);
	return 0;
}
