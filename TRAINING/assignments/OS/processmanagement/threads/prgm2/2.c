#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <linux/sched.h>
#include <string.h>

//process creates process
#ifdef process_process
int main()
{
	pid_t pid;
	pid = fork();

	if(pid > 0)
	{
		printf("process is created\n");
	}
	else if(pid == 0)
	{
		printf("child Process\n ");
	}
	else
		printf("fork failed\n");

	return 0;
}
# endif

//process creates thread
#ifdef process_thread
void *thread_fun(void *p)
{
        printf("pid of thread =%d\n",getpid());
        printf("I am in thread function\n");
        getchar();
	printf("I am outing the thread function\n");
        return NULL;
        //exit(1);
}
int main(void)
{
        int status;
        pthread_t thread_id;

        status = pthread_create (&thread_id,NULL,thread_fun,NULL);

        if(status != 0)
        {
                printf("thread creation failed : %s\n",strerror(status));
        }
		printf("Process is created the thread\n");
        getchar();
        pthread_exit(NULL);
        return 0;
}
#endif

//thread creating thread

#ifdef thread_thread

void *thread_fun2(void *p)                                                      
{                                                                               
        printf("pid of thread2 =%ld\n",syscall(SYS_gettid));                                
        printf("I am in thread function\n");                                    
        getchar();                                                              
                                                                                
	    printf("I am outing the thread function\n");                                
        return NULL;                                                            
        //exit(1);                                                              
}
void *thread_fun1(void *p)
{
	int status2;
	pthread_t thread_id2;
        printf("pid of thread1 =%ld\n",syscall(SYS_gettid));
        printf("I am in thread function\n");
        getchar();
	status2 = pthread_create (&thread_id2,NULL,thread_fun2,NULL);

        if(status2 != 0)
        {
                printf("thread2 creation failed : %s\n",strerror(status2));
        }
	
	printf("I am outing the thread function\n");
        return NULL;
        //exit(1);
}

int main(void)
{
        int status1;
	
        pthread_t thread_id1;
	

        status1 = pthread_create (&thread_id1,NULL,thread_fun1,NULL);

        if(status1 != 0)
        {
                printf("thread1 creation failed : %s\n",strerror(status1));
        }
        
        getchar();
        pthread_exit(NULL);
        return 0;
}
#endif

//thread creates process
#ifdef thread_process
void *thread_fun(void *p)
{
	pid_t pid;
        printf("I am in thread function\n");
        getchar();
	pid = fork();
	if(pid > 0)
	{
		printf("process is created\n");
	}
	else if(pid == 0)
	{
		printf("child Process\n ");
	}
	else
		printf("fork failed\n");
	printf("I am outing the thread function\n");
        return NULL;
}
int main(void)
{
        int status;
        pthread_t thread_id;

        status = pthread_create (&thread_id,NULL,thread_fun,NULL);

        if(status != 0)
        {
                printf("thread creation failed : %s\n",strerror(status));
        }
        getchar();
        pthread_exit(NULL);
        return 0;
}
#endif
