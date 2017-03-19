#include<stdio.h>
//const int ch = 23;
int *p = 0x0804A280;
//static int i,j;
int main(){
	//p = (unsigned int*)main;
	*p = 20;
	printf("%d\n",*p);
	return 0;
}

