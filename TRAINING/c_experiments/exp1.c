#include<stdio.h>

#if 0
#define conc(a,b) a##b

int main()
{	
	printf("%d\n", conc(12,34));
	return 0;
} 
#endif

#if 1
#define print(hello) #hello
int main()
{
	printf("%s\n", print(hello));
	return 0;
}
#endif
