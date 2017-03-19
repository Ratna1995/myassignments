#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>


void *thread(void *b);
                               
int main(void)
{
    int err;
	pthread_t tid;
	
	int tgnum = 10;	
	printf("this is a's address in thread group leader %p\n",&tgnum);
	err = pthread_create(&tid, NULL, thread, NULL);
	printf("%d\n",getpid());
	getchar();

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	getchar();	
	printf("this is last getchar\n");
	pthread_exit (NULL);

    return 0;
}

void *thread(void *b)
{              
	int tnum = 20;
	printf("tid : %ld",syscall(SYS_gettid));
	printf("this is b's address inside thread :%p\n",&tnum);
	getchar();
	printf("this is getchar of thread\n");
}
