#include<stdio.h>
#define sct(n,s,c,t) ((1<<s)|n)^((1<<c)&n)^((1<<t)^n);
extern int showbit(int n);
int main()
{
	int n,s,c,t;
	n=9;
	s=5;
	c=1;
	t=30;
	n = sct(n,s,c,t);
	showbit(n);
}
