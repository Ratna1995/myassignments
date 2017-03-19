#include<stdio.h>
#if 1
void showbit(int num);
unsigned int i = -5;
signed int j = -5;
int main()
{
	if(i == j)
		printf("equal\n");
	else
		printf("not equal\n");
	showbit(i);
	printf("i=%d\n", i);
	showbit(j);
	printf("j=%d\n", j);
	return 0;
}
#endif

#if 0
int main()
{
	  {
        int var = 10;
	  }
    {
	     printf("%d", var);  
	}
	return 0;
}
#endif
