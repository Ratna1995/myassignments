#include<stdio.h>
void func();
int main()
{
	int a = 10;
	func();
	printf("%d\n", a);
	return 0;
}

void func()
{
	int a;
	a++;
}
