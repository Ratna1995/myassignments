#include<stdio.h>

int new_atoi(char ch[]);

int main()
{
	char ch[50];
	int atoic;
	
	printf("enter a string:\n");
	fgets(ch,50,stdin);
	
	atoic = new_atoi(ch);
	if(! (atoic) )
		printf("check your input:");
	else
		printf("number=%d\n",atoic);
	return 0;
}

int new_atoi(char ch[])
{
	int i;
	int integer = 0;

	for(i = 0; ch[i]; ++i)	{
		if(ch[i] >= '0' && ch[i] <= '9')
			integer = 10 * integer + (ch[i] - '0');
	}
	return integer;
}
