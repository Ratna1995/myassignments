#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *memcopy(char *dest, const char *src, size_t n);

int main()
{
	char *src = NULL;
	char *name = NULL;
	char *dest = NULL;
	size_t n;
	//int leng;

	src = (char *) malloc (sizeof(char));
//	name = (char *)malloc(sizeof(char));
	dest = (char *) malloc (sizeof(char));

	printf("%p\n", src);
	printf("%p\n", dest);

	printf("enter the number of characters:\n");
	scanf("%d", &n);
	printf("enter the source string\n");
	scanf("%s", src);

//	printf("%s\n", src);
//	leng = strlen(src);
//	printf("%d\n", leng);
	memcopy(dest, src, n);

	printf("%s\n", dest);
	printf("%s\n", src);
//	free(dest);
//	free(src);
	return 0;
}

void *memcopy(char *dest, const char *src, size_t n)
{
	int i, k = 0;
	char *temp = NULL;

	temp = malloc(sizeof(char));
	printf("%p\n", temp);

//	printf("%p\n", src);	
//	printf("%p\n", dest);
//	j = strlen(src);
	i = 0;
//	printf("length of source = %d\n", j);
	printf("%c\n", *(dest+i));

	i = 0;
	while(*(dest + i) != '\0'){
		*(temp + i ) = *(dest + i);
		i++;
	}
	*(temp + i) = '\0';

	i = 0;
	for(k=0;k < n && (src+k) != (dest + i); k++)
			*(dest + k) = *(src + k);

	while(*(temp + i) != '\0'){
		*(dest + k) = *(dest + i);
		k++;
		i++;
	}

	*(dest+k) = '\0';
	
	printf("%s\n", dest);

	return dest;
}


