#include</usr/include/stdio.h>

#if 0
int main(void)
{
	printf("%d", sizeof(sizeof('a')));	
	return 0;
}
#endif

#if 0
int main()
{
	printf("%d\n", sizeof(5));
	return 0;
}
#endif

#if 0
int main()
{
	printf("%d\n", sizeof('a'));
	printf("%d\n",sizeof(NULL));
	printf("%d\n", sizeof(void *));
	printf("%d\n", sizeof(main));
	printf("%d\n", sizeof(main()));
	printf("%d\n", sizeof(void));
	return 0;
}
#endif

#if 1
int main()
{
	printf("ratna\f");
	printf("kumari\n");

	printf("ratna \r");
	printf("kumari\n");
	return 0;
}
#endif
