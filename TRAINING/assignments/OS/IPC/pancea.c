#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<stdlib.h>
#include<semaphore.h>

#define SHM_NAME "/shm"
#define SEM_NAME "/sem"

int main()
{
	int fd;
	int *ptr;
	char buf[20];
	int i = 0;
	sem_t *my_sem;

	if((fd = shm_open(SHM_NAME,O_RDWR,0666)) == -1){
		perror("open failed");
		exit(EXIT_FAILURE);
	}

	ptr = (int *)mmap(NULL,sysconf(_SC_PAGE_SIZE),PROT_READ | PROT_WRITE, MAP_SHARED,fd,0);
	if(ptr == MAP_FAILED){
	perror("mmap failed");
	exit(EXIT_FAILURE);
	}

	my_sem = sem_open(SEM_NAME,O_CREAT,0666,0);

	if(sem_wait(my_sem) == -1){
		perror("sem failed");
		exit(EXIT_FAILURE);
	}
		
	memcpy(buf,ptr,sizeof(buf));
	
	while(i < 10){
		printf("buf[%d] = %d\n", i, buf[i]);
		i++;
	}
	printf("\n");
	
	i = 0;
	memset(ptr,0,sysconf(_SC_PAGE_SIZE));
	memcpy(buf,ptr,sizeof(buf));
	while(i < 10){
		printf("buf[%d] = %d\n",i,buf[i]);
			i++;
	}

	munmap(NULL,sysconf(_SC_PAGE_SIZE));
	
	close(fd);


	exit(0);
}
