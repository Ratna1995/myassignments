#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	int pipefd[2];
	char buf;

	if(pipe(pipefd) == -1) {
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	pid = fork();
	if(pid == -1) {
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0) {
		dup2(pipefd[1],1);
		close(pipefd[0]);
		execl("/bin/ls", "ls", NULL);
		_exit(EXIT_SUCCESS);
	}
	else if(pid > 0){
		dup2(pipefd[0], 0);
		close(pipefd[1]);
		execl("/usr/bin/wc", "wc", "-l", NULL);
		exit(EXIT_SUCCESS);
	}
	return 0;
}

