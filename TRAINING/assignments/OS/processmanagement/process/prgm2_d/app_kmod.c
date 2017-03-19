#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/syscall.h>

/*parent and child work in same instance of virtual address 
	space*/
/* both parent and child will share the same session descriptor*/
int main()
{
	int fd;
	int pid;

	fd = open("/dev/myChar",O_RDWR);
	if(fd<0)
		perror("unable to open the device");
	else
		printf("file opened successfully %d\n", fd);

	printf("main function\n");
	printf("process id = %d\n", getpid());

	pid = vfork();
	if(pid > 0){
		printf("parent process\n");
		ioctl(fd, getpid(), 0);	
	}
	else if(pid == 0){
		printf("child process\n");
		ioctl(fd, getpid(), 0);	
		exit(0);
	}
	else {
		printf("fork failed\n");
	}

	getchar();
	close(fd);

	return 0;
}
