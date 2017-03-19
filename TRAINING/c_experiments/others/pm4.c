#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	char *arg[3] ={argv[1], argv[2], NULL};

	printf("parent\n");
	pid = vfork();
	if(pid == 0)
		execvp(argv[1], arg);

	return 0;
}

