#include<stdio.h>

int strleng(char ch[])
{

	int count = 0;
	int i = 0;
	
	for(i = 0; ch[i] != '\0'; i++){
		count++;
	}	
	return count;
//	printf("str length = %d\n", count);
}
