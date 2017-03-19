#include<stdio.h>

#if 0
#define ABC 10
main()
{
	printf("%d", ABC);
	foo();
	printf("%d", ABC);
}

foo()
{
	#undef ABC
	#define ABC 50
	printf("%d", ABC);
}
#endif

#if 0
int main()
{
	extern int i;
	printf("%d", i);
	{
		int	i = 10;
		printf("%d", i);
	}
}
#endif

#if 1
int main()
{
	char ch = 128;
	printf("%d\n",ch);
	return 0;
}
#endif
