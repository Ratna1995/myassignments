//creating the thread using pthread_create() print pid of thread and 
//thread group id

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <pthread.h>

void *thread_function(void *p)
{
	printf("thread group id = %d\n",getpid());
	printf("pPid of the thread = %d\n",getppid());
	printf("pid of thread is %ld\n",syscall(SYS_gettid));
	printf("I am in the thread function\n");
	getchar();
	printf("I am outing the thread process\n");

	return NULL;
}
int main()
{
	int status;
	pthread_t thread_id;

	printf("process pid = %d\n",getpid());
	printf("pPid of the process = %d\n",getppid());
	printf("process thread id is %ld\n",syscall(SYS_gettid));
	status = pthread_create(&thread_id, NULL,thread_function,NULL);
	
	if(status != 0)
	{
		printf("thread didnt create : %d\n",strerror(status));
		
	}
	getchar();

	pthread_exit(NULL);

	return 0;
}
