#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define MAX 32

int main()
{
    int fd;
    char * myfifo = "/tmp/myfifo";
    char buf;

	/* create the FIFO (named pipe) */
    mkfifo(myfifo, 0666);

    /* write to the FIFO */
    fd = open(myfifo, O_WRONLY);
	while(1){
		buf = getchar();
		write(fd, &buf, sizeof(buf));
	}
    close(fd);

    /* remove the FIFO */
    unlink(myfifo);

    return 0;
}
