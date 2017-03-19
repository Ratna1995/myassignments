#include<stdio.h>

#if 0
/*uninitialized variable is in BSS, initial value is 0*/
const int i;
int main()
{
	//scanf("%d", &i);//warning writing into const object
//	printf("%d\n", i); //prints 0
	return 0;
}
#endif

#if 0 
const int i;//in BSS
int main()
{
	i = 15;	//i is in stack
	//scanf("%d", &i);	//no waring, no error
	//printf("%d\n", i);	//prints 15
	return 0;
}
#endif

#if 0
/*writing into const object, seg fault*/
const int i = 15;
int main()
{
	scanf("%d", &i);
	printf("%d\n", i);//prints 15
	return 0;
}
#endif

#if 0
const int i =15;
int main()
{
	i =20;
	printf("%d\n", i);
	return 0;
}
#endif

#if 0
int main()
{
	const int i;
	printf("%d\n", i);	//prints some garbage value
	return 0;
}
#endif

#if 1
static int b = 10;
int main()
{
	const int i = 1;
	//int a = 14;
//	i = 15;	//error
	printf("%d\n",i);
	return 0;
}
#endif 

#if 0
int main()
{
	const int i =15;
	int i = 10;	//error
	return 0;
}
#endif
