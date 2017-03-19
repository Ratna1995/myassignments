//basic thread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int A = 10;
void *thread_fun(void *p)
{
	A = A + 10;
	printf("pid of thread =%d\n",getpid());
	printf("I am in thread function\n");
	getchar();
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
		printf("thread creation failed : %d\n",strerror(status));
	}
	printf("pid =%d\n",getpid());
	getchar();
	printf("A = %d\n",A);
	pthread_exit(NULL);
	return 0;
}
