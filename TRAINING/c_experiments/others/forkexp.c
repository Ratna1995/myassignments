#include <sys/types.h>
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#define SIZE 5

int nums[SIZE] = {0, 1, 2, 3, 4};

int main()
{
	int i;
    pid_t pid;

	pid = vfork();
	
	if(pid == 0){  /* Child process */
		for(i = 0; i < SIZE; i++){
			nums[i] *= -i;
			printf("CHILD: %d ", nums[i]);    /* LINE X */
			exit(0);
		}
	}
	else if (pid > 0){  /* Parent process */
		     wait(NULL);
		     for(i = 0; i < SIZE; i++)
			     printf("PARENT: %d ", nums[i]);   /* LINE Y */
	}
	return 0;
}
