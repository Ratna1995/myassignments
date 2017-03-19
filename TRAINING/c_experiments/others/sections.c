#include<stdio.h>
static int a;
static int b = 10;
static int c = 0;
const int d;
const int e = 0;
const int f = 20;
const static int x = 33;
const static int y;
const static int z = 0;
volatile int i = 22;
volatile int j;
volatile int l = 0;
extern int m;
extern volatile int n;
int main()
{
	register int k = 22;
	const int g = 10;
	const int h = 0;
	printf("%d\n", b);
	printf("%d\n",m);
	return 0;
}
int m = 32;
volatile int n = 2;
