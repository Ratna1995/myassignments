#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include <arpa/inet.h>

#define MAX 512

int main(int argc, char *argv[])
{
	int sockd;
	char *buf;
	struct sockaddr_in src_addr;
	struct sockaddr_in dst_addr;
	socklen_t len = sizeof(struct sockaddr_in); 

	src_addr.sin_family = AF_INET;
	src_addr.sin_port = htons(150);
	src_addr.sin_addr.s_addr = inet_addr("172.16.5.26");

	if(NULL == (buf = (char *)malloc(sizeof(char) * 32))){
		printf("malloc failed\n");
		exit(1);
	}

	if((sockd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1){
		perror("socket creation failed");
		exit(EXIT_FAILURE);
	}

	printf("fd = %d\n",sockd);

	printf("enter a message\n");
	if(NULL == (fgets(buf, 32, stdin))){
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if((sendto(sockd, buf, sizeof(buf), 0,(struct sockaddr*) &src_addr,len)) < 0){
		printf("sending failed");
		exit(1);
	}

	printf("receiving....\n");
	if((recvfrom(sockd, buf, MAX, 0,(struct sockaddr*) &dst_addr, &len)) == -1){
		printf("receiving failed\n");
		exit(1);
	}

	printf("received =%s\n", buf);
	free(buf);
	close(socket);

	return 0;
}
