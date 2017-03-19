#include<stdio.h>

int main()
{
	int a = 2;
	double d1 = 4.0;
	char s1[] = "good";

	int b;
	double d2;
	char s2[10];

	scanf("%d%lf%s", &b, &d2, s2);

	a = a + b;
	printf("sum of int = %d\n", a);
	d1 = d1 + d2;
	printf("sum of double = %.1lf\n", d1);
//	s1 = s1 + s2;
	printf("concatenate = %s %s\n", s1, s2);

	return 0;
}
