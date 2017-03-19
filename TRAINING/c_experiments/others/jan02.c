#include<stdio.h>

#pragma pack(1)
struct node{
	int data;
	struct node *next;
};

int main()
{
	printf("size of struct:%d\n",sizeof(struct node));
	return 0;
}
