#include <stdio.h>
#include <fcntl.h>

int main( void )
{
	int fd;

	fd = open("/dev/mychar", O_RDWR);

	if (fd < 0)
		perror("Unable to open the Device");
	else
		printf("File Opened Successfully %d\n", fd);
	
	close(fd);

	return 0;
}