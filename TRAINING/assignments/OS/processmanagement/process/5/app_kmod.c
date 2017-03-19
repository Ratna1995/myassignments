#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/syscall.h>

void *thread_fun(void *p)
{
	ioctl(*((int *) p), syscall(SYS_gettid),0);
	printf("i am in thread function\n");
	printf("thread id :%ld\n", syscall(SYS_gettid));
	printf("tgid = %d\n", getpid());

	return NULL;
}	

int main()
{
	int fd;
	int status;
	pthread_t th_id;

	fd = open("/dev/myChar",O_RDWR);
	
	if(fd<0)
		perror("unable to open the device");
	else
		printf("file opened successfully %d\n", fd);

	printf("main function\n");
	printf("process id = %d\n", getpid());
	printf("tgid = %ld\n", syscall(SYS_gettid));
	
	status = pthread_create(&th_id, NULL, thread_fun, &fd);

	if(status != 0)
	{
		printf("thread creation failed :%d\n", strerror(status));
	}

	getchar();
	ioctl(fd, syscall(SYS_gettid), 10);
	pthread_exit(NULL);
	close(fd);

	return 0;
}
