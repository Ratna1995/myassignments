#include<stdio.h>
#include<string.h>
#if 0
int main()
{
	int *p = NULL;
	int a = 5;
	p = &a;
	
	printf("value of a:%d\n", a);
	printf("value of p:%p\n", p);
	printf("value of *p:%d\n", *p);
	printf("value of &a:%p\n", &a);
	printf("value of &p:%p\n", &p);
	
	return 0;
}
#endif

#if 0

int main()
{
	int a = 5;
	int *b = &a;
	int **c = &b;

	printf("a = %d\n", a);
	printf("&a = %p\n", &a);
	printf("b = %p\n", b);
	printf("*b = %d\n", *b);

	printf(" &b = %p\n", &b);
	printf("**c = %d\n", **c);
	printf("&c = %p\n", &c);
	printf("c = %p\n", c);
	printf("*c = %p\n", *c);
	return 0;
}
#endif	
	
#if 0
//swap using pointers
void swap(int *a, int *b);
int main()
{
	int a;
	int b;
	
	printf("enter th value of a, b:\n");
	scanf("%d%d", &a, &b);
	
	swap(&a, &b);
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	 	
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("a = %d, b = %d", *a, *b);
}
#endif

#if 0
//swap two numbers
void swap(int a, int b);

int main()
{
	int a, b;
	
	printf("enter the value of a and b\n");
	scanf("%d%d", &a, &b);
	
	swap(a, b);
	
	return 0;
}

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
	
	printf("a = %d, b = %d", a, b);
}
#endif

#if 1
int main()
{
	int add;
	int sub;
	int mul;
	int a = 5;
	int b = 6;

	arith(a, b, &add, &sub, &mul);
	
	printf("add = %d\nsub = %d\nmul = %d\n", add, sub, mul);
	return 0;
}
int arith(int a, int b, int *add, int *sub, int *mul)
{
	*add = a + b;
	*sub = a - b;
	*mul = a * b;
}
#endif

#if 0

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
   	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", a+1);
	printf("%p\n", &a+1);
	printf("%p\n", &a+4);
	printf("%d\n", *a);
	printf("%d\n", *a + 1);
	printf("%d\n", *(a + 1) - a[1]);	
	printf("%d\n", *(a + 0) - a[0]);
	printf("%d\n", a[4] - a[2]);
	printf("%d\n", a[3]);
	*(a + 3) = 5;
	printf("%d\n", a[3]);
	printf("%d\n", **(&a));
	return 0;
}
#endif

#if 0
int main()
{
	char ch[] = {'A', 'B', 'C'};
	char ch1[] = "global edge";
	ch[2] = 'A';
	
	printf("%p\n",ch);
	printf("%p\n",ch1);
	printf("%p\n", &ch);
	printf("%p\n", &ch1);
	printf("%c\n", *ch1);
	printf("%c\n", *ch);
	printf("%d\n", strlen(ch1));
	printf("%c\n", *(ch1 + 1));
	printf("%c\n", *(ch + 2));
	printf("%p\n", &ch + 1);
	return 0;
}
#endif



	
