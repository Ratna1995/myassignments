#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<netinet/ip.h>
#include <arpa/inet.h>
#include<linux/socket.h>
#define MAX 512

int main(int argc, char *argv[])
{
	int sockd;
	char *buf = NULL;
	struct sockaddr_in dst_addr, src_addr;
	socklen_t len = sizeof(struct sockaddr_in);

	//memset((char *) &dst_addr, 0, sizeof(dst_addr));
	src_addr.sin_family = AF_INET;
	src_addr.sin_port = htons(150);
	src_addr.sin_addr.s_addr = inet_addr("172.16.5.131");

	if(NULL == (buf = (char *)malloc (sizeof(char) * 32))){
		printf("malloc failed\n");
		exit(1);
	}

	if((sockd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1){
		perror("socket creation failed");
		exit(1);
	}
	
	printf("fd = %d\n", sockd);
	if((bind(sockd, (struct sockaddr *)&src_addr, len)) == -1){
		perror("bind failed"); 
		exit(1);
	}
	
	printf("listening\n");
	if((recvfrom(sockd, buf, MAX, 0, (struct sockaddr *)&dst_addr, &len)) == -1){
		perror("receive failed");
		exit(1);
	}

	printf("received message = %s\n", buf);

	printf("enter the message to send to client \n");
	if(NULL == (fgets(buf, 32, stdin))){
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if((sendto(sockd, buf, MAX, 0, (struct sockaddr*)&dst_addr, len)) == -1){
		perror("sending failed");
		exit(1);
	}

	free(buf);
	close(sockd);
	return 0;
}
