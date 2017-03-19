
#include<stdio.h>
#if 0
int main()
{
		int a = 1;
		do {
				fprintf(stdout, a);
				scanf("%d", &a);
				sleep(1);
			}while(a==1);
}
#endif
#if 0
int main()
{
		while(1){
			fprintf(stdout,"output\n");
			fprintf(stderr,"error");
			sleep(0);
		}
}
#endif
#if 0
 int a =10;
 int main()
{
	int a= 20;
 void fun() {
	 printf("hello");
 }
	fun();
	{extern int  a;
		printf("%d",a);
	}
	return 0;
}
#endif

#if 1
register int a = 10;
int main()
{
	printf("%d", a);
	return 0;
}
#endif
