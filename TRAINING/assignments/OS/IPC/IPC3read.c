#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include<string.h>
#include<unistd.h>
#define MAX 1024

int main()
{
	int fd;
	char * myfifo = "/tmp/myfifo";
	char buf[MAX];

	fd = open(myfifo, O_RDONLY);
	while(read(fd, buf, MAX) > 0)
		printf("string = %s\n", buf);
	close (fd);

	return 0;
}
