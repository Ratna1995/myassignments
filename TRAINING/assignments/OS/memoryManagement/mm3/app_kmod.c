#include<stdio.h>
#include<fcntl.h>

int a = 10;
int main()
{
	int fd;
	fd = open("/dev/myChar",O_RDWR);

	printf("%p\n", &a);
	
	if(fd<0)
		perror("unable to open the device");
	else
		printf("file opened successfully %d\n", fd);

	ioctl(fd, getpid(), &a);
	printf("pid = %d\n ", getpid());
	getchar();
	close(fd);

	return 0;
}
