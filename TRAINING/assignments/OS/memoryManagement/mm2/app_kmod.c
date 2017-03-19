#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;
	fd = open("/dev/myChar",O_RDWR);
	
	if(fd<0)
		perror("unable to open the device");
	else
		printf("file opened successfully %d\n", fd);

	ioctl(fd, getpid(), 10);
	printf("pid = %d\n ", getpid());
	getchar();
	close(fd);

	return 0;
}
