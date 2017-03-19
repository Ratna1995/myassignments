#include<stdio.h>
#include<pthread.h> 
#include<sys/syscall.h>
#include<sys/types.h>
#include<unistd.h>

void *thread_function(void *p)
{

	printf("this is printf in thread function\n");
	printf("pid:%ld\n tgid: %d\n",syscall(SYS_gettid), getpid());
	getchar();
	return NULL;

}

int main()
{
	int status;
	pthread_t th_id;
	printf("pid:%d\n tgid: %ld\n",getpid(),syscall(SYS_gettid));
	status = pthread_create (&th_id, NULL, thread_function, NULL);
	if(status != 0)
	{
		printf("thread creation failed : %d",strerror(status));
	}
		getchar();
		pthread_exit(NULL);
		return 0;

}
