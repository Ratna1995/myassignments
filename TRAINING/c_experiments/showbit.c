#include<stdio.h>

int showbit(int num)
{
    int i;
    i = (sizeof(int))*8;
    for(;i>=1;i--)
    {
	    printf("%d",1 & (num >> (i-1)));
    }

        }

