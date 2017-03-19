#include<stdio.h>

#if 0
/* set bit */

int showbit(int );
int main()
{
	int number;
	int bit;
	int num;
	int count = 0, i;

	printf("enter a number\n");
	scanf("%d",&number);
	printf("enter the position\n");
	scanf("%d",&bit);
	num = (1 << bit)|number;
	i = (sizeof(int))*8;
	for(;i>=1;i--)
        {
                printf("%d",1 & (num >> (i-1)));
                count++;
                if(count % 8 == 0)
                        printf(" ");
        }

}

#endif

#if 0
/* clear bit */

int main()
{       
	int number;
        int bit;
        int num;
        int count = 0, i;

        printf("enter a number\n");
        scanf("%d",&number);
        printf("enter the position\n");
        scanf("%d",&bit);
        num = (1 << bit) ^ number;
        i = (sizeof(int))*8;
	for(;i>=1;i--)
	{
                printf("%d",1 & (num >> (i-1)));
                count++;
                if(count % 8 == 0)
                        printf(" ");
        }

}
#endif

#if 0
/* toggle a bit */

int main()
{
	int number;
        int bit;
        int num;
        int count = 0, i;

        printf("enter a number\n");
        scanf("%d",&number);
        printf("enter the position\n");
        scanf("%d",&bit);
	num = (((1 << bit) & number == 0)?((1 << bit) | number):((1 << bit) ^ number));
	i = (sizeof(int))*8;
        for(;i>=1;i--)
        {
                printf("%d",1 & (num >> (i-1)));
                count++;
                if(count % 8 == 0)
                        printf(" ");  
      }
}
#endif

#if 1
/* even or odd */
int main()
{
	int number;
        printf("enter a number\n");
        scanf("%d",&number);
	((1 & number) == 0)?printf("even\n"):printf("odd\n");
}
#endif	
