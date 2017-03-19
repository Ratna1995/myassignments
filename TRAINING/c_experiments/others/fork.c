#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sched.h>

int main()
{
	pid_t pid;
	pid_t tgid;

	pid = fork();

	if(pid > 0){
		printf("parent process\n");
		printf("return value of fork() = %d\n", pid);
		printf("pid = %d\n", getpid());
		printf("tgid = %d\n", tgid);
		printf("parent ppid = %d\n", getppid());
	}
	else if(pid == 0){
		printf("child process\n");
		printf("return value of fork() = %d\n", pid);
		printf("pid = %d\n", getpid());
		printf("child ppid = %d\n", getppid());
		getchar();	
	}
	else
		printf("fork failed\n");

	getchar();

	return 0;

}
