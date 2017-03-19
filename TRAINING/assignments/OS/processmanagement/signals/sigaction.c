#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
void seg_fault(int a, struct siginfo_t *in, NULL)
{
	printf ("hii\n");
	printf ("%d\n", in->si_signo);
    printf ("signal number is:%d\n", a);
	printf ("signal handled successfully\n");
    exit (1);
}

int main()
{
//	struct siginfo_t ptr;
  	struct sigaction sig;
//  sig.sa_handler = &seg_fault;    
	sig.sa_sigaction = &seg_fault(SIGSEGV, );
	 
    //signal(SIGSEGV, seg_fault);
	sigaction(SIGSEGV, &sig, NULL);
    int *p = NULL;
    *p = 345;
    return 0;
}


