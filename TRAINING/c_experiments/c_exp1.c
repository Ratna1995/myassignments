#include<stdio.h>
#if 0
/*range of data types*/
#include<limits.h>

int main()
{
	printf("the minimum and maximum values of INT are min=%d max=%d\n",INT_MIN,INT_MAX);
	printf("the minimum and maximum values of LONG are min=%ld max=%ld\n",LONG_MIN,LONG_MAX);
	printf("the minimum and maximum values of CHAR are min=%d max=%d\n",CHAR_MIN,CHAR_MAX);
} 
#endif

#if 0
/* static storage class variables*/
int statdemo();

int main()
{
	static int i=10;
	statdemo();
	printf("i=%d",i);
	statdemo();
	printf("i=%d",i);
}

int statdemo()
{
	static int i=5;
	i=i+1;
	printf("i=%d",i);
	return i;
}
#endif

#if 0
/* declaring static globally*/

static int gInt = 1;

static void staticDemo()
{
	static int i;
	printf("%d ", i);
	i++;
	printf("%d\n", gInt);
	gInt++;
}

int main()
{
	staticDemo();
	staticDemo();
}
#endif

#if 0
/* storage class variable extern*/

extern int x;

int main()
{
	printf("x: %d\n", x);
}
int x=10;

#endif

#if 0
// Const

int main()
{
	const int x=1;
	x=x+1;
	printf("x=%d",x);
}
#endif

#if 1
/*register storage class variable*/
#include <stdio.h>

int main()
{
	register int i = 10;
	int *p = &i; //error

	printf("Value of i: %d", *i);
	printf("Address of i: %d", i);

}   
#endif

#if 0
/* right shift and left shift*/
int showbit(int a);
int main()
{
	int a = 60;
	int b,c;
	int x, y;
#include <stdio.h>

	int main()
	{
		x = showbit(a);
		printf("x:%d",x);
		b = a >> 2;
		y = showbit(b);
		printf("b:%d",b);
		//	c=a<<2;
		printf("y:%d",y);
		//	printf("left shift 0f a by 2=%d",b);
		//	printf("right shift 0f a by 2=%d",c);
	}

	int showbit(int a)
	{
		int rem;
		int binary=0;
		int i=1;
		while(a!=0)
		{
			rem = a % 2;
			binary = binary+(rem*i);
			i = i * 10;
			a = a/2;
		}
		return binary;
	}	
#endif

#if 0
	/* calculator program*/
	int main()
	{
		char ch;
		int num1, num2;
		printf("enter 2 numbers\n");
		scanf("%d%d",&num1,&num2);
		printf("choose addition + \n substraction - \n multiply * \n divide / \n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '+' : printf("addition:%d",num1+num2);
				   break;
			case '-' : printf("subtract:%d",num1-num2);
				   break;	
			case '*' : printf("multiply:%d",num1*num2);
				   break;
			case '/' : printf("subtract:%d",num1/num2);
				   break;
			default : printf("invalid");
		}
	}
#endif 

#if 0
#include<stdio.h>
	int main()
	{
		int num;
		int i;
		int count=0;
		printf("enter a num\n");
		scanf("%d",&num);
		i = (sizeof(int))*8;
		for(;i>=1;i--)
		{
			printf("%d",1 & (num >> (i-1)));
			count++;
			if(count % 8 == 0)
				printf(" ");
		}

	}
#endif

