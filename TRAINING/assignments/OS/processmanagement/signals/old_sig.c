#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>

void sig_handle(int sig_num)
{
  printf("caught the signal and handled\n");
	fflush( stdout );
	exit(0);
}
int main(void)
{
	signal(SIGINT, sig_handle);
	int *p = 0;
	signal(SIGSEGV, sig_handle);
	printf("this is old method to handle signal\n");
	*p = 20;
	pause();
	return 0;
}
