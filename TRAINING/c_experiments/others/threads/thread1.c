#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void thread_function(void *p)
{
	printf("i am in thread\n");

	return NULL;
}

int main()
{
	int status;
	pthread_t th_id;

	status = pthread_create(&th_id, NULL, thread_function, NULL);
	if(status != 0)
		printf("thread creation failed: %s", strerror(status));
	pthread_exit(NULL);

	return 0;
}
