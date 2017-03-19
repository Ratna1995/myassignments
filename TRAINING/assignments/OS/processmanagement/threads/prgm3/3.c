#include <stdio.h>                                                              
#include <stdlib.h>                                                             
#include <pthread.h>
#include <sys/syscall.h>

#ifdef global_data
//Will both Thread Group Leader and the thread share the same global data
int A = 10;                                                                     
void *thread_fun()                                                       
{                                                                               
    A = A + 10;                                                                 
    printf("I am in thread function\n");                                        
    printf("pid of thread =%d\n",syscall(SYS_gettid));
	printf("tgid = %d\n", getpid());
    getchar();                                                                  
    return NULL;                                                                
    //exit(1);                                                                  
}

int main(void)                                                                  
{                                                                               
    int status;                                                                 
    pthread_t thread_id;                                                        
                                                                                
    status = pthread_create (&thread_id,NULL,thread_fun,NULL);                  
                                                                                
    if(status != 0)                                                             
    {                                                                           
        printf("thread creation failed : %d\n",strerror(status));               
    }                                                                           
    printf("pid =%d\n",getpid());                                               
    printf("tgid =%d\n",syscall(SYS_gettid));
    getchar();                                                                  
    printf("A = %d\n",A);                                                       
    pthread_exit(NULL);                                                         
    return 0;                                                                   
}      
#endif

#ifdef heap
//Will both Thread Group Leader (TGL) and the thread share the same heap data
//
void *thread_fun(void *str)
{
	printf("i am in thread\n");
	printf("address of str = %p\n", str);
	printf("thread id = %d\n", syscall(SYS_gettid));
	getchar();
	return NULL;
}

int main()
{
	char *p = NULL;
	int status;
	pthread_t th_id;
	
	p = (char *)malloc(50 * sizeof(char));
	printf("pid = %d\n", getpid());

	status = pthread_create(&th_id, NULL, thread_fun, p);

	if(status != 0)
	{
		printf("thread creation failed : %d\n", strerror(status));
	}

	printf("address of p : %p\n", p);

	getchar();
	pthread_exit(NULL);
	return 0;
}
#endif       

#ifdef stack
/*Will both Thread Group Leader (TGL) and the thread share the same stack 
  segment or they have their own stack segment*/ 
//they have their own stack segment
void *thread_fun(void *p)
{
	int *a = (int *)p;
	printf("i am in thread \n");
	printf("address of a : %p\n", &a);
	return NULL;
}

int main()
{
	int *a = 10;
	int status;
	pthread_t th_id;
	
	printf("pid = %d\n", getpid());

	status = pthread_create(&th_id, NULL, thread_fun, a);

	if(status != 0)
	{
		printf("thread creation failed : %d\n", strerror(status));
	}
	printf("address of a = %p\n", &a);

	getchar();
	pthread_exit(NULL);
	return 0;
}
#endif


