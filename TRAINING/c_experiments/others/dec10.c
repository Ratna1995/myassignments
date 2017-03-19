#include<stdio.h>

struct A{
	int a;
	struct B p;
	char ch;
} *x;

int main()
{
//	x.ch = 80;
//	x.p->n = 88;
	printf("size of A %d\n", sizeof(x));
//	printf("size of p %d\n", sizeof(struct B *p));
//	printf("size of B%d\n", sizeof(struct B));
	return 0;
}
