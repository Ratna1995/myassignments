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
	mqd_t tom;

	if(NULL == (buf = (char *)malloc (MAX * sizeof(char)))){
		printf("malloc failed\n");
		exit(1);
	}

	while(1){
	if((tom = mq_open("/temp", O_CREAT | O_RDWR, 0666, NULL)) == -1){
		perror("mqopen failed");
		exit(EXIT_FAILURE);
	}
	printf("fd = %d\n", tom);

	printf("enter the message to send\n");
	fgets(buf, MAX, stdin);

	if(mq_send(tom, buf, strlen(buf), 3) == -1){
		perror("message sending failed");
		exit(EXIT_FAILURE);
	}

	mq_receive(tom, buf, attr -> mq_msgsize, NULL);
	printf("reply received = %s\n", buf);

	mq_close(tom);
	}
	return 0;
}


