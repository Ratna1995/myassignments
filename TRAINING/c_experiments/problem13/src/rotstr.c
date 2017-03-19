#include "header.h"

int rotstr(const char *str1,const char *str2)
{
	int i = 0;
	int l;
	int r;

	char *str3;
	str3 = (char *) malloc (sizeof(char));	
	l = strl(str1);
	
	strcopy(str1,str3);
	strcopy(str1,(str3+l));
	*(str3+l+l) = '\0';
	r = strspn(str2,str3);

	if ( r == strl(str2) )
	return 1;

	else
	return 0;
}
	
	
	
