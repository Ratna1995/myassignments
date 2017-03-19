#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
#include<string.h>
#define MAX 32

int main()
{
	char *buf;
	//char *buf1;
	struct mq_attr *attr;
	mqd_t jerry;

	if(NULL == (buf = (char *)malloc(MAX * sizeof(char)))){
		printf("malloc failed\n");
		exit(1);
	}

	while(1){
	if((jerry = mq_open("/temp", O_RDWR)) == -1){
		perror("open failed");
		exit(EXIT_FAILURE);
	}
	printf("fd = %d\n", jerry);

	mq_receive(jerry, buf, attr -> mq_msgsize, NULL);
	printf("received = %s\n", buf);

	printf("reply to send\n");
	fgets(buf, MAX, stdin);

	mq_send(jerry, buf, strlen(buf), 3);

	mq_close(jerry);
	}
	return 0;
}

	
