#include<stdio.h>
#include<unistd.h>

int a = 1;
int main()
{
	int b= 20;
	pid_t pid;

	printf("%d\n", getpid());
	pid = fork();

	getchar();

	if(pid == 0)
		printf("child process\n");
	else if(pid > 0)
		printf("parent process\n");
	else
		printf("fork failed\n");

	return 0;
}
