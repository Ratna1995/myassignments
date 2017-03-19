#include<stdio.h>
#include<unistd.h>

int main(void)
{
	pid_t pid;
//	char *arg[3] ={"res", NULL};

	pid = fork();
	wait();

	if(pid > 0)
		printf("parent process\n");	
	else if(pid == 0){
		execlp("sh", "./shell", NULL);
	}
	return 0;
}

