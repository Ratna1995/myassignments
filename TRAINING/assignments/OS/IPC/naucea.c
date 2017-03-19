#include<stdio.h>
#include<time.h>
#include<sys/mman.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<semaphore.h>

#define SHM_NAME "/shm"
#define SEM_NAME "/sem"
 

int main()
{
	int fd;
	int trunc;
	int *ptr;
	char buf[20];
	int i;
	sem_t *my_sem;

	if((fd = shm_open(SHM_NAME,O_CREAT | O_TRUNC | O_RDWR,0666)) == -1){
			perror("open failed");
			exit(EXIT_FAILURE);
		}

	printf("%d\n",fd);

	if((trunc = ftruncate(fd, sysconf(_SC_PAGE_SIZE))) == -1){
			perror("truncate failed:");
			exit(EXIT_FAILURE);
	}

	ptr = (int *)mmap(NULL,sysconf(_SC_PAGE_SIZE),PROT_READ | PROT_WRITE, MAP_SHARED,fd,0);
	if(ptr == MAP_FAILED){
		perror("mmap failed");
		exit(EXIT_FAILURE);
	}

	my_sem = sem_open(SEM_NAME,O_CREAT,0666,0);

	if (sem_post(my_sem )== -1){
		perror("sem failed");
		exit(EXIT_FAILURE);
	}

	int *temp = ptr;
		
	for(i = 1; i <= 10; i++){
		buf[i-1] = time(NULL) % i;
	}
	
	for(i = 1; i <= 10; i++)
		printf("time = %d\n", buf[i]);
	ptr = temp;

	memcpy(ptr,buf,sizeof(buf));
	
	getchar();
	memcpy(buf,ptr,sizeof(buf));
	for(i = 1; i <= 10; i++)
		printf("time = %d\n", buf[i]);
	munmap(NULL,sysconf(_SC_PAGE_SIZE));
	
	close(fd);

	exit(0);
}
		
