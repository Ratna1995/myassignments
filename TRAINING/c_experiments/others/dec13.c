#include<stdio.h>
#if 0
void func();

int main()
{
	int i = 10;
	func();
	printf("%d", i);
	return 0;
}

void func()
{
	int j = 5;
	int *ptr;
	
	ptr = &j;
	while(*ptr != 10)
		ptr++;
	*ptr = 20;
	return;
}
#endif

#if 1
#include<string.h>
struct t{
	int salary;
	char name[];
}s1, s2;

int main()
{
	s1.salary = 500;
	strcpy(s1.name, "name");

	printf("sizeof struct t = %d\n", sizeof(s1));
	
//	printf("salary = %d\n", s1.salary);
//	printf("name = %s\n", s1.name);
	s2.salary = 700;
	strcpy(s2.name, "venkat");

	//printf("sizeof struct t = %d\n", sizeof(s1));
	printf("salary = %d\n", s1.salary);
	printf("name = %s\n", s1.name);

	printf("salary = %d\n", s2.salary);	
	printf("name = %s\n", s2.name);
	return 0;
}
#endif
