#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
	pid_t pid;
	int pipefd[2];
	char *str = "global edge";
	char buf;

	if(pipe(pipefd) == -1){
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	pid = fork();

	if(pid == -1){
		perror("fork");
		exit(EXIT_FAILURE);
	} else if(pid == 0) {
		close(pipefd[1]);
		while(read(pipefd[0], &buf, 1) > 0)
			write(STDOUT_FILENO, &buf, 1);
		write(STDOUT_FILENO, "\n", 1);
		close(pipefd[0]);
		_exit(EXIT_SUCCESS);
	} else if(pid > 0) {
		close(pipefd[0]);
		write(pipefd[1], str, strlen(str));
		close(pipefd[1]);
//		wait(NULL);
		exit(EXIT_SUCCESS);
	}
	return 0;
}
