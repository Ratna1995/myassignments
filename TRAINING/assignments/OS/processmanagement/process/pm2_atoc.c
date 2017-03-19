#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#ifdef ex1
//parent and child share the same local data
int main()
{
	int a = 10;
	pid_t pid;

	pid = vfork();

	if(pid > 0){
		printf("parent process\n");
		a = a+10;
		printf("%d\n", a);
		printf("%p\n", &a);
	}
	else if(pid == 0) {
			printf("child process\n");
			a = a+20;
			printf("%d\n", a);
			printf("%p\n", &a);
			exit(0);
		}
	else
		printf("fork failed\n");

	return 0;
}
#endif

#ifdef ex2
//parent and child share the same global data
int a = 50;

int main()
{
	pid_t pid;

	pid = vfork();

	if(pid > 0){	
		printf("parent process\n");
		a = a+10;
		printf("%d\n", a);
		printf("%p\n", &a);
	}
	else if(pid == 0) {
			printf("child process\n");
			a = a+20;
			printf("%d\n", a);
			printf("%p\n", &a);
			exit(0);
		}
	else
		printf("fork failed\n");
	
	return 0;
}
#endif

#ifdef ex3
//parent and child share the same heap data
int main()
{
	char *str1 = NULL;

	pid_t pid;

	pid = vfork();

	if(pid > 0){
		printf("parent process\n");
	//	str1 = (char *) malloc (sizeof(char) * 32);
		printf("str1 = %p\n", str1);
	}
	else if(pid == 0){
		printf("child process\n");
		str1 = (char *) malloc (sizeof(char) * 32);
		printf("str1 = %p\n", str1);
		exit(0);
	}
	else
		printf("fork failed\n");

	return 0;
}
#endif
		
#ifdef ex4
//the filetext.txt will contain software limitedglobal edge
int main()
{
	FILE *fp;
	pid_t pid;
	char *str1 = "global edge";
	char *str2 = "software limited";

	fp = fopen("filetext.txt", "w+");
	pid = vfork();

	if(pid > 0){
		printf("parent process\n");
		fwrite(str1, strlen(str1), sizeof(char), fp);
		fclose(fp);
	}
	else if(pid == 0){
		printf("child process\n");
		fwrite(str2, strlen(str2), sizeof(char), fp);
		exit(0);
		fclose(fp); 
	}
	else 
		printf("fork failed\n");

	return 0;
}
#endif

	

