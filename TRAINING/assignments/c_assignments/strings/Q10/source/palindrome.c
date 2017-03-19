#include"header.h"

/*function to find if the given string is a palindrome*/
int palindrome(char *s1)
{
	int i;	//index
	int l;	//length
	int count = 0;	//count

	l = strleng(s1) - 1;	//string length of string 1

	/* checks if string is a palindrome or not*/
	for(i = 0; i < l/2; i++){
		if(*(s1 + i) != *(s1 + l - i- 1)) {
			++count;		
			break;
		}
		
	}
	return count;
}
		
