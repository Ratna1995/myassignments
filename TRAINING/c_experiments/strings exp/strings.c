#include<stdio.h>
#include<string.h>
extern int strleng(char ch[]);
void stringadd(char ch[], int pos, int c);
int main()
{
	char *ch = "edge";
	char c;
	int i;
	int pos;
	int strl;
	
//	printf("enter a string:\n");
//	fgets(ch,50,stdin);

	printf("enter the position and character that should be entered:\n");
	scanf("%d %c", &pos, &c);
	
	stringadd(ch, pos, c);
	return 0;
}

void stringadd(char ch[], int pos, int c)
{	
	int i;	
	int strl;

	strl = strlen(ch);
	printf("strleng : %d\n",strl);

	for(i = strl; i >= pos-1; i--)
	{
			ch[i + 1] = ch[i];
	}		
	ch[pos - 1] = c;
	
	printf("string after placing a character in position pos:\n");
	printf("%s\n", ch);
}
