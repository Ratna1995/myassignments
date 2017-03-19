//new sigaction
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
void sig_handler(int sig_num, siginfo_t *m,void *a)
{
	printf("this signal handled\n");
	printf("%d\n",sig_num);
/*	printf("signo %d\n", m ->si_signo);
	printf("pid %ld\n", m ->si_pid);
	printf("uid %ld\n", m ->si_uid);
	printf("fd %p \n", m->si_fd);*/
	exit(1);
}
int main()
{
	struct sigaction instance;
	int *a = 0;
	
	printf("proceed\n");
        
	instance.sa_sigaction = &sig_handler;
	instance.sa_flags = SA_SIGINFO;
	
	sigaction(SIGSEGV,&instance,NULL);
	
	*a = 100;//segmentation fault
      
        pause();
        return 0;
}

