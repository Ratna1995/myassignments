//new sigaction
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
//int siga(int signum, const struct sigaction *act,struct sigaction *oldac
void sig_handler(int sig_num, siginfo_t *m,void *a)
{
	printf("signal handled successfully \n");
	printf("%d\n",sig_num);
	printf("%d\n", m ->si_signo);
	printf("%ld\n", m ->si_pid);
	printf("%ld\n", m ->si_uid);
	//printf("%p\n"
	exit(1);
}
int main()
{
	struct sigaction instance;
	int *a = 0;
//	struct siginfo_t *instance1;
	printf("proceed\n");
        instance.sa_sigaction = &sig_handler;
	instance.sa_flags = SA_SIGINFO;
	sigaction(SIGSEGV,&instance,NULL);
	free(a);
	free(a);
	//printf("%d\n",a[5000]);
	
      
        pause();
        return 0;
}

