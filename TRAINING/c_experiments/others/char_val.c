#include<string.h>
#include<stdio.h>
#define MAX 30
int main()
{
	char ch[30];
	int i = 0;
	int flg = 0;

	printf("Enter the String");
	fgets(ch , MAX , stdin);

	printf("%s\n",ch);

for(i = 0; i < strlen(ch); i++){
	if((ch[i] >= '0' && ch[i] <= '9') || (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] == 32)){
		if(ch[0] == 32 || (ch[i] == 32 && ch[i+1] == 32 ))
			break;			
	}
	else
		break;
	}
	
	if(ch[i+1] == '\0')
		printf("Your String is right\n");
	else
		printf("Your string is not valid\n");
	return 0;	
}
