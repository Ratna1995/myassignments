#include<stdio.h>
#if 0
int main()
{
	char *ptr1 = "hello";
	char *ptr2 = "heilo";
	if(ptr1 == ptr2)
		printf("true");
	else
		printf("false");
	return 0;
}
#endif

#if 1
int main()
{
	int *ptr;
	while(1) {
		ptr = (char *) malloc (50 * sizeof(char));
	}
	return 0;
}
#endif
