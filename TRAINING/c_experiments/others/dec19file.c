#include<stdio.h>
#if EX1
int main()
{
	unsigned int n;

	read(0, &n, sizeof(n));

	n = n + 1;

	write(1, &n, sizeof(n));
	return 0;
}
#endif

#if EX2
int main()
{
	unsigned int n;
	read(0, &n, sizeof(n));
	n = n ^(1<<24);
	write(1, &n, sizeof(n));
	return 0;
}
#endif

#if EX3
int main()
{
	unsigned int n;
	int i;
	int temp;
	int num = 0;

	read(0, &n, sizeof(n));
	char *p = (char *)&n;
	for(i = 0;i < 4; i++) {
		temp = *((p+3)-i) & 0x0f;
		num = ((temp) << (4*i))|num;
	}
//	printf("%x\n", num);	
	//n = num;
//	printf("%d\n",n);
	write(1, &num, sizeof(num));
	return 0;
}
#endif
