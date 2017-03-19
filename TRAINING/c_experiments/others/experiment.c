#include<stdio.h>
#if EX1
int main()
{
	int a;
	printf("hello world:%d\n",a);
	return 0;
}
#endif

#if EX2
int main()
{
	int a = 20;
	int b = 10;
	while(b--)
		a++;
	printf("a = %d\n", a);
	return 0;
}
#endif

#if EX3
int main()
{
	float a = 1.5;
	if(a == 1.5)
		printf("equal");
	else
		printf("not equal");
	printf("%lf\n",a);
	printf("%f\n",a);
}
#endif

#if EX4
int main()
{
	char *p = "global edge";
	*p++;
	printf("%s\n",p);
	return 0;
}
#endif

#if EX5
int main()
{
	char *p = "global edge";
	p++;
	printf("%s\n",p);
	return 0;
}
#endif

#if EX6
int main()
{
	char p[] = "global edge";
	char *ptr = p;
	(*ptr)++;
	printf("%s\n",p);
	return 0;
}
#endif
