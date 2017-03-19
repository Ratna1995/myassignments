#include<stdio.h>
#if 0
unsigned int count = 1; 

int main(void)
{
    int b = 10;
    int a[3] = {1, 2, 3};
//    a[0] = 1;
//    a[1] = 2;
//    a[2] = 3; 

    printf("\n b = %d \n",b);
//    a[3] = 12;
    printf("\n a[3] = %d \n",a[3]); 

    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char *p[1] = {"hello"};
	printf("%s", (p)[0]);
	return 0;
}
#endif

#if 0
int main()
{
	char *str = "hello, world";
	char *str1 = "hello, world";
	if (strcmp(str, str1))
		printf("equal");
	else
		printf("unequal");
}
#endif

#if 0
int main()
{
  int arr[2] = {1, 3};

  printf("%d ", arr[4]);
  printf("%d ", arr[-2]);

  return 0;
}
#endif

#if 0
int main()
{

// Array declaration by initializing it with more
// elements than specified size.
int arr[2] = {10, 20, 30, 40, 50};
printf("%d\n", arr[3]);
return 0;
}
#endif

#if 0
int main()
{
	int arr[5], i;

	printf("Size of integer in this compiler is %u\n", sizeof(int));
	for (i=0; i<5; i++)
		printf("Address arr[%d] is %p\n", i, &arr[i]);

	return 0;
}
#endif

#if 0
int main(void)
{
    char arr[3];
    char(*ptr)[3]; 

    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c'; 

    ptr = &arr; 
	printf("*(ptr) = %p\n", *(ptr));
	printf("*(arr + 1) = %d\n", *(arr + 1));
	printf("**ptr + 1  = %c\n", **ptr + 1);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int arr[] = {10, 20}, x = 10;
	int *ptr = &x; // This is fine
	arr = &x; // Compiler Error
	return 0;
}
#endif

#if 0
// pointers and arrays
#include <stdio.h>
int main()
{
   int arr[] = {10, 20, 30, 40, 50, 60};
   int *ptr = arr;
   printf("arr[2] = %d\n", arr[2]);
   printf("*(arr + 2) = %d\n", *(arr + 2));
   printf("ptr[2] = %d\n", ptr[2]);
   printf("*(ptr + 2) = %d\n", *(ptr + 2));
   return 0;
}
#endif

#if 1
int main()
{
	const char *s = "geeksquiz";
	printf("%u", sizeof(s));
//	s[0] = 'j'; 
//	printf("%d\n", *s);
	return 0;
}
#endif
